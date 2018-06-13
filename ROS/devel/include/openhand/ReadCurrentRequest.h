// Generated by gencpp from file openhand/ReadCurrentRequest.msg
// DO NOT EDIT!


#ifndef OPENHAND_MESSAGE_READCURRENTREQUEST_H
#define OPENHAND_MESSAGE_READCURRENTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace openhand
{
template <class ContainerAllocator>
struct ReadCurrentRequest_
{
  typedef ReadCurrentRequest_<ContainerAllocator> Type;

  ReadCurrentRequest_()
    {
    }
  ReadCurrentRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::openhand::ReadCurrentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::openhand::ReadCurrentRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ReadCurrentRequest_

typedef ::openhand::ReadCurrentRequest_<std::allocator<void> > ReadCurrentRequest;

typedef boost::shared_ptr< ::openhand::ReadCurrentRequest > ReadCurrentRequestPtr;
typedef boost::shared_ptr< ::openhand::ReadCurrentRequest const> ReadCurrentRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::openhand::ReadCurrentRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::openhand::ReadCurrentRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace openhand

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::openhand::ReadCurrentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::openhand::ReadCurrentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::openhand::ReadCurrentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::openhand::ReadCurrentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::openhand::ReadCurrentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::openhand::ReadCurrentRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::openhand::ReadCurrentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::openhand::ReadCurrentRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::openhand::ReadCurrentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "openhand/ReadCurrentRequest";
  }

  static const char* value(const ::openhand::ReadCurrentRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::openhand::ReadCurrentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::openhand::ReadCurrentRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::openhand::ReadCurrentRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReadCurrentRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::openhand::ReadCurrentRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::openhand::ReadCurrentRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // OPENHAND_MESSAGE_READCURRENTREQUEST_H