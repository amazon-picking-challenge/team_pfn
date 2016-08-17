// Generated by gencpp from file apc2016/CalibrationUpdate.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_CALIBRATIONUPDATE_H
#define APC2016_MESSAGE_CALIBRATIONUPDATE_H

#include <ros/service_traits.h>


#include <apc2016/CalibrationUpdateRequest.h>
#include <apc2016/CalibrationUpdateResponse.h>


namespace apc2016
{

struct CalibrationUpdate
{

typedef CalibrationUpdateRequest Request;
typedef CalibrationUpdateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CalibrationUpdate
} // namespace apc2016


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::apc2016::CalibrationUpdate > {
  static const char* value()
  {
    return "c9453ff78db7bada90105deecb31dc37";
  }

  static const char* value(const ::apc2016::CalibrationUpdate&) { return value(); }
};

template<>
struct DataType< ::apc2016::CalibrationUpdate > {
  static const char* value()
  {
    return "apc2016/CalibrationUpdate";
  }

  static const char* value(const ::apc2016::CalibrationUpdate&) { return value(); }
};


// service_traits::MD5Sum< ::apc2016::CalibrationUpdateRequest> should match 
// service_traits::MD5Sum< ::apc2016::CalibrationUpdate > 
template<>
struct MD5Sum< ::apc2016::CalibrationUpdateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::apc2016::CalibrationUpdate >::value();
  }
  static const char* value(const ::apc2016::CalibrationUpdateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::apc2016::CalibrationUpdateRequest> should match 
// service_traits::DataType< ::apc2016::CalibrationUpdate > 
template<>
struct DataType< ::apc2016::CalibrationUpdateRequest>
{
  static const char* value()
  {
    return DataType< ::apc2016::CalibrationUpdate >::value();
  }
  static const char* value(const ::apc2016::CalibrationUpdateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::apc2016::CalibrationUpdateResponse> should match 
// service_traits::MD5Sum< ::apc2016::CalibrationUpdate > 
template<>
struct MD5Sum< ::apc2016::CalibrationUpdateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::apc2016::CalibrationUpdate >::value();
  }
  static const char* value(const ::apc2016::CalibrationUpdateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::apc2016::CalibrationUpdateResponse> should match 
// service_traits::DataType< ::apc2016::CalibrationUpdate > 
template<>
struct DataType< ::apc2016::CalibrationUpdateResponse>
{
  static const char* value()
  {
    return DataType< ::apc2016::CalibrationUpdate >::value();
  }
  static const char* value(const ::apc2016::CalibrationUpdateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // APC2016_MESSAGE_CALIBRATIONUPDATE_H
