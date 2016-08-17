// Generated by gencpp from file apc2016/RobotArmMoveGlobalActionGoal.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_ROBOTARMMOVEGLOBALACTIONGOAL_H
#define APC2016_MESSAGE_ROBOTARMMOVEGLOBALACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <apc2016/RobotArmMoveGlobalGoal.h>

namespace apc2016
{
template <class ContainerAllocator>
struct RobotArmMoveGlobalActionGoal_
{
  typedef RobotArmMoveGlobalActionGoal_<ContainerAllocator> Type;

  RobotArmMoveGlobalActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  RobotArmMoveGlobalActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;




  typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct RobotArmMoveGlobalActionGoal_

typedef ::apc2016::RobotArmMoveGlobalActionGoal_<std::allocator<void> > RobotArmMoveGlobalActionGoal;

typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalActionGoal > RobotArmMoveGlobalActionGoalPtr;
typedef boost::shared_ptr< ::apc2016::RobotArmMoveGlobalActionGoal const> RobotArmMoveGlobalActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace apc2016

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'apc2016': ['/home/kamiya/data/apc/ros/src/apc2016/msg', '/home/kamiya/data/apc/ros/devel/share/apc2016/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c934d5a3cb004edb682e99e679918f3d";
  }

  static const char* value(const ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc934d5a3cb004edbULL;
  static const uint64_t static_value2 = 0x682e99e679918f3dULL;
};

template<class ContainerAllocator>
struct DataType< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "apc2016/RobotArmMoveGlobalActionGoal";
  }

  static const char* value(const ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
RobotArmMoveGlobalGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: apc2016/RobotArmMoveGlobalGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
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

  static const char* value(const ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RobotArmMoveGlobalActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::apc2016::RobotArmMoveGlobalActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::apc2016::RobotArmMoveGlobalGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APC2016_MESSAGE_ROBOTARMMOVEGLOBALACTIONGOAL_H
