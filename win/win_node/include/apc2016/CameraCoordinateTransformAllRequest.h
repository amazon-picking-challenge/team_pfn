// Generated by gencpp from file apc2016/CameraCoordinateTransformAllRequest.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_CAMERACOORDINATETRANSFORMALLREQUEST_H
#define APC2016_MESSAGE_CAMERACOORDINATETRANSFORMALLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Twist.h>

namespace apc2016
{
template <class ContainerAllocator>
struct CameraCoordinateTransformAllRequest_
{
  typedef CameraCoordinateTransformAllRequest_<ContainerAllocator> Type;

  CameraCoordinateTransformAllRequest_()
    : x()
    , y()
    , z()
    , xyzwpr()  {
    }
  CameraCoordinateTransformAllRequest_(const ContainerAllocator& _alloc)
    : x(_alloc)
    , y(_alloc)
    , z(_alloc)
    , xyzwpr(_alloc)  {
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _x_type;
  _x_type x;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _y_type;
  _y_type y;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _z_type;
  _z_type z;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _xyzwpr_type;
  _xyzwpr_type xyzwpr;




  typedef boost::shared_ptr< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CameraCoordinateTransformAllRequest_

typedef ::apc2016::CameraCoordinateTransformAllRequest_<std::allocator<void> > CameraCoordinateTransformAllRequest;

typedef boost::shared_ptr< ::apc2016::CameraCoordinateTransformAllRequest > CameraCoordinateTransformAllRequestPtr;
typedef boost::shared_ptr< ::apc2016::CameraCoordinateTransformAllRequest const> CameraCoordinateTransformAllRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace apc2016

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'apc2016': ['/home/kamiya/data/apc/ros/src/apc2016/msg', '/home/kamiya/data/apc/ros/devel/share/apc2016/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0c1c43e14a9241da925fec1108588178";
  }

  static const char* value(const ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0c1c43e14a9241daULL;
  static const uint64_t static_value2 = 0x925fec1108588178ULL;
};

template<class ContainerAllocator>
struct DataType< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "apc2016/CameraCoordinateTransformAllRequest";
  }

  static const char* value(const ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] x\n\
float32[] y\n\
float32[] z\n\
geometry_msgs/Twist xyzwpr\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.xyzwpr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CameraCoordinateTransformAllRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::apc2016::CameraCoordinateTransformAllRequest_<ContainerAllocator>& v)
  {
    s << indent << "x[]" << std::endl;
    for (size_t i = 0; i < v.x.size(); ++i)
    {
      s << indent << "  x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.x[i]);
    }
    s << indent << "y[]" << std::endl;
    for (size_t i = 0; i < v.y.size(); ++i)
    {
      s << indent << "  y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.y[i]);
    }
    s << indent << "z[]" << std::endl;
    for (size_t i = 0; i < v.z.size(); ++i)
    {
      s << indent << "  z[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.z[i]);
    }
    s << indent << "xyzwpr: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.xyzwpr);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APC2016_MESSAGE_CAMERACOORDINATETRANSFORMALLREQUEST_H
