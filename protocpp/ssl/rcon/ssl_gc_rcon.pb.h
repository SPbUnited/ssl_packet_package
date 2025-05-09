// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rcon/ssl_gc_rcon.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_rcon_2fssl_5fgc_5frcon_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_rcon_2fssl_5fgc_5frcon_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_rcon_2fssl_5fgc_5frcon_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_rcon_2fssl_5fgc_5frcon_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_rcon_2fssl_5fgc_5frcon_2eproto;
class ControllerReply;
struct ControllerReplyDefaultTypeInternal;
extern ControllerReplyDefaultTypeInternal _ControllerReply_default_instance_;
class Signature;
struct SignatureDefaultTypeInternal;
extern SignatureDefaultTypeInternal _Signature_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::ControllerReply* Arena::CreateMaybeMessage<::ControllerReply>(Arena*);
template<> ::Signature* Arena::CreateMaybeMessage<::Signature>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum ControllerReply_StatusCode : int {
  ControllerReply_StatusCode_UNKNOWN_STATUS_CODE = 0,
  ControllerReply_StatusCode_OK = 1,
  ControllerReply_StatusCode_REJECTED = 2
};
bool ControllerReply_StatusCode_IsValid(int value);
constexpr ControllerReply_StatusCode ControllerReply_StatusCode_StatusCode_MIN = ControllerReply_StatusCode_UNKNOWN_STATUS_CODE;
constexpr ControllerReply_StatusCode ControllerReply_StatusCode_StatusCode_MAX = ControllerReply_StatusCode_REJECTED;
constexpr int ControllerReply_StatusCode_StatusCode_ARRAYSIZE = ControllerReply_StatusCode_StatusCode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ControllerReply_StatusCode_descriptor();
template<typename T>
inline const std::string& ControllerReply_StatusCode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ControllerReply_StatusCode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ControllerReply_StatusCode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ControllerReply_StatusCode_descriptor(), enum_t_value);
}
inline bool ControllerReply_StatusCode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ControllerReply_StatusCode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ControllerReply_StatusCode>(
    ControllerReply_StatusCode_descriptor(), name, value);
}
enum ControllerReply_Verification : int {
  ControllerReply_Verification_UNKNOWN_VERIFICATION = 0,
  ControllerReply_Verification_VERIFIED = 1,
  ControllerReply_Verification_UNVERIFIED = 2
};
bool ControllerReply_Verification_IsValid(int value);
constexpr ControllerReply_Verification ControllerReply_Verification_Verification_MIN = ControllerReply_Verification_UNKNOWN_VERIFICATION;
constexpr ControllerReply_Verification ControllerReply_Verification_Verification_MAX = ControllerReply_Verification_UNVERIFIED;
constexpr int ControllerReply_Verification_Verification_ARRAYSIZE = ControllerReply_Verification_Verification_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ControllerReply_Verification_descriptor();
template<typename T>
inline const std::string& ControllerReply_Verification_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ControllerReply_Verification>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ControllerReply_Verification_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ControllerReply_Verification_descriptor(), enum_t_value);
}
inline bool ControllerReply_Verification_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ControllerReply_Verification* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ControllerReply_Verification>(
    ControllerReply_Verification_descriptor(), name, value);
}
// ===================================================================

class ControllerReply final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ControllerReply) */ {
 public:
  inline ControllerReply() : ControllerReply(nullptr) {}
  ~ControllerReply() override;
  explicit PROTOBUF_CONSTEXPR ControllerReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ControllerReply(const ControllerReply& from);
  ControllerReply(ControllerReply&& from) noexcept
    : ControllerReply() {
    *this = ::std::move(from);
  }

