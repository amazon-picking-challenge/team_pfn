// Generated by gencpp from file apc2016/RobotArmMoveGlobalGoal.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_ROBOTARMMOVEGLOBALGOAL_H
#define APC2016_MESSAGE_ROBOTARMMOVEGLOBALGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <apc2016/FanucTwist.h>

namespace apc2016
{
template <class ContainerAllocator>
struct RobotArmMoveGlobalGoal_
{
  typedef RobotArmMoveGlobalGoal_<ContainerAllocator> Type;

  RobotArmMoveGlobalGoal_()
    : target()  {
    }
  RobotArmMoveGlobalGoal_(const ContainerAllocator& _alloc)
    : target(_alloc)  {
    }



   typedef  ::apc2016::FanucTwist_<ContainerAllocator>  _target_type;
  _target_type target;




  typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> const> ConstPtr;

}; // struct RobotArmMoveGlobalGoal_

typedef ::apc2016::RobotArmMoveGlobalGoal_<std::allocator<void> > RobotArmMoveGlobalGoal;

typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalGoal > RobotArmMoveGlobalGoalPtr;
typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalGoal const> RobotArmMoveGlobalGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4962d2314f3e80c5ac485b03e65c51c2";
  }

  static const char* value(const ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4962d2314f3e80c5ULL;
  static const uint64_t static_value2 = 0xac485b03e65c51c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "apc2016/RobotArmMoveGlobalGoal";
  }

  static const char* value(const ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
apc2016/FanucTwist target\n\
\n\
================================================================================\n\
MSG: apc2016/FanucTwist\n\
geometry_msgs/Vector3 linear\n\
geometry_msgs/Vector3 angular\n\
int32 fut000\n\
int32 kakujiku\n\
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

  static const char* value(const ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RobotArmMoveGlobalGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator>& v)
  {
    s << indent << "target: ";
    s << std::endl;
    Printer< ::apc2016::FanucTwist_<ContainerAllocator> >::stream(s, indent + "  ", v.target);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APC2016_MESSAGE_ROBOTARMMOVEGLOBALGOAL_H
