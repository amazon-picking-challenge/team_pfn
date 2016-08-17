// Generated by gencpp from file apc2016/RobotArmMoveGlobalResult.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_ROBOTARMMOVEGLOBALRESULT_H
#define APC2016_MESSAGE_ROBOTARMMOVEGLOBALRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace apc2016
{
template <class ContainerAllocator>
struct RobotArmMoveGlobalResult_
{
  typedef RobotArmMoveGlobalResult_<ContainerAllocator> Type;

  RobotArmMoveGlobalResult_()
    : success(false)  {
    }
  RobotArmMoveGlobalResult_(const ContainerAllocator& _alloc)
    : success(false)  {
    }



   typedef uint8_t _success_type;
  _success_type success;




  typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> const> ConstPtr;

}; // struct RobotArmMoveGlobalResult_

typedef ::apc2016::RobotArmMoveGlobalResult_<std::allocator<void> > RobotArmMoveGlobalResult;

typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalResult > RobotArmMoveGlobalResultPtr;
typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalResult const> RobotArmMoveGlobalResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace apc2016

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'apc2016': ['/home/kamiya/data/apc/ros/src/apc2016/msg', '/home/kamiya/data/apc/ros/devel/share/apc2016/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "apc2016/RobotArmMoveGlobalResult";
  }

  static const char* value(const ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
bool success\n\
";
  }

  static const char* value(const ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RobotArmMoveGlobalResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::apc2016::RobotArmMoveGlobalResult_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APC2016_MESSAGE_ROBOTARMMOVEGLOBALRESULT_H
