// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: exam_protocol.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_exam_5fprotocol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_exam_5fprotocol_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_exam_5fprotocol_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_exam_5fprotocol_2eproto {
  static const uint32_t offsets[];
};
namespace exam_proto {
class BRD_ctrl;
struct BRD_ctrlDefaultTypeInternal;
extern BRD_ctrlDefaultTypeInternal _BRD_ctrl_default_instance_;
}  // namespace exam_proto
PROTOBUF_NAMESPACE_OPEN
template<> ::exam_proto::BRD_ctrl* Arena::CreateMaybeMessage<::exam_proto::BRD_ctrl>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace exam_proto {

// ===================================================================

class BRD_ctrl final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:exam_proto.BRD_ctrl) */ {
 public:
  inline BRD_ctrl() : BRD_ctrl(nullptr) {}
  ~BRD_ctrl() override;
  explicit PROTOBUF_CONSTEXPR BRD_ctrl(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BRD_ctrl(const BRD_ctrl& from);
  BRD_ctrl(BRD_ctrl&& from) noexcept
    : BRD_ctrl() {
    *this = ::std::move(from);
  }

  inline BRD_ctrl& operator=(const BRD_ctrl& from) {
    CopyFrom(from);
    return *this;
  }
  inline BRD_ctrl& operator=(BRD_ctrl&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const BRD_ctrl& default_instance() {
    return *internal_default_instance();
  }
  static inline const BRD_ctrl* internal_default_instance() {
    return reinterpret_cast<const BRD_ctrl*>(
               &_BRD_ctrl_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BRD_ctrl& a, BRD_ctrl& b) {
    a.Swap(&b);
  }
  inline void Swap(BRD_ctrl* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BRD_ctrl* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BRD_ctrl* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BRD_ctrl>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const BRD_ctrl& from);
  void MergeFrom(const BRD_ctrl& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BRD_ctrl* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "exam_proto.BRD_ctrl";
  }
  protected:
  explicit BRD_ctrl(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCommandFieldNumber = 1,
    kOutFieldNumber = 2,
    kStatusFieldNumber = 3,
  };
  // optional fixed32 command = 1;
  bool has_command() const;
  private:
  bool _internal_has_command() const;
  public:
  void clear_command();
  uint32_t command() const;
  void set_command(uint32_t value);
  private:
  uint32_t _internal_command() const;
  void _internal_set_command(uint32_t value);
  public:

  // optional fixed32 out = 2;
  bool has_out() const;
  private:
  bool _internal_has_out() const;
  public:
  void clear_out();
  uint32_t out() const;
  void set_out(uint32_t value);
  private:
  uint32_t _internal_out() const;
  void _internal_set_out(uint32_t value);
  public:

  // optional sfixed32 status = 3;
  bool has_status() const;
  private:
  bool _internal_has_status() const;
  public:
  void clear_status();
  int32_t status() const;
  void set_status(int32_t value);
  private:
  int32_t _internal_status() const;
  void _internal_set_status(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:exam_proto.BRD_ctrl)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t command_;
  uint32_t out_;
  int32_t status_;
  friend struct ::TableStruct_exam_5fprotocol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BRD_ctrl

// optional fixed32 command = 1;
inline bool BRD_ctrl::_internal_has_command() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool BRD_ctrl::has_command() const {
  return _internal_has_command();
}
inline void BRD_ctrl::clear_command() {
  command_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline uint32_t BRD_ctrl::_internal_command() const {
  return command_;
}
inline uint32_t BRD_ctrl::command() const {
  // @@protoc_insertion_point(field_get:exam_proto.BRD_ctrl.command)
  return _internal_command();
}
inline void BRD_ctrl::_internal_set_command(uint32_t value) {
  _has_bits_[0] |= 0x00000001u;
  command_ = value;
}
inline void BRD_ctrl::set_command(uint32_t value) {
  _internal_set_command(value);
  // @@protoc_insertion_point(field_set:exam_proto.BRD_ctrl.command)
}

// optional fixed32 out = 2;
inline bool BRD_ctrl::_internal_has_out() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool BRD_ctrl::has_out() const {
  return _internal_has_out();
}
inline void BRD_ctrl::clear_out() {
  out_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline uint32_t BRD_ctrl::_internal_out() const {
  return out_;
}
inline uint32_t BRD_ctrl::out() const {
  // @@protoc_insertion_point(field_get:exam_proto.BRD_ctrl.out)
  return _internal_out();
}
inline void BRD_ctrl::_internal_set_out(uint32_t value) {
  _has_bits_[0] |= 0x00000002u;
  out_ = value;
}
inline void BRD_ctrl::set_out(uint32_t value) {
  _internal_set_out(value);
  // @@protoc_insertion_point(field_set:exam_proto.BRD_ctrl.out)
}

// optional sfixed32 status = 3;
inline bool BRD_ctrl::_internal_has_status() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool BRD_ctrl::has_status() const {
  return _internal_has_status();
}
inline void BRD_ctrl::clear_status() {
  status_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t BRD_ctrl::_internal_status() const {
  return status_;
}
inline int32_t BRD_ctrl::status() const {
  // @@protoc_insertion_point(field_get:exam_proto.BRD_ctrl.status)
  return _internal_status();
}
inline void BRD_ctrl::_internal_set_status(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  status_ = value;
}
inline void BRD_ctrl::set_status(int32_t value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:exam_proto.BRD_ctrl.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace exam_proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_exam_5fprotocol_2eproto
