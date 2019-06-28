// Generated by gencpp from file cartographer_ros_msgs/StartTrajectoryResponse.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_STARTTRAJECTORYRESPONSE_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_STARTTRAJECTORYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cartographer_ros_msgs/StatusResponse.h>

namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct StartTrajectoryResponse_
{
  typedef StartTrajectoryResponse_<ContainerAllocator> Type;

  StartTrajectoryResponse_()
    : status()
    , trajectory_id(0)  {
    }
  StartTrajectoryResponse_(const ContainerAllocator& _alloc)
    : status(_alloc)
    , trajectory_id(0)  {
  (void)_alloc;
    }



   typedef  ::cartographer_ros_msgs::StatusResponse_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef int32_t _trajectory_id_type;
  _trajectory_id_type trajectory_id;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StartTrajectoryResponse_

typedef ::cartographer_ros_msgs::StartTrajectoryResponse_<std::allocator<void> > StartTrajectoryResponse;

typedef boost::shared_ptr< ::cartographer_ros_msgs::StartTrajectoryResponse > StartTrajectoryResponsePtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::StartTrajectoryResponse const> StartTrajectoryResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'cartographer_ros_msgs': ['/home/louis/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a14602d76d9b734b374a25be319cdbe9";
  }

  static const char* value(const ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa14602d76d9b734bULL;
  static const uint64_t static_value2 = 0x374a25be319cdbe9ULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/StartTrajectoryResponse";
  }

  static const char* value(const ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/StatusResponse status\n"
"int32 trajectory_id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/StatusResponse\n"
"# Copyright 2018 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"# A common message type to indicate the outcome of a service call.\n"
"uint8 code\n"
"string message\n"
;
  }

  static const char* value(const ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.trajectory_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StartTrajectoryResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::StartTrajectoryResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    s << std::endl;
    Printer< ::cartographer_ros_msgs::StatusResponse_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "trajectory_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.trajectory_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_STARTTRAJECTORYRESPONSE_H
