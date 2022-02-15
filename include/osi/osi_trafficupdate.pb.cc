// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: osi_trafficupdate.proto

#include "osi_trafficupdate.pb.h"

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
namespace osi3 {
constexpr TrafficUpdate::TrafficUpdate(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : update_()
  , version_(nullptr)
  , timestamp_(nullptr){}
struct TrafficUpdateDefaultTypeInternal {
  constexpr TrafficUpdateDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TrafficUpdateDefaultTypeInternal() {}
  union {
    TrafficUpdate _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TrafficUpdateDefaultTypeInternal _TrafficUpdate_default_instance_;
}  // namespace osi3
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_osi_5ftrafficupdate_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_osi_5ftrafficupdate_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_osi_5ftrafficupdate_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_osi_5ftrafficupdate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, version_),
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, timestamp_),
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, update_),
  0,
  1,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::osi3::TrafficUpdate)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::osi3::_TrafficUpdate_default_instance_),
};

const char descriptor_table_protodef_osi_5ftrafficupdate_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027osi_trafficupdate.proto\022\004osi3\032\021osi_ver"
  "sion.proto\032\020osi_common.proto\032\020osi_object"
  ".proto\"\200\001\n\rTrafficUpdate\022\'\n\007version\030\001 \001("
  "\0132\026.osi3.InterfaceVersion\022\"\n\ttimestamp\030\002"
  " \001(\0132\017.osi3.Timestamp\022\"\n\006update\030\003 \003(\0132\022."
  "osi3.MovingObjectB\002H\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_osi_5ftrafficupdate_2eproto_deps[3] = {
  &::descriptor_table_osi_5fcommon_2eproto,
  &::descriptor_table_osi_5fobject_2eproto,
  &::descriptor_table_osi_5fversion_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_osi_5ftrafficupdate_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_osi_5ftrafficupdate_2eproto = {
  false, false, 221, descriptor_table_protodef_osi_5ftrafficupdate_2eproto, "osi_trafficupdate.proto", 
  &descriptor_table_osi_5ftrafficupdate_2eproto_once, descriptor_table_osi_5ftrafficupdate_2eproto_deps, 3, 1,
  schemas, file_default_instances, TableStruct_osi_5ftrafficupdate_2eproto::offsets,
  file_level_metadata_osi_5ftrafficupdate_2eproto, file_level_enum_descriptors_osi_5ftrafficupdate_2eproto, file_level_service_descriptors_osi_5ftrafficupdate_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_osi_5ftrafficupdate_2eproto_getter() {
  return &descriptor_table_osi_5ftrafficupdate_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_osi_5ftrafficupdate_2eproto(&descriptor_table_osi_5ftrafficupdate_2eproto);
namespace osi3 {

// ===================================================================

class TrafficUpdate::_Internal {
 public:
  using HasBits = decltype(std::declval<TrafficUpdate>()._has_bits_);
  static const ::osi3::InterfaceVersion& version(const TrafficUpdate* msg);
  static void set_has_version(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::osi3::Timestamp& timestamp(const TrafficUpdate* msg);
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::osi3::InterfaceVersion&
TrafficUpdate::_Internal::version(const TrafficUpdate* msg) {
  return *msg->version_;
}
const ::osi3::Timestamp&
TrafficUpdate::_Internal::timestamp(const TrafficUpdate* msg) {
  return *msg->timestamp_;
}
void TrafficUpdate::clear_version() {
  if (version_ != nullptr) version_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void TrafficUpdate::clear_timestamp() {
  if (timestamp_ != nullptr) timestamp_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void TrafficUpdate::clear_update() {
  update_.Clear();
}
TrafficUpdate::TrafficUpdate(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  update_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:osi3.TrafficUpdate)
}
TrafficUpdate::TrafficUpdate(const TrafficUpdate& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      update_(from.update_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_version()) {
    version_ = new ::osi3::InterfaceVersion(*from.version_);
  } else {
    version_ = nullptr;
  }
  if (from._internal_has_timestamp()) {
    timestamp_ = new ::osi3::Timestamp(*from.timestamp_);
  } else {
    timestamp_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:osi3.TrafficUpdate)
}

void TrafficUpdate::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&version_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&timestamp_) -
    reinterpret_cast<char*>(&version_)) + sizeof(timestamp_));
}

TrafficUpdate::~TrafficUpdate() {
  // @@protoc_insertion_point(destructor:osi3.TrafficUpdate)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void TrafficUpdate::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete version_;
  if (this != internal_default_instance()) delete timestamp_;
}

void TrafficUpdate::ArenaDtor(void* object) {
  TrafficUpdate* _this = reinterpret_cast< TrafficUpdate* >(object);
  (void)_this;
}
void TrafficUpdate::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TrafficUpdate::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TrafficUpdate::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.TrafficUpdate)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  update_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(version_ != nullptr);
      version_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(timestamp_ != nullptr);
      timestamp_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TrafficUpdate::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .osi3.InterfaceVersion version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_version(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .osi3.Timestamp timestamp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .osi3.MovingObject update = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_update(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* TrafficUpdate::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.TrafficUpdate)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .osi3.InterfaceVersion version = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::version(this), target, stream);
  }

  // optional .osi3.Timestamp timestamp = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::timestamp(this), target, stream);
  }

  // repeated .osi3.MovingObject update = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_update_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_update(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.TrafficUpdate)
  return target;
}

size_t TrafficUpdate::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.TrafficUpdate)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .osi3.MovingObject update = 3;
  total_size += 1UL * this->_internal_update_size();
  for (const auto& msg : this->update_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .osi3.InterfaceVersion version = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *version_);
    }

    // optional .osi3.Timestamp timestamp = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *timestamp_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TrafficUpdate::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    TrafficUpdate::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TrafficUpdate::GetClassData() const { return &_class_data_; }

void TrafficUpdate::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<TrafficUpdate *>(to)->MergeFrom(
      static_cast<const TrafficUpdate &>(from));
}


void TrafficUpdate::MergeFrom(const TrafficUpdate& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:osi3.TrafficUpdate)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  update_.MergeFrom(from.update_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_version()->::osi3::InterfaceVersion::MergeFrom(from._internal_version());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_timestamp()->::osi3::Timestamp::MergeFrom(from._internal_timestamp());
    }
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TrafficUpdate::CopyFrom(const TrafficUpdate& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.TrafficUpdate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrafficUpdate::IsInitialized() const {
  return true;
}

void TrafficUpdate::InternalSwap(TrafficUpdate* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  update_.InternalSwap(&other->update_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TrafficUpdate, timestamp_)
      + sizeof(TrafficUpdate::timestamp_)
      - PROTOBUF_FIELD_OFFSET(TrafficUpdate, version_)>(
          reinterpret_cast<char*>(&version_),
          reinterpret_cast<char*>(&other->version_));
}

::PROTOBUF_NAMESPACE_ID::Metadata TrafficUpdate::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_osi_5ftrafficupdate_2eproto_getter, &descriptor_table_osi_5ftrafficupdate_2eproto_once,
      file_level_metadata_osi_5ftrafficupdate_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace osi3
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::osi3::TrafficUpdate* Arena::CreateMaybeMessage< ::osi3::TrafficUpdate >(Arena* arena) {
  return Arena::CreateMessageInternal< ::osi3::TrafficUpdate >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
