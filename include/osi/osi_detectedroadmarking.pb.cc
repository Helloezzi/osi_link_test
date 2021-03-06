// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: osi_detectedroadmarking.proto

#include "osi_detectedroadmarking.pb.h"

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
constexpr DetectedRoadMarking_CandidateRoadMarking::DetectedRoadMarking_CandidateRoadMarking(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : classification_(nullptr)
  , probability_(0){}
struct DetectedRoadMarking_CandidateRoadMarkingDefaultTypeInternal {
  constexpr DetectedRoadMarking_CandidateRoadMarkingDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~DetectedRoadMarking_CandidateRoadMarkingDefaultTypeInternal() {}
  union {
    DetectedRoadMarking_CandidateRoadMarking _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT DetectedRoadMarking_CandidateRoadMarkingDefaultTypeInternal _DetectedRoadMarking_CandidateRoadMarking_default_instance_;
constexpr DetectedRoadMarking::DetectedRoadMarking(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : candidate_()
  , header_(nullptr)
  , base_(nullptr)
  , base_rmse_(nullptr)
  , color_description_(nullptr){}
struct DetectedRoadMarkingDefaultTypeInternal {
  constexpr DetectedRoadMarkingDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~DetectedRoadMarkingDefaultTypeInternal() {}
  union {
    DetectedRoadMarking _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT DetectedRoadMarkingDefaultTypeInternal _DetectedRoadMarking_default_instance_;
}  // namespace osi3
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_osi_5fdetectedroadmarking_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_osi_5fdetectedroadmarking_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_osi_5fdetectedroadmarking_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_osi_5fdetectedroadmarking_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking_CandidateRoadMarking, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking_CandidateRoadMarking, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking_CandidateRoadMarking, probability_),
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking_CandidateRoadMarking, classification_),
  1,
  0,
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking, header_),
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking, base_),
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking, base_rmse_),
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking, candidate_),
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedRoadMarking, color_description_),
  0,
  1,
  2,
  ~0u,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::osi3::DetectedRoadMarking_CandidateRoadMarking)},
  { 10, 21, -1, sizeof(::osi3::DetectedRoadMarking)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::osi3::_DetectedRoadMarking_CandidateRoadMarking_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::osi3::_DetectedRoadMarking_default_instance_),
};

