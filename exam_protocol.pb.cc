// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: exam_protocol.proto

#include "exam_protocol.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace exam_proto {
PROTOBUF_CONSTEXPR BRD_ctrl::BRD_ctrl(
    ::_pbi::ConstantInitialized)
  : command_(0u)
  , out_(0u)
  , status_(0){}
struct BRD_ctrlDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BRD_ctrlDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~BRD_ctrlDefaultTypeInternal() {}
  union {
    BRD_ctrl _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BRD_ctrlDefaultTypeInternal _BRD_ctrl_default_instance_;
}  // namespace exam_proto
namespace exam_proto {

// ===================================================================

class BRD_ctrl::_Internal {
 public:
  using HasBits = decltype(std::declval<BRD_ctrl>()._has_bits_);
  static void set_has_command(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_out(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_status(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

BRD_ctrl::BRD_ctrl(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:exam_proto.BRD_ctrl)
}
BRD_ctrl::BRD_ctrl(const BRD_ctrl& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&command_, &from.command_,
    static_cast<size_t>(reinterpret_cast<char*>(&status_) -
    reinterpret_cast<char*>(&command_)) + sizeof(status_));
  // @@protoc_insertion_point(copy_constructor:exam_proto.BRD_ctrl)
}

inline void BRD_ctrl::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&command_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&status_) -
    reinterpret_cast<char*>(&command_)) + sizeof(status_));
}

BRD_ctrl::~BRD_ctrl() {
  // @@protoc_insertion_point(destructor:exam_proto.BRD_ctrl)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BRD_ctrl::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void BRD_ctrl::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void BRD_ctrl::Clear() {
// @@protoc_insertion_point(message_clear_start:exam_proto.BRD_ctrl)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&command_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&status_) -
        reinterpret_cast<char*>(&command_)) + sizeof(status_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* BRD_ctrl::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional fixed32 command = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _Internal::set_has_command(&has_bits);
          command_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint32_t>(ptr);
          ptr += sizeof(uint32_t);
        } else
          goto handle_unusual;
        continue;
      // optional fixed32 out = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _Internal::set_has_out(&has_bits);
          out_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint32_t>(ptr);
          ptr += sizeof(uint32_t);
        } else
          goto handle_unusual;
        continue;
      // optional sfixed32 status = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 29)) {
          _Internal::set_has_status(&has_bits);
          status_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<int32_t>(ptr);
          ptr += sizeof(int32_t);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* BRD_ctrl::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:exam_proto.BRD_ctrl)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional fixed32 command = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed32ToArray(1, this->_internal_command(), target);
  }

  // optional fixed32 out = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed32ToArray(2, this->_internal_out(), target);
  }

  // optional sfixed32 status = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteSFixed32ToArray(3, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:exam_proto.BRD_ctrl)
  return target;
}

size_t BRD_ctrl::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:exam_proto.BRD_ctrl)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional fixed32 command = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 4;
    }

    // optional fixed32 out = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 4;
    }

    // optional sfixed32 status = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 4;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BRD_ctrl::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const BRD_ctrl*>(
      &from));
}

void BRD_ctrl::MergeFrom(const BRD_ctrl& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:exam_proto.BRD_ctrl)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      command_ = from.command_;
    }
    if (cached_has_bits & 0x00000002u) {
      out_ = from.out_;
    }
    if (cached_has_bits & 0x00000004u) {
      status_ = from.status_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void BRD_ctrl::CopyFrom(const BRD_ctrl& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:exam_proto.BRD_ctrl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BRD_ctrl::IsInitialized() const {
  return true;
}

void BRD_ctrl::InternalSwap(BRD_ctrl* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BRD_ctrl, status_)
      + sizeof(BRD_ctrl::status_)
      - PROTOBUF_FIELD_OFFSET(BRD_ctrl, command_)>(
          reinterpret_cast<char*>(&command_),
          reinterpret_cast<char*>(&other->command_));
}

std::string BRD_ctrl::GetTypeName() const {
  return "exam_proto.BRD_ctrl";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace exam_proto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::exam_proto::BRD_ctrl*
Arena::CreateMaybeMessage< ::exam_proto::BRD_ctrl >(Arena* arena) {
  return Arena::CreateMessageInternal< ::exam_proto::BRD_ctrl >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
