// Generated by gencpp from file example_action_server/demoResult.msg
// DO NOT EDIT!


#ifndef EXAMPLE_ACTION_SERVER_MESSAGE_DEMORESULT_H
#define EXAMPLE_ACTION_SERVER_MESSAGE_DEMORESULT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace example_action_server
{
template <class ContainerAllocator>
struct demoResult_
{
  typedef demoResult_<ContainerAllocator> Type;

  demoResult_()
    : output(0)
    , goal_stamp(0)  {
    }
  demoResult_(const ContainerAllocator& _alloc)
    : output(0)
    , goal_stamp(0)  {
  (void)_alloc;
    }



   typedef int32_t _output_type;
  _output_type output;

   typedef int32_t _goal_stamp_type;
  _goal_stamp_type goal_stamp;





  typedef boost::shared_ptr< ::example_action_server::demoResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::example_action_server::demoResult_<ContainerAllocator> const> ConstPtr;

}; // struct demoResult_

typedef ::example_action_server::demoResult_<std::allocator<void> > demoResult;

typedef boost::shared_ptr< ::example_action_server::demoResult > demoResultPtr;
typedef boost::shared_ptr< ::example_action_server::demoResult const> demoResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::example_action_server::demoResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::example_action_server::demoResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::example_action_server::demoResult_<ContainerAllocator1> & lhs, const ::example_action_server::demoResult_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output &&
    lhs.goal_stamp == rhs.goal_stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::example_action_server::demoResult_<ContainerAllocator1> & lhs, const ::example_action_server::demoResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace example_action_server

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::example_action_server::demoResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_action_server::demoResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::example_action_server::demoResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::example_action_server::demoResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_action_server::demoResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_action_server::demoResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::example_action_server::demoResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e463ad5c3d69302a64d2d29d141c0d9";
  }

  static const char* value(const ::example_action_server::demoResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e463ad5c3d69302ULL;
  static const uint64_t static_value2 = 0xa64d2d29d141c0d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::example_action_server::demoResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "example_action_server/demoResult";
  }

  static const char* value(const ::example_action_server::demoResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::example_action_server::demoResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"int32 output\n"
"int32 goal_stamp\n"
;
  }

  static const char* value(const ::example_action_server::demoResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::example_action_server::demoResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
      stream.next(m.goal_stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct demoResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::example_action_server::demoResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::example_action_server::demoResult_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    Printer<int32_t>::stream(s, indent + "  ", v.output);
    s << indent << "goal_stamp: ";
    Printer<int32_t>::stream(s, indent + "  ", v.goal_stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EXAMPLE_ACTION_SERVER_MESSAGE_DEMORESULT_H