const char descriptor_table_protodef_osi_5fdetectedroadmarking_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035osi_detectedroadmarking.proto\022\004osi3\032\020o"
  "si_common.proto\032\025osi_roadmarking.proto\032\030"
  "osi_detectedobject.proto\"\351\002\n\023DetectedRoa"
  "dMarking\022(\n\006header\030\001 \001(\0132\030.osi3.Detected"
  "ItemHeader\022\"\n\004base\030\002 \001(\0132\024.osi3.BaseStat"
  "ionary\022\'\n\tbase_rmse\030\003 \001(\0132\024.osi3.BaseSta"
  "tionary\022A\n\tcandidate\030\004 \003(\0132..osi3.Detect"
  "edRoadMarking.CandidateRoadMarking\0221\n\021co"
  "lor_description\030\005 \001(\0132\026.osi3.ColorDescri"
  "ption\032e\n\024CandidateRoadMarking\022\023\n\013probabi"
  "lity\030\001 \001(\001\0228\n\016classification\030\002 \001(\0132 .osi"
  "3.RoadMarking.ClassificationB\002H\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_osi_5fdetectedroadmarking_2eproto_deps[3] = {
  &::descriptor_table_osi_5fcommon_2eproto,
  &::descriptor_table_osi_5fdetectedobject_2eproto,
  &::descriptor_table_osi_5froadmarking_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_osi_5fdetectedroadmarking_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_osi_5fdetectedroadmarking_2eproto = {
  false, false, 472, descriptor_table_protodef_osi_5fdetectedroadmarking_2eproto, "osi_detectedroadmarking.proto", 
  &descriptor_table_osi_5fdetectedroadmarking_2eproto_once, descriptor_table_osi_5fdetectedroadmarking_2eproto_deps, 3, 2,
  schemas, file_default_instances, TableStruct_osi_5fdetectedroadmarking_2eproto::offsets,
  file_level_metadata_osi_5fdetectedroadmarking_2eproto, file_level_enum_descriptors_osi_5fdetectedroadmarking_2eproto, file_level_service_descriptors_osi_5fdetectedroadmarking_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_osi_5fdetectedroadmarking_2eproto_getter() {
  return &descriptor_table_osi_5fdetectedroadmarking_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_osi_5fdetectedroadmarking_2eproto(&descriptor_table_osi_5fdetectedroadmarking_2eproto);
namespace osi3 {

// ===================================================================

class DetectedRoadMarking_CandidateRoadMarking::_Internal {
 public:
  using HasBits = decltype(std::declval<DetectedRoadMarking_CandidateRoadMarking>()._has_bits_);
  static void set_has_probability(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::osi3::RoadMarking_Classification& classification(const DetectedRoadMarking_CandidateRoadMarking* msg);
  static void set_has_classification(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::osi3::RoadMarking_Classification&
DetectedRoadMarking_CandidateRoadMarking::_Internal::classification(const DetectedRoadMarking_CandidateRoadMarking* msg) {
  return *msg->classification_;
}
void DetectedRoadMarking_CandidateRoadMarking::clear_classification() {
  if (classification_ != nullptr) classification_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
DetectedRoadMarking_CandidateRoadMarking::DetectedRoadMarking_CandidateRoadMarking(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:osi3.DetectedRoadMarking.CandidateRoadMarking)
}
DetectedRoadMarking_CandidateRoadMarking::DetectedRoadMarking_CandidateRoadMarking(const DetectedRoadMarking_CandidateRoadMarking& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_classification()) {
    classification_ = new ::osi3::RoadMarking_Classification(*from.classification_);
  } else {
    classification_ = nullptr;
  }
  probability_ = from.probability_;
  // @@protoc_insertion_point(copy_constructor:osi3.DetectedRoadMarking.CandidateRoadMarking)
}

void DetectedRoadMarking_CandidateRoadMarking::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&classification_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&probability_) -
    reinterpret_cast<char*>(&classification_)) + sizeof(probability_));
}

DetectedRoadMarking_CandidateRoadMarking::~DetectedRoadMarking_CandidateRoadMarking() {
  // @@protoc_insertion_point(destructor:osi3.DetectedRoadMarking.CandidateRoadMarking)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void DetectedRoadMarking_CandidateRoadMarking::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete classification_;
}

void DetectedRoadMarking_CandidateRoadMarking::ArenaDtor(void* object) {
  DetectedRoadMarking_CandidateRoadMarking* _this = reinterpret_cast< DetectedRoadMarking_CandidateRoadMarking* >(object);
  (void)_this;
}
void DetectedRoadMarking_CandidateRoadMarking::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void DetectedRoadMarking_CandidateRoadMarking::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void DetectedRoadMarking_CandidateRoadMarking::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.DetectedRoadMarking.CandidateRoadMarking)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(classification_ != nullptr);
    classification_->Clear();
  }
  probability_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DetectedRoadMarking_CandidateRoadMarking::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional double probability = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_probability(&has_bits);
          probability_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional .osi3.RoadMarking.Classification classification = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_classification(), ptr);
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* DetectedRoadMarking_CandidateRoadMarking::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.DetectedRoadMarking.CandidateRoadMarking)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double probability = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_probability(), target);
  }

  // optional .osi3.RoadMarking.Classification classification = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::classification(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.DetectedRoadMarking.CandidateRoadMarking)
  return target;
}

size_t DetectedRoadMarking_CandidateRoadMarking::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.DetectedRoadMarking.CandidateRoadMarking)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .osi3.RoadMarking.Classification classification = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *classification_);
    }

    // optional double probability = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData DetectedRoadMarking_CandidateRoadMarking::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    DetectedRoadMarking_CandidateRoadMarking::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*DetectedRoadMarking_CandidateRoadMarking::GetClassData() const { return &_class_data_; }

void DetectedRoadMarking_CandidateRoadMarking::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<DetectedRoadMarking_CandidateRoadMarking *>(to)->MergeFrom(
      static_cast<const DetectedRoadMarking_CandidateRoadMarking &>(from));
}


