// Generated by gencpp from file apc2016/distance.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_DISTANCE_H
#define APC2016_MESSAGE_DISTANCE_H

#include <ros/service_traits.h>


#include <apc2016/distanceRequest.h>
#include <apc2016/distanceResponse.h>


namespace apc2016
{

struct distance
{

typedef distanceRequest Request;
typedef distanceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct distance
} // namespace apc2016


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::apc2016::distance > {
  static const char* value()
  {
    return "e849c97d1ef10202aeb4cf6348fb1fc7";
  }

  static const char* value(const ::apc2016::distance&) { return value(); }
};

template<>
struct DataType< ::apc2016::distance > {
  static const char* value()
  {
    return "apc2016/distance";
  }

  static const char* value(const ::apc2016::distance&) { return value(); }
};


// service_traits::MD5Sum< ::apc2016::distanceRequest> should match 
// service_traits::MD5Sum< ::apc2016::distance > 
template<>
struct MD5Sum< ::apc2016::distanceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::apc2016::distance >::value();
  }
  static const char* value(const ::apc2016::distanceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::apc2016::distanceRequest> should match 
// service_traits::DataType< ::apc2016::distance > 
template<>
struct DataType< ::apc2016::distanceRequest>
{
  static const char* value()
  {
    return DataType< ::apc2016::distance >::value();
  }
  static const char* value(const ::apc2016::distanceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::apc2016::distanceResponse> should match 
// service_traits::MD5Sum< ::apc2016::distance > 
template<>
struct MD5Sum< ::apc2016::distanceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::apc2016::distance >::value();
  }
  static const char* value(const ::apc2016::distanceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::apc2016::distanceResponse> should match 
// service_traits::DataType< ::apc2016::distance > 
template<>
struct DataType< ::apc2016::distanceResponse>
{
  static const char* value()
  {
    return DataType< ::apc2016::distance >::value();
  }
  static const char* value(const ::apc2016::distanceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // APC2016_MESSAGE_DISTANCE_H
