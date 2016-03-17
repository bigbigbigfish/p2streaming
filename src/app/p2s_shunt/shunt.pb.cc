// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shunt.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "shunt.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace shunt_alive {

void protobuf_ShutdownFile_shunt_2eproto() {
  delete Alive::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_shunt_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_shunt_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  Alive::default_instance_ = new Alive();
  Alive::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_shunt_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_shunt_2eproto_once_);
void protobuf_AddDesc_shunt_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_shunt_2eproto_once_,
                 &protobuf_AddDesc_shunt_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_shunt_2eproto {
  StaticDescriptorInitializer_shunt_2eproto() {
    protobuf_AddDesc_shunt_2eproto();
  }
} static_descriptor_initializer_shunt_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int Alive::kIdFieldNumber;
const int Alive::kKbpsFieldNumber;
const int Alive::kIsConnectedFieldNumber;
const int Alive::kPidFieldNumber;
#endif  // !_MSC_VER

Alive::Alive()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void Alive::InitAsDefaultInstance() {
}

Alive::Alive(const Alive& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void Alive::SharedCtor() {
  _cached_size_ = 0;
  id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  kbps_ = 0;
  is_connected_ = false;
  pid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Alive::~Alive() {
  SharedDtor();
}

void Alive::SharedDtor() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void Alive::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Alive& Alive::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_shunt_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_shunt_2eproto();
#endif
  return *default_instance_;
}

Alive* Alive::default_instance_ = NULL;

Alive* Alive::New() const {
  return new Alive;
}

void Alive::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_id()) {
      if (id_ != &::google::protobuf::internal::kEmptyString) {
        id_->clear();
      }
    }
    kbps_ = 0;
    is_connected_ = false;
    pid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool Alive::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_kbps;
        break;
      }

      // required int32 kbps = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_kbps:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &kbps_)));
          set_has_kbps();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_is_connected;
        break;
      }

      // required bool is_connected = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_connected:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_connected_)));
          set_has_is_connected();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_pid;
        break;
      }

      // optional int32 pid = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_pid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &pid_)));
          set_has_pid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Alive::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->id(), output);
  }

  // required int32 kbps = 2;
  if (has_kbps()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->kbps(), output);
  }

  // required bool is_connected = 3;
  if (has_is_connected()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_connected(), output);
  }

  // optional int32 pid = 4;
  if (has_pid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->pid(), output);
  }

}

int Alive::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->id());
    }

    // required int32 kbps = 2;
    if (has_kbps()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->kbps());
    }

    // required bool is_connected = 3;
    if (has_is_connected()) {
      total_size += 1 + 1;
    }

    // optional int32 pid = 4;
    if (has_pid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->pid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Alive::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Alive*>(&from));
}

void Alive::MergeFrom(const Alive& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_kbps()) {
      set_kbps(from.kbps());
    }
    if (from.has_is_connected()) {
      set_is_connected(from.is_connected());
    }
    if (from.has_pid()) {
      set_pid(from.pid());
    }
  }
}

void Alive::CopyFrom(const Alive& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Alive::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void Alive::Swap(Alive* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(kbps_, other->kbps_);
    std::swap(is_connected_, other->is_connected_);
    std::swap(pid_, other->pid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string Alive::GetTypeName() const {
  return "shunt_alive.Alive";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace shunt_alive

// @@protoc_insertion_point(global_scope)