void DetectedRoadMarking_CandidateRoadMarking::MergeFrom(const DetectedRoadMarking_CandidateRoadMarking& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:osi3.DetectedRoadMarking.CandidateRoadMarking)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_classification()->::osi3::RoadMarking_Classification::MergeFrom(from._internal_classification());
    }
    if (cached_has_bits & 0x00000002u) {
      probability_ = from.probability_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void DetectedRoadMarking_CandidateRoadMarking::CopyFrom(const DetectedRoadMarking_CandidateRoadMarking& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.DetectedRoadMarking.CandidateRoadMarking)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DetectedRoadMarking_CandidateRoadMarking::IsInitialized() const {
  return true;
}

void DetectedRoadMarking_CandidateRoadMarking::InternalSwap(DetectedRoadMarking_CandidateRoadMarking* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DetectedRoadMarking_CandidateRoadMarking, probability_)
      + sizeof(DetectedRoadMarking_CandidateRoadMarking::probability_)
      - PROTOBUF_FIELD_OFFSET(DetectedRoadMarking_CandidateRoadMarking, classification_)>(
          reinterpret_cast<char*>(&classification_),
          reinterpret_cast<char*>(&other->classification_));
}

::PROTOBUF_NAMESPACE_ID::Metadata DetectedRoadMarking_CandidateRoadMarking::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_osi_5fdetectedroadmarking_2eproto_getter, &descriptor_table_osi_5fdetectedroadmarking_2eproto_once,
      file_level_metadata_osi_5fdetectedroadmarking_2eproto[0]);
}

// ===================================================================

class DetectedRoadMarking::_Internal {
 public:
  using HasBits = decltype(std::declval<DetectedRoadMarking>()._has_bits_);
  static const ::osi3::DetectedItemHeader& header(const DetectedRoadMarking* msg);
  static void set_has_header(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::osi3::BaseStationary& base(const DetectedRoadMarking* msg);
  static void set_has_base(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::osi3::BaseStationary& base_rmse(const DetectedRoadMarking* msg);
  static void set_has_base_rmse(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::osi3::ColorDescription& color_description(const DetectedRoadMarking* msg);
  static void set_has_color_description(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

const ::osi3::DetectedItemHeader&
DetectedRoadMarking::_Internal::header(const DetectedRoadMarking* msg) {
  return *msg->header_;
}
const ::osi3::BaseStationary&
DetectedRoadMarking::_Internal::base(const DetectedRoadMarking* msg) {
  return *msg->base_;
}
const ::osi3::BaseStationary&
DetectedRoadMarking::_Internal::base_rmse(const DetectedRoadMarking* msg) {
  return *msg->base_rmse_;
}
const ::osi3::ColorDescription&
DetectedRoadMarking::_Internal::color_description(const DetectedRoadMarking* msg) {
  return *msg->color_description_;
}
void DetectedRoadMarking::clear_header() {
  if (header_ != nullptr) header_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void DetectedRoadMarking::clear_base() {
  if (base_ != nullptr) base_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void DetectedRoadMarking::clear_base_rmse() {
  if (base_rmse_ != nullptr) base_rmse_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void DetectedRoadMarking::clear_color_description() {
  if (color_description_ != nullptr) color_description_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
DetectedRoadMarking::DetectedRoadMarking(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  candidate_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:osi3.DetectedRoadMarking)
}
DetectedRoadMarking::DetectedRoadMarking(const DetectedRoadMarking& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      candidate_(from.candidate_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_header()) {
    header_ = new ::osi3::DetectedItemHeader(*from.header_);
  } else {
    header_ = nullptr;
  }
  if (from._internal_has_base()) {
    base_ = new ::osi3::BaseStationary(*from.base_);
  } else {
    base_ = nullptr;
  }
  if (from._internal_has_base_rmse()) {
    base_rmse_ = new ::osi3::BaseStationary(*from.base_rmse_);
  } else {
    base_rmse_ = nullptr;
  }
  if (from._internal_has_color_description()) {
    color_description_ = new ::osi3::ColorDescription(*from.color_description_);
  } else {
    color_description_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:osi3.DetectedRoadMarking)
}

void DetectedRoadMarking::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&header_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&color_description_) -
    reinterpret_cast<char*>(&header_)) + sizeof(color_description_));
}

DetectedRoadMarking::~DetectedRoadMarking() {
  // @@protoc_insertion_point(destructor:osi3.DetectedRoadMarking)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void DetectedRoadMarking::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete base_;
  if (this != internal_default_instance()) delete base_rmse_;
  if (this != internal_default_instance()) delete color_description_;
}

void DetectedRoadMarking::ArenaDtor(void* object) {
  DetectedRoadMarking* _this = reinterpret_cast< DetectedRoadMarking* >(object);
  (void)_this;
}
void DetectedRoadMarking::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void DetectedRoadMarking::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void DetectedRoadMarking::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.DetectedRoadMarking)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  candidate_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(header_ != nullptr);
      header_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(base_ != nullptr);
      base_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(base_rmse_ != nullptr);
      base_rmse_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(color_description_ != nullptr);
      color_description_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DetectedRoadMarking::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .osi3.DetectedItemHeader header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .osi3.BaseStationary base = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_base(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .osi3.BaseStationary base_rmse = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_base_rmse(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .osi3.DetectedRoadMarking.CandidateRoadMarking candidate = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_candidate(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional .osi3.ColorDescription color_description = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_color_description(), ptr);
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* DetectedRoadMarking::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.DetectedRoadMarking)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .osi3.DetectedItemHeader header = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // optional .osi3.BaseStationary base = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::base(this), target, stream);
  }

  // optional .osi3.BaseStationary base_rmse = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::base_rmse(this), target, stream);
  }

  // repeated .osi3.DetectedRoadMarking.CandidateRoadMarking candidate = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_candidate_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_candidate(i), target, stream);
  }

