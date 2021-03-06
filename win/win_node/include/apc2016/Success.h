// Generated by gencpp from file apc2016/Success.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_SUCCESS_H
#define APC2016_MESSAGE_SUCCESS_H

#include <ros/service_traits.h>


#include <apc2016/SuccessRequest.h>
#include <apc2016/SuccessResponse.h>


namespace apc2016
{

struct Success
{

typedef SuccessRequest Request;
typedef SuccessResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Success
} // namespace apc2016


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::apc2016::Success > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::apc2016::Success&) { return value(); }
};

template<>
struct DataType< ::apc2016::Success > {
  static const char* value()
  {
    return "apc2016/Success";
  }

  static const char* value(const ::apc2016::Success&) { return value(); }
};


// service_traits::MD5Sum< ::apc2016::SuccessRequest> should match 
// service_traits::MD5Sum< ::apc2016::Success > 
template<>
struct MD5Sum< ::apc2016::SuccessRequest>
{
  static const char* value()
  {
    return MD5Sum< ::apc2016::Success >::value();
  }
  static const char* value(const ::apc2016::SuccessRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::apc2016::SuccessRequest> should match 
// service_traits::DataType< ::apc2016::Success > 
template<>
struct DataType< ::apc2016::SuccessRequest>
{
  static const char* value()
  {
    return DataType< ::apc2016::Success >::value();
  }
  static const char* value(const ::apc2016::SuccessRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::apc2016::SuccessResponse> should match 
// service_traits::MD5Sum< ::apc2016::Success > 
template<>
struct MD5Sum< ::apc2016::SuccessResponse>
{
  static const char* value()
  {
    return MD5Sum< ::apc2016::Success >::value();
  }
  static const char* value(const ::apc2016::SuccessResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::apc2016::SuccessResponse> should match 
// service_traits::DataType< ::apc2016::Success > 
template<>
struct DataType< ::apc2016::SuccessResponse>
{
  static const char* value()
  {
    return DataType< ::apc2016::Success >::value();
  }
  static const char* value(const ::apc2016::SuccessResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // APC2016_MESSAGE_SUCCESS_H
