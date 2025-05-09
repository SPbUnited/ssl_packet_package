// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tracker/ssl_vision_wrapper_tracked.proto

#include "tracker/ssl_vision_wrapper_tracked.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR TrackerWrapperPacket::TrackerWrapperPacket(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.uuid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.source_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.tracked_frame_)*/nullptr} {}
struct TrackerWrapperPacketDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TrackerWrapperPacketDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TrackerWrapperPacketDefaultTypeInternal() {}
  union {
    TrackerWrapperPacket _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TrackerWrapperPacketDefaultTypeInternal _TrackerWrapperPacket_default_instance_;
static ::_pb::Metadata file_level_metadata_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto = nullptr;

const uint32_t TableStruct_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::TrackerWrapperPacket, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::TrackerWrapperPacket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::TrackerWrapperPacket, _impl_.uuid_),
  PROTOBUF_FIELD_OFFSET(::TrackerWrapperPacket, _impl_.source_name_),
  PROTOBUF_FIELD_OFFSET(::TrackerWrapperPacket, _impl_.tracked_frame_),
  0,
  1,
  2,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::TrackerWrapperPacket)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_TrackerWrapperPacket_default_instance_._instance,
};

const char descriptor_table_protodef_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(tracker/ssl_vision_wrapper_tracked.pro"
  "to\032*tracker/ssl_vision_detection_tracked"
  ".proto\"_\n\024TrackerWrapperPacket\022\014\n\004uuid\030\001"
  " \002(\t\022\023\n\013source_name\030\002 \001(\t\022$\n\rtracked_fra"
  "me\030\003 \001(\0132\r.TrackedFrame"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto_deps[1] = {
  &::descriptor_table_tracker_2fssl_5fvision_5fdetection_5ftracked_2eproto,
};
static ::_pbi::once_flag descriptor_table_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto = {
    false, false, 183, descriptor_table_protodef_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto,
    "tracker/ssl_vision_wrapper_tracked.proto",
    &descriptor_table_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto_once, descriptor_table_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto::offsets,
    file_level_metadata_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto, file_level_enum_descriptors_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto,
    file_level_service_descriptors_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto_getter() {
  return &descriptor_table_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto(&descriptor_table_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto);

// ===================================================================

class TrackerWrapperPacket::_Internal {
 public:
  using HasBits = decltype(std::declval<TrackerWrapperPacket>()._impl_._has_bits_);
  static void set_has_uuid(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_source_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::TrackedFrame& tracked_frame(const TrackerWrapperPacket* msg);
  static void set_has_tracked_frame(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000001) ^ 0x00000001) != 0;
  }
};

const ::TrackedFrame&
TrackerWrapperPacket::_Internal::tracked_frame(const TrackerWrapperPacket* msg) {
  return *msg->_impl_.tracked_frame_;
}
void TrackerWrapperPacket::clear_tracked_frame() {
  if (_impl_.tracked_frame_ != nullptr) _impl_.tracked_frame_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
TrackerWrapperPacket::TrackerWrapperPacket(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:TrackerWrapperPacket)
}
TrackerWrapperPacket::TrackerWrapperPacket(const TrackerWrapperPacket& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TrackerWrapperPacket* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.uuid_){}
    , decltype(_impl_.source_name_){}
    , decltype(_impl_.tracked_frame_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.uuid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.uuid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_uuid()) {
    _this->_impl_.uuid_.Set(from._internal_uuid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.source_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.source_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_source_name()) {
    _this->_impl_.source_name_.Set(from._internal_source_name(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_tracked_frame()) {
    _this->_impl_.tracked_frame_ = new ::TrackedFrame(*from._impl_.tracked_frame_);
  }
  // @@protoc_insertion_point(copy_constructor:TrackerWrapperPacket)
}

inline void TrackerWrapperPacket::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.uuid_){}
    , decltype(_impl_.source_name_){}
    , decltype(_impl_.tracked_frame_){nullptr}
  };
  _impl_.uuid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.uuid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.source_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.source_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TrackerWrapperPacket::~TrackerWrapperPacket() {
  // @@protoc_insertion_point(destructor:TrackerWrapperPacket)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TrackerWrapperPacket::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.uuid_.Destroy();
  _impl_.source_name_.Destroy();
  if (this != internal_default_instance()) delete _impl_.tracked_frame_;
}

void TrackerWrapperPacket::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TrackerWrapperPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:TrackerWrapperPacket)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.uuid_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.source_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(_impl_.tracked_frame_ != nullptr);
      _impl_.tracked_frame_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TrackerWrapperPacket::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required string uuid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_uuid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "TrackerWrapperPacket.uuid");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional string source_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_source_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "TrackerWrapperPacket.source_name");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional .TrackedFrame tracked_frame = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_tracked_frame(), ptr);
          CHK_(ptr);
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
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* TrackerWrapperPacket::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TrackerWrapperPacket)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required string uuid = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_uuid().data(), static_cast<int>(this->_internal_uuid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "TrackerWrapperPacket.uuid");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_uuid(), target);
  }

  // optional string source_name = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_source_name().data(), static_cast<int>(this->_internal_source_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "TrackerWrapperPacket.source_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_source_name(), target);
  }

  // optional .TrackedFrame tracked_frame = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::tracked_frame(this),
        _Internal::tracked_frame(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TrackerWrapperPacket)
  return target;
}

size_t TrackerWrapperPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TrackerWrapperPacket)
  size_t total_size = 0;

  // required string uuid = 1;
  if (_internal_has_uuid()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_uuid());
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000006u) {
    // optional string source_name = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_source_name());
    }

    // optional .TrackedFrame tracked_frame = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.tracked_frame_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TrackerWrapperPacket::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TrackerWrapperPacket::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TrackerWrapperPacket::GetClassData() const { return &_class_data_; }


void TrackerWrapperPacket::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TrackerWrapperPacket*>(&to_msg);
  auto& from = static_cast<const TrackerWrapperPacket&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:TrackerWrapperPacket)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_uuid(from._internal_uuid());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_source_name(from._internal_source_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_mutable_tracked_frame()->::TrackedFrame::MergeFrom(
          from._internal_tracked_frame());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TrackerWrapperPacket::CopyFrom(const TrackerWrapperPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TrackerWrapperPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrackerWrapperPacket::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  if (_internal_has_tracked_frame()) {
    if (!_impl_.tracked_frame_->IsInitialized()) return false;
  }
  return true;
}

void TrackerWrapperPacket::InternalSwap(TrackerWrapperPacket* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.uuid_, lhs_arena,
      &other->_impl_.uuid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.source_name_, lhs_arena,
      &other->_impl_.source_name_, rhs_arena
  );
  swap(_impl_.tracked_frame_, other->_impl_.tracked_frame_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TrackerWrapperPacket::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto_getter, &descriptor_table_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto_once,
      file_level_metadata_tracker_2fssl_5fvision_5fwrapper_5ftracked_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TrackerWrapperPacket*
Arena::CreateMaybeMessage< ::TrackerWrapperPacket >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TrackerWrapperPacket >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
