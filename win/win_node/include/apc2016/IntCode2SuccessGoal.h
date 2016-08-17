// Generated by gencpp from file apc2016/IntCode2SuccessGoal.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_INTCODE2SUCCESSGOAL_H
#define APC2016_MESSAGE_INTCODE2SUCCESSGOAL_H


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
struct IntCode2SuccessGoal_
{
  typedef IntCode2SuccessGoal_<ContainerAllocator> Type;

  IntCode2SuccessGoal_()
    : id(0)  {
    }
  IntCode2SuccessGoal_(const ContainerAllocator& _alloc)
    : id(0)  {
    }



   typedef int16_t _id_type;
  _id_type id;




  typedef boost::shared_ptr< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> const> ConstPtr;

}; // struct IntCode2SuccessGoal_

typedef ::apc2016::IntCode2SuccessGoal_<std::allocator<void> > IntCode2SuccessGoal;

typedef boost::shared_ptr< ::apc2016::IntCode2SuccessGoal > IntCode2SuccessGoalPtr;
typedef boost::shared_ptr< ::apc2016::IntCode2SuccessGoal const> IntCode2SuccessGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "83303829ff5167a112112db2bf7b7905";
  }

  static const char* value(const ::apc2016::IntCode2SuccessGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x83303829ff5167a1ULL;
  static const uint64_t static_value2 = 0x12112db2bf7b7905ULL;
};

template<class ContainerAllocator>
struct DataType< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "apc2016/IntCode2SuccessGoal";
  }

  static const char* value(const ::apc2016::IntCode2SuccessGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int16 id\n\
";
  }

  static const char* value(const ::apc2016::IntCode2SuccessGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct IntCode2SuccessGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::apc2016::IntCode2SuccessGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::apc2016::IntCode2SuccessGoal_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int16_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APC2016_MESSAGE_INTCODE2SUCCESSGOAL_H
