// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/rpc/examples/fileupload/v1/fileupload.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021007 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto;
namespace proto {
namespace rpc {
namespace examples {
namespace fileupload {
namespace v1 {
class UploadFileRequest;
struct UploadFileRequestDefaultTypeInternal;
extern UploadFileRequestDefaultTypeInternal _UploadFileRequest_default_instance_;
class UploadFileResponse;
struct UploadFileResponseDefaultTypeInternal;
extern UploadFileResponseDefaultTypeInternal _UploadFileResponse_default_instance_;
}  // namespace v1
}  // namespace fileupload
}  // namespace examples
}  // namespace rpc
}  // namespace proto
PROTOBUF_NAMESPACE_OPEN
template<> ::proto::rpc::examples::fileupload::v1::UploadFileRequest* Arena::CreateMaybeMessage<::proto::rpc::examples::fileupload::v1::UploadFileRequest>(Arena*);
template<> ::proto::rpc::examples::fileupload::v1::UploadFileResponse* Arena::CreateMaybeMessage<::proto::rpc::examples::fileupload::v1::UploadFileResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace proto {
namespace rpc {
namespace examples {
namespace fileupload {
namespace v1 {

// ===================================================================

class UploadFileRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto.rpc.examples.fileupload.v1.UploadFileRequest) */ {
 public:
  inline UploadFileRequest() : UploadFileRequest(nullptr) {}
  ~UploadFileRequest() override;
  explicit PROTOBUF_CONSTEXPR UploadFileRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UploadFileRequest(const UploadFileRequest& from);
  UploadFileRequest(UploadFileRequest&& from) noexcept
    : UploadFileRequest() {
    *this = ::std::move(from);
  }

  inline UploadFileRequest& operator=(const UploadFileRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline UploadFileRequest& operator=(UploadFileRequest&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const UploadFileRequest& default_instance() {
    return *internal_default_instance();
  }
  enum DataCase {
    kName = 1,
    kChunkData = 2,
    DATA_NOT_SET = 0,
  };

  static inline const UploadFileRequest* internal_default_instance() {
    return reinterpret_cast<const UploadFileRequest*>(
               &_UploadFileRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UploadFileRequest& a, UploadFileRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(UploadFileRequest* other) {
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
  void UnsafeArenaSwap(UploadFileRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UploadFileRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UploadFileRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UploadFileRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const UploadFileRequest& from) {
    UploadFileRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UploadFileRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto.rpc.examples.fileupload.v1.UploadFileRequest";
  }
  protected:
  explicit UploadFileRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kChunkDataFieldNumber = 2,
  };
  // string name = 1 [json_name = "name"];
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // bytes chunk_data = 2 [json_name = "chunkData"];
  bool has_chunk_data() const;
  private:
  bool _internal_has_chunk_data() const;
  public:
  void clear_chunk_data();
  const std::string& chunk_data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_chunk_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_chunk_data();
  PROTOBUF_NODISCARD std::string* release_chunk_data();
  void set_allocated_chunk_data(std::string* chunk_data);
  private:
  const std::string& _internal_chunk_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_chunk_data(const std::string& value);
  std::string* _internal_mutable_chunk_data();
  public:

  void clear_data();
  DataCase data_case() const;
  // @@protoc_insertion_point(class_scope:proto.rpc.examples.fileupload.v1.UploadFileRequest)
 private:
  class _Internal;
  void set_has_name();
  void set_has_chunk_data();

  inline bool has_data() const;
  inline void clear_has_data();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    union DataUnion {
      constexpr DataUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr chunk_data_;
    } data_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t _oneof_case_[1];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto;
};
// -------------------------------------------------------------------

class UploadFileResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto.rpc.examples.fileupload.v1.UploadFileResponse) */ {
 public:
  inline UploadFileResponse() : UploadFileResponse(nullptr) {}
  ~UploadFileResponse() override;
  explicit PROTOBUF_CONSTEXPR UploadFileResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UploadFileResponse(const UploadFileResponse& from);
  UploadFileResponse(UploadFileResponse&& from) noexcept
    : UploadFileResponse() {
    *this = ::std::move(from);
  }

  inline UploadFileResponse& operator=(const UploadFileResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline UploadFileResponse& operator=(UploadFileResponse&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const UploadFileResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const UploadFileResponse* internal_default_instance() {
    return reinterpret_cast<const UploadFileResponse*>(
               &_UploadFileResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(UploadFileResponse& a, UploadFileResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(UploadFileResponse* other) {
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
  void UnsafeArenaSwap(UploadFileResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UploadFileResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UploadFileResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UploadFileResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const UploadFileResponse& from) {
    UploadFileResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UploadFileResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto.rpc.examples.fileupload.v1.UploadFileResponse";
  }
  protected:
  explicit UploadFileResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kSizeFieldNumber = 2,
  };
  // string name = 1 [json_name = "name"];
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int64 size = 2 [json_name = "size"];
  void clear_size();
  int64_t size() const;
  void set_size(int64_t value);
  private:
  int64_t _internal_size() const;
  void _internal_set_size(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:proto.rpc.examples.fileupload.v1.UploadFileResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    int64_t size_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UploadFileRequest

// string name = 1 [json_name = "name"];
inline bool UploadFileRequest::_internal_has_name() const {
  return data_case() == kName;
}
inline bool UploadFileRequest::has_name() const {
  return _internal_has_name();
}
inline void UploadFileRequest::set_has_name() {
  _impl_._oneof_case_[0] = kName;
}
inline void UploadFileRequest::clear_name() {
  if (_internal_has_name()) {
    _impl_.data_.name_.Destroy();
    clear_has_data();
  }
}
inline const std::string& UploadFileRequest::name() const {
  // @@protoc_insertion_point(field_get:proto.rpc.examples.fileupload.v1.UploadFileRequest.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline void UploadFileRequest::set_name(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_name()) {
    clear_data();
    set_has_name();
    _impl_.data_.name_.InitDefault();
  }
  _impl_.data_.name_.Set( static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:proto.rpc.examples.fileupload.v1.UploadFileRequest.name)
}
inline std::string* UploadFileRequest::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:proto.rpc.examples.fileupload.v1.UploadFileRequest.name)
  return _s;
}
inline const std::string& UploadFileRequest::_internal_name() const {
  if (_internal_has_name()) {
    return _impl_.data_.name_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void UploadFileRequest::_internal_set_name(const std::string& value) {
  if (!_internal_has_name()) {
    clear_data();
    set_has_name();
    _impl_.data_.name_.InitDefault();
  }
  _impl_.data_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* UploadFileRequest::_internal_mutable_name() {
  if (!_internal_has_name()) {
    clear_data();
    set_has_name();
    _impl_.data_.name_.InitDefault();
  }
  return _impl_.data_.name_.Mutable(      GetArenaForAllocation());
}
inline std::string* UploadFileRequest::release_name() {
  // @@protoc_insertion_point(field_release:proto.rpc.examples.fileupload.v1.UploadFileRequest.name)
  if (_internal_has_name()) {
    clear_has_data();
    return _impl_.data_.name_.Release();
  } else {
    return nullptr;
  }
}
inline void UploadFileRequest::set_allocated_name(std::string* name) {
  if (has_data()) {
    clear_data();
  }
  if (name != nullptr) {
    set_has_name();
    _impl_.data_.name_.InitAllocated(name, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:proto.rpc.examples.fileupload.v1.UploadFileRequest.name)
}

// bytes chunk_data = 2 [json_name = "chunkData"];
inline bool UploadFileRequest::_internal_has_chunk_data() const {
  return data_case() == kChunkData;
}
inline bool UploadFileRequest::has_chunk_data() const {
  return _internal_has_chunk_data();
}
inline void UploadFileRequest::set_has_chunk_data() {
  _impl_._oneof_case_[0] = kChunkData;
}
inline void UploadFileRequest::clear_chunk_data() {
  if (_internal_has_chunk_data()) {
    _impl_.data_.chunk_data_.Destroy();
    clear_has_data();
  }
}
inline const std::string& UploadFileRequest::chunk_data() const {
  // @@protoc_insertion_point(field_get:proto.rpc.examples.fileupload.v1.UploadFileRequest.chunk_data)
  return _internal_chunk_data();
}
template <typename ArgT0, typename... ArgT>
inline void UploadFileRequest::set_chunk_data(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_chunk_data()) {
    clear_data();
    set_has_chunk_data();
    _impl_.data_.chunk_data_.InitDefault();
  }
  _impl_.data_.chunk_data_.SetBytes( static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:proto.rpc.examples.fileupload.v1.UploadFileRequest.chunk_data)
}
inline std::string* UploadFileRequest::mutable_chunk_data() {
  std::string* _s = _internal_mutable_chunk_data();
  // @@protoc_insertion_point(field_mutable:proto.rpc.examples.fileupload.v1.UploadFileRequest.chunk_data)
  return _s;
}
inline const std::string& UploadFileRequest::_internal_chunk_data() const {
  if (_internal_has_chunk_data()) {
    return _impl_.data_.chunk_data_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void UploadFileRequest::_internal_set_chunk_data(const std::string& value) {
  if (!_internal_has_chunk_data()) {
    clear_data();
    set_has_chunk_data();
    _impl_.data_.chunk_data_.InitDefault();
  }
  _impl_.data_.chunk_data_.Set(value, GetArenaForAllocation());
}
inline std::string* UploadFileRequest::_internal_mutable_chunk_data() {
  if (!_internal_has_chunk_data()) {
    clear_data();
    set_has_chunk_data();
    _impl_.data_.chunk_data_.InitDefault();
  }
  return _impl_.data_.chunk_data_.Mutable(      GetArenaForAllocation());
}
inline std::string* UploadFileRequest::release_chunk_data() {
  // @@protoc_insertion_point(field_release:proto.rpc.examples.fileupload.v1.UploadFileRequest.chunk_data)
  if (_internal_has_chunk_data()) {
    clear_has_data();
    return _impl_.data_.chunk_data_.Release();
  } else {
    return nullptr;
  }
}
inline void UploadFileRequest::set_allocated_chunk_data(std::string* chunk_data) {
  if (has_data()) {
    clear_data();
  }
  if (chunk_data != nullptr) {
    set_has_chunk_data();
    _impl_.data_.chunk_data_.InitAllocated(chunk_data, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:proto.rpc.examples.fileupload.v1.UploadFileRequest.chunk_data)
}

inline bool UploadFileRequest::has_data() const {
  return data_case() != DATA_NOT_SET;
}
inline void UploadFileRequest::clear_has_data() {
  _impl_._oneof_case_[0] = DATA_NOT_SET;
}
inline UploadFileRequest::DataCase UploadFileRequest::data_case() const {
  return UploadFileRequest::DataCase(_impl_._oneof_case_[0]);
}
// -------------------------------------------------------------------

// UploadFileResponse

// string name = 1 [json_name = "name"];
inline void UploadFileResponse::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& UploadFileResponse::name() const {
  // @@protoc_insertion_point(field_get:proto.rpc.examples.fileupload.v1.UploadFileResponse.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void UploadFileResponse::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:proto.rpc.examples.fileupload.v1.UploadFileResponse.name)
}
inline std::string* UploadFileResponse::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:proto.rpc.examples.fileupload.v1.UploadFileResponse.name)
  return _s;
}
inline const std::string& UploadFileResponse::_internal_name() const {
  return _impl_.name_.Get();
}
inline void UploadFileResponse::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* UploadFileResponse::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* UploadFileResponse::release_name() {
  // @@protoc_insertion_point(field_release:proto.rpc.examples.fileupload.v1.UploadFileResponse.name)
  return _impl_.name_.Release();
}
inline void UploadFileResponse::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:proto.rpc.examples.fileupload.v1.UploadFileResponse.name)
}

// int64 size = 2 [json_name = "size"];
inline void UploadFileResponse::clear_size() {
  _impl_.size_ = int64_t{0};
}
inline int64_t UploadFileResponse::_internal_size() const {
  return _impl_.size_;
}
inline int64_t UploadFileResponse::size() const {
  // @@protoc_insertion_point(field_get:proto.rpc.examples.fileupload.v1.UploadFileResponse.size)
  return _internal_size();
}
inline void UploadFileResponse::_internal_set_size(int64_t value) {
  
  _impl_.size_ = value;
}
inline void UploadFileResponse::set_size(int64_t value) {
  _internal_set_size(value);
  // @@protoc_insertion_point(field_set:proto.rpc.examples.fileupload.v1.UploadFileResponse.size)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace fileupload
}  // namespace examples
}  // namespace rpc
}  // namespace proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto
