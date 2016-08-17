/*
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2014, Open Source Robotics Foundation, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Willow Garage, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

#include "ros/transport/transport.h"
#include "ros/console.h"

#include <winsock2.h>
#include <iphlpapi.h>
#include <ws2tcpip.h>
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "iphlpapi.lib")

#include<vector>
#include<string>

//#include <netinet/in.h>
//#include <sys/socket.h>
//#include <netdb.h>
//
//#if !defined(__ANDROID__)
//#include <ifaddrs.h>
//#endif

#ifndef NI_MAXHOST
  #define NI_MAXHOST 1025
#endif


void EnumMyAddress(std::vector<std::string>& addrlist)
{
	ULONG len = 0;   // �񋓂ɕK�v�ȃo�C�g���ł��B
	DWORD ret = GetAdaptersAddresses(AF_UNSPEC, 0, 0, 0, &len);
	if (ret != ERROR_BUFFER_OVERFLOW) return;   // �������s���ȊO�̃G���[�Ȃ琧���Ԃ��܂��B

												// �v�����ꂽ�o�C�g�� len ���̃������� adpts �ɗp�ӂ��܂��B
	PIP_ADAPTER_ADDRESSES adpts = (PIP_ADAPTER_ADDRESSES)new BYTE[len];
	if (adpts == 0) return;      // ��������p�ӂł��Ȃ���ΐ����Ԃ��܂��B

	ret = GetAdaptersAddresses(AF_UNSPEC, 0, 0, adpts, &len);   // adpts �ɏ���񋓂��܂��B
	if (ret != ERROR_SUCCESS) {   // �A�_�v�^��񋓂ł��Ȃ������琧���Ԃ��܂��B
		delete[] adpts;
		return;
	}

	WSADATA data;
	ZeroMemory(&data, sizeof(data));
	WSAStartup(MAKEWORD(2, 2), &data);
	// adpts �z����̊e�A�_�v�^��������� adpt �ɓ���Ă݂Ă����܂��B
	for (PIP_ADAPTER_ADDRESSES adpt = adpts; adpt; adpt = adpt->Next) {
		if (adpt->PhysicalAddressLength == 0) continue;            // �f�[�^�����N�w�������Ȃ��Ȃ�
		if (adpt->IfType == IF_TYPE_SOFTWARE_LOOPBACK) continue;   // ���[�v�o�b�N �A�h���X�Ȃ�
																   // adpt �A�_�v�^���� IP �A�h���X������� uni �ɓ���Ă݂Ă����܂��B
		for (PIP_ADAPTER_UNICAST_ADDRESS uni = adpt->FirstUnicastAddress; uni; uni = uni->Next) {
			// DNS �ɑ΂��ēK�؂ȃA�h���X�łȂ��i�v���C�x�[�g�Ȃǁj�Ȃ��
			if (~(uni->Flags) & IP_ADAPTER_ADDRESS_DNS_ELIGIBLE) continue;   // ���̃A�h���X��
																			 // �A�v���P�[�V�������g���ׂ��łȂ��A�h���X�Ȃ�
			if (uni->Flags & IP_ADAPTER_ADDRESS_TRANSIENT) continue;         // ���̃A�h���X��
			char host[NI_MAXHOST + 1] = { '\0' };   // host �Ɂu0.0.0.0�v�`���̕�������擾���܂��B
			if (getnameinfo(uni->Address.lpSockaddr, uni->Address.iSockaddrLength
				, host, sizeof(host), 0, 0, NI_NUMERICHOST/*NI_NAMEREQD*/) == 0)
			{
				 // �擾�����u0.0.0.0�v�\�L�������ŏ���
				addrlist.push_back(std::string(host));
			}
		}
	}
	WSACleanup();
	delete[] adpts;
}



namespace ros
{

Transport::Transport()
: only_localhost_allowed_(false)
{
  char *ros_ip_env = NULL, *ros_hostname_env = NULL;
  #ifdef _MSC_VER
    _dupenv_s(&ros_ip_env, NULL, "ROS_IP");
    _dupenv_s(&ros_hostname_env, NULL, "ROS_HOSTNAME");
  #else
    ros_ip_env = getenv("ROS_IP");
    ros_hostname_env = getenv("ROS_HOSTNAME");
  #endif

  if (ros_hostname_env && !strcmp(ros_hostname_env, "localhost"))
    only_localhost_allowed_ = true;
  else if (ros_ip_env && !strncmp(ros_ip_env, "127.", 4))
    only_localhost_allowed_ = true;
  else if (ros_ip_env && !strcmp(ros_ip_env, "::1"))
    only_localhost_allowed_ = true;

  char our_hostname[256] = {0};
  gethostname(our_hostname, sizeof(our_hostname)-1);
  allowed_hosts_.push_back(std::string(our_hostname));
  allowed_hosts_.push_back("localhost");

  /*
#if !defined(__ANDROID__)
  // for ipv4 loopback, we'll explicitly search for 127.* in isHostAllowed()
  // now we need to iterate all local interfaces and add their addresses
  // from the getifaddrs manpage:  (maybe something similar for windows ?) 
  ifaddrs *ifaddr;
  if (-1 == getifaddrs(&ifaddr))
  {
    ROS_ERROR("getifaddr() failed");
    return;
  }
  for (ifaddrs *ifa = ifaddr; ifa; ifa = ifa->ifa_next)
  {
    if(NULL == ifa->ifa_addr)
      continue; // ifa_addr can be NULL

    int family = ifa->ifa_addr->sa_family;
    if (family != AF_INET && family != AF_INET6)
      continue; // we're only looking for IP addresses

    char addr[NI_MAXHOST] = {0};
    if (getnameinfo(ifa->ifa_addr,
                    (family == AF_INET) ? sizeof(sockaddr_in)
                                        : sizeof(sockaddr_in6),
                    addr, NI_MAXHOST,
                    NULL, 0, NI_NUMERICHOST))
    {
      ROS_ERROR("getnameinfo() failed");
      continue;
    }
    allowed_hosts_.push_back(std::string(addr));
  }
  freeifaddrs(ifaddr);
#endif

  */


  std::vector<std::string>	list;
  EnumMyAddress(list);

  for (int i = 0; i < list.size(); i++)
  {
	  allowed_hosts_.push_back(list[i]);
  }


}

bool Transport::isHostAllowed(const std::string &host) const
{
  if (!only_localhost_allowed_)
    return true; // doesn't matter; we'll connect to anybody

  if (host.length() >= 4 && host.substr(0, 4) == std::string("127."))
    return true; // ipv4 localhost
  // now, loop through the list of valid hostnames and see if we find it
  for (std::vector<std::string>::const_iterator it = allowed_hosts_.begin(); 
       it != allowed_hosts_.end(); ++it)
  {
    if (host == *it)
      return true; // hooray
  }
  ROS_WARN("ROS_HOSTNAME / ROS_IP is set to only allow local connections, so "
           "a requested connection to '%s' is being rejected.", host.c_str());
  return false; // sadness
}

}