  // optional .osi3.ColorDescription color_description = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::color_description(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.DetectedRoadMarking)
  return target;
}

size_t DetectedRoadMarking::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.DetectedRoadMarking)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .osi3.DetectedRoadMarking.CandidateRoadMarking candidate = 4;
  total_size += 1UL * this->_internal_candidate_size();
  for (const auto& msg : this->candidate_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional .osi3.DetectedItemHeader header = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *header_);
    }

    // optional .osi3.BaseStationary base = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *base_);
    }

    // optional .osi3.BaseStationary base_rmse = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *base_rmse_);
    }

    // optional .osi3.ColorDescription color_description = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *color_description_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData DetectedRoadMarking::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    DetectedRoadMarking::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*DetectedRoadMarking::GetClassData() const { return &_class_data_; }

void DetectedRoadMarking::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<DetectedRoadMarking *>(to)->MergeFrom(
      static_cast<const DetectedRoadMarking &>(from));
}


void DetectedRoadMarking::MergeFrom(const DetectedRoadMarking& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:osi3.DetectedRoadMarking)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  candidate_.MergeFrom(from.candidate_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_header()->::osi3::DetectedItemHeader::MergeFrom(from._internal_header());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_base()->::osi3::BaseStationary::MergeFrom(from._internal_base());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_base_rmse()->::osi3::BaseStationary::MergeFrom(from._internal_base_rmse());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_color_description()->::osi3::ColorDescription::MergeFrom(from._internal_color_description());
    }
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void DetectedRoadMarking::CopyFrom(const DetectedRoadMarking& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.DetectedRoadMarking)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DetectedRoadMarking::IsInitialized() const {
  return true;
}

void DetectedRoadMarking::InternalSwap(DetectedRoadMarking* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  candidate_.InternalSwap(&other->candidate_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DetectedRoadMarking, color_description_)
      + sizeof(DetectedRoadMarking::color_description_)
      - PROTOBUF_FIELD_OFFSET(DetectedRoadMarking, header_)>(
          reinterpret_cast<char*>(&header_),
          reinterpret_cast<char*>(&other->header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata DetectedRoadMarking::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_osi_5fdetectedroadmarking_2eproto_getter, &descriptor_table_osi_5fdetectedroadmarking_2eproto_once,
      file_level_metadata_osi_5fdetectedroadmarking_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace osi3
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::osi3::DetectedRoadMarking_CandidateRoadMarking* Arena::CreateMaybeMessage< ::osi3::DetectedRoadMarking_CandidateRoadMarking >(Arena* arena) {
  return Arena::CreateMessageInternal< ::osi3::DetectedRoadMarking_CandidateRoadMarking >(arena);
}
template<> PROTOBUF_NOINLINE ::osi3::DetectedRoadMarking* Arena::CreateMaybeMessage< ::osi3::DetectedRoadMarking >(Arena* arena) {
  return Arena::CreateMessageInternal< ::osi3::DetectedRoadMarking >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
