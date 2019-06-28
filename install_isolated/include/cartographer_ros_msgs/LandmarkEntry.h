// Generated by gencpp from file cartographer_ros_msgs/LandmarkEntry.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_LANDMARKENTRY_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_LANDMARKENTRY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct LandmarkEntry_
{
  typedef LandmarkEntry_<ContainerAllocator> Type;

  LandmarkEntry_()
    : id()
    , tracking_from_landmark_transform()
    , translation_weight(0.0)
    , rotation_weight(0.0)  {
    }
  LandmarkEntry_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , tracking_from_landmark_transform(_alloc)
    , translation_weight(0.0)
    , rotation_weight(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _tracking_from_landmark_transform_type;
  _tracking_from_landmark_transform_type tracking_from_landmark_transform;

   typedef double _translation_weight_type;
  _translation_weight_type translation_weight;

   typedef double _rotation_weight_type;
  _rotation_weight_type rotation_weight;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> const> ConstPtr;

}; // struct LandmarkEntry_

typedef ::cartographer_ros_msgs::LandmarkEntry_<std::allocator<void> > LandmarkEntry;

typedef boost::shared_ptr< ::cartographer_ros_msgs::LandmarkEntry > LandmarkEntryPtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::LandmarkEntry const> LandmarkEntryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "133f8dd7259f83a87eb4d78b301c0b70";
  }

  static const char* value(const ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x133f8dd7259f83a8ULL;
  static const uint64_t static_value2 = 0x7eb4d78b301c0b70ULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/LandmarkEntry";
  }

  static const char* value(const ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 2018 The Cartographer Authors\n"
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
"string id\n"
"geometry_msgs/Pose tracking_from_landmark_transform\n"
"float64 translation_weight\n"
"float64 rotation_weight\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.tracking_from_landmark_transform);
      stream.next(m.translation_weight);
      stream.next(m.rotation_weight);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LandmarkEntry_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::LandmarkEntry_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "tracking_from_landmark_transform: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.tracking_from_landmark_transform);
    s << indent << "translation_weight: ";
    Printer<double>::stream(s, indent + "  ", v.translation_weight);
    s << indent << "rotation_weight: ";
    Printer<double>::stream(s, indent + "  ", v.rotation_weight);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_LANDMARKENTRY_H