  inline ControllerReply& operator=(const ControllerReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline ControllerReply& operator=(ControllerReply&& from) noexcept {
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

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const ControllerReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const ControllerReply* internal_default_instance() {
    return reinterpret_cast<const ControllerReply*>(
               &_ControllerReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ControllerReply& a, ControllerReply& b) {
    a.Swap(&b);
  }
  inline void Swap(ControllerReply* other) {
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
  void UnsafeArenaSwap(ControllerReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ControllerReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ControllerReply>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ControllerReply& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ControllerReply& from) {
    ControllerReply::MergeImpl(*this, from);
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
  void InternalSwap(ControllerReply* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ControllerReply";
  }
  protected:
  explicit ControllerReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef ControllerReply_StatusCode StatusCode;
  static constexpr StatusCode UNKNOWN_STATUS_CODE =
    ControllerReply_StatusCode_UNKNOWN_STATUS_CODE;
  static constexpr StatusCode OK =
    ControllerReply_StatusCode_OK;
  static constexpr StatusCode REJECTED =
    ControllerReply_StatusCode_REJECTED;
  static inline bool StatusCode_IsValid(int value) {
    return ControllerReply_StatusCode_IsValid(value);
  }
  static constexpr StatusCode StatusCode_MIN =
    ControllerReply_StatusCode_StatusCode_MIN;
  static constexpr StatusCode StatusCode_MAX =
    ControllerReply_StatusCode_StatusCode_MAX;
  static constexpr int StatusCode_ARRAYSIZE =
    ControllerReply_StatusCode_StatusCode_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  StatusCode_descriptor() {
    return ControllerReply_StatusCode_descriptor();
  }
  template<typename T>
  static inline const std::string& StatusCode_Name(T enum_t_value) {
    static_assert(::std::is_same<T, StatusCode>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function StatusCode_Name.");
    return ControllerReply_StatusCode_Name(enum_t_value);
  }
  static inline bool StatusCode_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      StatusCode* value) {
    return ControllerReply_StatusCode_Parse(name, value);
  }

  typedef ControllerReply_Verification Verification;
  static constexpr Verification UNKNOWN_VERIFICATION =
    ControllerReply_Verification_UNKNOWN_VERIFICATION;
  static constexpr Verification VERIFIED =
    ControllerReply_Verification_VERIFIED;
  static constexpr Verification UNVERIFIED =
    ControllerReply_Verification_UNVERIFIED;
  static inline bool Verification_IsValid(int value) {
    return ControllerReply_Verification_IsValid(value);
  }
  static constexpr Verification Verification_MIN =
    ControllerReply_Verification_Verification_MIN;
  static constexpr Verification Verification_MAX =
    ControllerReply_Verification_Verification_MAX;
  static constexpr int Verification_ARRAYSIZE =
    ControllerReply_Verification_Verification_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Verification_descriptor() {
    return ControllerReply_Verification_descriptor();
  }
  template<typename T>
  static inline const std::string& Verification_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Verification>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Verification_Name.");
    return ControllerReply_Verification_Name(enum_t_value);
  }
  static inline bool Verification_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Verification* value) {
    return ControllerReply_Verification_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 2,
    kNextTokenFieldNumber = 3,
    kStatusCodeFieldNumber = 1,
    kVerificationFieldNumber = 4,
  };
  // optional string reason = 2;
  bool has_reason() const;
  private:
  bool _internal_has_reason() const;
  public:
  void clear_reason();
  const std::string& reason() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_reason(ArgT0&& arg0, ArgT... args);
  std::string* mutable_reason();
  PROTOBUF_NODISCARD std::string* release_reason();
  void set_allocated_reason(std::string* reason);
  private:
  const std::string& _internal_reason() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_reason(const std::string& value);
  std::string* _internal_mutable_reason();
  public:

  // optional string next_token = 3;
  bool has_next_token() const;
  private:
  bool _internal_has_next_token() const;
  public:
  void clear_next_token();
  const std::string& next_token() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_next_token(ArgT0&& arg0, ArgT... args);
  std::string* mutable_next_token();
  PROTOBUF_NODISCARD std::string* release_next_token();
  void set_allocated_next_token(std::string* next_token);
  private:
  const std::string& _internal_next_token() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_next_token(const std::string& value);
  std::string* _internal_mutable_next_token();
  public:

  // optional .ControllerReply.StatusCode status_code = 1;
  bool has_status_code() const;
  private:
  bool _internal_has_status_code() const;
  public:
  void clear_status_code();
  ::ControllerReply_StatusCode status_code() const;
  void set_status_code(::ControllerReply_StatusCode value);
  private:
  ::ControllerReply_StatusCode _internal_status_code() const;
  void _internal_set_status_code(::ControllerReply_StatusCode value);
  public:

  // optional .ControllerReply.Verification verification = 4;
  bool has_verification() const;
  private:
  bool _internal_has_verification() const;
  public:
  void clear_verification();
  ::ControllerReply_Verification verification() const;
  void set_verification(::ControllerReply_Verification value);
  private:
  ::ControllerReply_Verification _internal_verification() const;
  void _internal_set_verification(::ControllerReply_Verification value);
  public:

  // @@protoc_insertion_point(class_scope:ControllerReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reason_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr next_token_;
    int status_code_;
    int verification_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_rcon_2fssl_5fgc_5frcon_2eproto;
};
// -------------------------------------------------------------------

class Signature final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Signature) */ {
 public:
  inline Signature() : Signature(nullptr) {}
  ~Signature() override;
  explicit PROTOBUF_CONSTEXPR Signature(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Signature(const Signature& from);
  Signature(Signature&& from) noexcept
    : Signature() {
    *this = ::std::move(from);
  }

  inline Signature& operator=(const Signature& from) {
    CopyFrom(from);
    return *this;
  }
  inline Signature& operator=(Signature&& from) noexcept {
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

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Signature& default_instance() {
    return *internal_default_instance();
  }
  static inline const Signature* internal_default_instance() {
    return reinterpret_cast<const Signature*>(
               &_Signature_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Signature& a, Signature& b) {
    a.Swap(&b);
  }
  inline void Swap(Signature* other) {
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
  void UnsafeArenaSwap(Signature* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Signature* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Signature>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Signature& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Signature& from) {
    Signature::MergeImpl(*this, from);
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
  void InternalSwap(Signature* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Signature";
  }
  protected:
  explicit Signature(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTokenFieldNumber = 1,
    kPkcs1V15FieldNumber = 2,
  };
  // required string token = 1;
  bool has_token() const;
  private:
  bool _internal_has_token() const;
  public:
  void clear_token();
  const std::string& token() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_token(ArgT0&& arg0, ArgT... args);
  std::string* mutable_token();
  PROTOBUF_NODISCARD std::string* release_token();
  void set_allocated_token(std::string* token);
  private:
  const std::string& _internal_token() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_token(const std::string& value);
  std::string* _internal_mutable_token();
  public:

  // required bytes pkcs1v15 = 2;
  bool has_pkcs1v15() const;
  private:
  bool _internal_has_pkcs1v15() const;
  public:
  void clear_pkcs1v15();
  const std::string& pkcs1v15() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_pkcs1v15(ArgT0&& arg0, ArgT... args);
  std::string* mutable_pkcs1v15();
  PROTOBUF_NODISCARD std::string* release_pkcs1v15();
  void set_allocated_pkcs1v15(std::string* pkcs1v15);
  private:
  const std::string& _internal_pkcs1v15() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_pkcs1v15(const std::string& value);
  std::string* _internal_mutable_pkcs1v15();
  public:

  // @@protoc_insertion_point(class_scope:Signature)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr token_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr pkcs1v15_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_rcon_2fssl_5fgc_5frcon_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ControllerReply

// optional .ControllerReply.StatusCode status_code = 1;
inline bool ControllerReply::_internal_has_status_code() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ControllerReply::has_status_code() const {
  return _internal_has_status_code();
}
inline void ControllerReply::clear_status_code() {
  _impl_.status_code_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::ControllerReply_StatusCode ControllerReply::_internal_status_code() const {
  return static_cast< ::ControllerReply_StatusCode >(_impl_.status_code_);
}
inline ::ControllerReply_StatusCode ControllerReply::status_code() const {
  // @@protoc_insertion_point(field_get:ControllerReply.status_code)
  return _internal_status_code();
}
inline void ControllerReply::_internal_set_status_code(::ControllerReply_StatusCode value) {
  assert(::ControllerReply_StatusCode_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.status_code_ = value;
}
inline void ControllerReply::set_status_code(::ControllerReply_StatusCode value) {
  _internal_set_status_code(value);
  // @@protoc_insertion_point(field_set:ControllerReply.status_code)
}

// optional string reason = 2;
inline bool ControllerReply::_internal_has_reason() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ControllerReply::has_reason() const {
  return _internal_has_reason();
}
inline void ControllerReply::clear_reason() {
  _impl_.reason_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ControllerReply::reason() const {
  // @@protoc_insertion_point(field_get:ControllerReply.reason)
  return _internal_reason();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ControllerReply::set_reason(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.reason_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ControllerReply.reason)
}
inline std::string* ControllerReply::mutable_reason() {
  std::string* _s = _internal_mutable_reason();
  // @@protoc_insertion_point(field_mutable:ControllerReply.reason)
  return _s;
}
inline const std::string& ControllerReply::_internal_reason() const {
  return _impl_.reason_.Get();
}
inline void ControllerReply::_internal_set_reason(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.reason_.Set(value, GetArenaForAllocation());
}
inline std::string* ControllerReply::_internal_mutable_reason() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.reason_.Mutable(GetArenaForAllocation());
}
inline std::string* ControllerReply::release_reason() {
  // @@protoc_insertion_point(field_release:ControllerReply.reason)
  if (!_internal_has_reason()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.reason_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.reason_.IsDefault()) {
    _impl_.reason_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ControllerReply::set_allocated_reason(std::string* reason) {
  if (reason != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.reason_.SetAllocated(reason, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.reason_.IsDefault()) {
    _impl_.reason_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ControllerReply.reason)
}

// optional string next_token = 3;
inline bool ControllerReply::_internal_has_next_token() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ControllerReply::has_next_token() const {
  return _internal_has_next_token();
}
inline void ControllerReply::clear_next_token() {
  _impl_.next_token_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ControllerReply::next_token() const {
  // @@protoc_insertion_point(field_get:ControllerReply.next_token)
  return _internal_next_token();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ControllerReply::set_next_token(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.next_token_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ControllerReply.next_token)
}
inline std::string* ControllerReply::mutable_next_token() {
  std::string* _s = _internal_mutable_next_token();
  // @@protoc_insertion_point(field_mutable:ControllerReply.next_token)
  return _s;
}
inline const std::string& ControllerReply::_internal_next_token() const {
  return _impl_.next_token_.Get();
}
inline void ControllerReply::_internal_set_next_token(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.next_token_.Set(value, GetArenaForAllocation());
}
inline std::string* ControllerReply::_internal_mutable_next_token() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.next_token_.Mutable(GetArenaForAllocation());
}
inline std::string* ControllerReply::release_next_token() {
  // @@protoc_insertion_point(field_release:ControllerReply.next_token)
  if (!_internal_has_next_token()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.next_token_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.next_token_.IsDefault()) {
    _impl_.next_token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ControllerReply::set_allocated_next_token(std::string* next_token) {
  if (next_token != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.next_token_.SetAllocated(next_token, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.next_token_.IsDefault()) {
    _impl_.next_token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ControllerReply.next_token)
}

// optional .ControllerReply.Verification verification = 4;
inline bool ControllerReply::_internal_has_verification() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool ControllerReply::has_verification() const {
  return _internal_has_verification();
}
inline void ControllerReply::clear_verification() {
  _impl_.verification_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::ControllerReply_Verification ControllerReply::_internal_verification() const {
  return static_cast< ::ControllerReply_Verification >(_impl_.verification_);
}
inline ::ControllerReply_Verification ControllerReply::verification() const {
  // @@protoc_insertion_point(field_get:ControllerReply.verification)
  return _internal_verification();
}
inline void ControllerReply::_internal_set_verification(::ControllerReply_Verification value) {
  assert(::ControllerReply_Verification_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.verification_ = value;
}
inline void ControllerReply::set_verification(::ControllerReply_Verification value) {
  _internal_set_verification(value);
  // @@protoc_insertion_point(field_set:ControllerReply.verification)
}

// -------------------------------------------------------------------

// Signature

// required string token = 1;
inline bool Signature::_internal_has_token() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Signature::has_token() const {
  return _internal_has_token();
}
inline void Signature::clear_token() {
  _impl_.token_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Signature::token() const {
  // @@protoc_insertion_point(field_get:Signature.token)
  return _internal_token();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Signature::set_token(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.token_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Signature.token)
}
inline std::string* Signature::mutable_token() {
  std::string* _s = _internal_mutable_token();
  // @@protoc_insertion_point(field_mutable:Signature.token)
  return _s;
}
inline const std::string& Signature::_internal_token() const {
  return _impl_.token_.Get();
}
inline void Signature::_internal_set_token(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.token_.Set(value, GetArenaForAllocation());
}
inline std::string* Signature::_internal_mutable_token() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.token_.Mutable(GetArenaForAllocation());
}
inline std::string* Signature::release_token() {
  // @@protoc_insertion_point(field_release:Signature.token)
  if (!_internal_has_token()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.token_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.token_.IsDefault()) {
    _impl_.token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Signature::set_allocated_token(std::string* token) {
  if (token != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.token_.SetAllocated(token, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.token_.IsDefault()) {
    _impl_.token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Signature.token)
}

// required bytes pkcs1v15 = 2;
inline bool Signature::_internal_has_pkcs1v15() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Signature::has_pkcs1v15() const {
  return _internal_has_pkcs1v15();
}
inline void Signature::clear_pkcs1v15() {
  _impl_.pkcs1v15_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Signature::pkcs1v15() const {
  // @@protoc_insertion_point(field_get:Signature.pkcs1v15)
  return _internal_pkcs1v15();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Signature::set_pkcs1v15(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.pkcs1v15_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Signature.pkcs1v15)
}
inline std::string* Signature::mutable_pkcs1v15() {
  std::string* _s = _internal_mutable_pkcs1v15();
  // @@protoc_insertion_point(field_mutable:Signature.pkcs1v15)
  return _s;
}
inline const std::string& Signature::_internal_pkcs1v15() const {
  return _impl_.pkcs1v15_.Get();
}
inline void Signature::_internal_set_pkcs1v15(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.pkcs1v15_.Set(value, GetArenaForAllocation());
}
inline std::string* Signature::_internal_mutable_pkcs1v15() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.pkcs1v15_.Mutable(GetArenaForAllocation());
}
inline std::string* Signature::release_pkcs1v15() {
  // @@protoc_insertion_point(field_release:Signature.pkcs1v15)
  if (!_internal_has_pkcs1v15()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.pkcs1v15_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.pkcs1v15_.IsDefault()) {
    _impl_.pkcs1v15_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Signature::set_allocated_pkcs1v15(std::string* pkcs1v15) {
  if (pkcs1v15 != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.pkcs1v15_.SetAllocated(pkcs1v15, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.pkcs1v15_.IsDefault()) {
    _impl_.pkcs1v15_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Signature.pkcs1v15)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::ControllerReply_StatusCode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ControllerReply_StatusCode>() {
  return ::ControllerReply_StatusCode_descriptor();
}
template <> struct is_proto_enum< ::ControllerReply_Verification> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ControllerReply_Verification>() {
  return ::ControllerReply_Verification_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_rcon_2fssl_5fgc_5frcon_2eproto
