// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.proto

#include "Msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace demo {
class MsgDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Msg>
      _instance;
} _Msg_default_instance_;
}  // namespace demo
namespace protobuf_Msg_2eproto {
static void InitDefaultsMsg() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::demo::_Msg_default_instance_;
    new (ptr) ::demo::Msg();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::demo::Msg::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Msg =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsMsg}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Msg.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::demo::Msg, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::demo::Msg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::demo::Msg, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::demo::Msg, msg_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::demo::Msg, info_),
  0,
  2,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::demo::Msg)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::demo::_Msg_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "Msg.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\tMsg.proto\022\004demo\"d\n\003Msg\022\014\n\004name\030\001 \002(\t\022#"
      "\n\010msg_type\030\002 \002(\0162\021.demo.Msg.MsgType\022\014\n\004i"
      "nfo\030\003 \002(\t\"\034\n\007MsgType\022\007\n\003CTL\020\000\022\010\n\004DATA\020\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 119);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Msg.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Msg_2eproto
namespace demo {
const ::google::protobuf::EnumDescriptor* Msg_MsgType_descriptor() {
  protobuf_Msg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Msg_2eproto::file_level_enum_descriptors[0];
}
bool Msg_MsgType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Msg_MsgType Msg::CTL;
const Msg_MsgType Msg::DATA;
const Msg_MsgType Msg::MsgType_MIN;
const Msg_MsgType Msg::MsgType_MAX;
const int Msg::MsgType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Msg::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Msg::kNameFieldNumber;
const int Msg::kMsgTypeFieldNumber;
const int Msg::kInfoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Msg::Msg()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_Msg_2eproto::scc_info_Msg.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:demo.Msg)
}
Msg::Msg(const Msg& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  info_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_info()) {
    info_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.info_);
  }
  msg_type_ = from.msg_type_;
  // @@protoc_insertion_point(copy_constructor:demo.Msg)
}

void Msg::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  info_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msg_type_ = 0;
}

Msg::~Msg() {
  // @@protoc_insertion_point(destructor:demo.Msg)
  SharedDtor();
}

void Msg::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  info_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Msg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Msg::descriptor() {
  ::protobuf_Msg_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Msg_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Msg& Msg::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_Msg_2eproto::scc_info_Msg.base);
  return *internal_default_instance();
}


void Msg::Clear() {
// @@protoc_insertion_point(message_clear_start:demo.Msg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      info_.ClearNonDefaultToEmptyNoArena();
    }
  }
  msg_type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Msg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:demo.Msg)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "demo.Msg.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .demo.Msg.MsgType msg_type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::demo::Msg_MsgType_IsValid(value)) {
            set_msg_type(static_cast< ::demo::Msg_MsgType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                2, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string info = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_info()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->info().data(), static_cast<int>(this->info().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "demo.Msg.info");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:demo.Msg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:demo.Msg)
  return false;
#undef DO_
}

void Msg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:demo.Msg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "demo.Msg.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // required .demo.Msg.MsgType msg_type = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->msg_type(), output);
  }

  // required string info = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->info().data(), static_cast<int>(this->info().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "demo.Msg.info");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->info(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:demo.Msg)
}

::google::protobuf::uint8* Msg::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:demo.Msg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "demo.Msg.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // required .demo.Msg.MsgType msg_type = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->msg_type(), target);
  }

  // required string info = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->info().data(), static_cast<int>(this->info().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "demo.Msg.info");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->info(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:demo.Msg)
  return target;
}

size_t Msg::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:demo.Msg)
  size_t total_size = 0;

  if (has_name()) {
    // required string name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  if (has_info()) {
    // required string info = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->info());
  }

  if (has_msg_type()) {
    // required .demo.Msg.MsgType msg_type = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->msg_type());
  }

  return total_size;
}
size_t Msg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:demo.Msg)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());

    // required string info = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->info());

    // required .demo.Msg.MsgType msg_type = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->msg_type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Msg::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:demo.Msg)
  GOOGLE_DCHECK_NE(&from, this);
  const Msg* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Msg>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:demo.Msg)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:demo.Msg)
    MergeFrom(*source);
  }
}

void Msg::MergeFrom(const Msg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:demo.Msg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_info();
      info_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.info_);
    }
    if (cached_has_bits & 0x00000004u) {
      msg_type_ = from.msg_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Msg::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:demo.Msg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Msg::CopyFrom(const Msg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:demo.Msg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Msg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void Msg::Swap(Msg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Msg::InternalSwap(Msg* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  info_.Swap(&other->info_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(msg_type_, other->msg_type_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Msg::GetMetadata() const {
  protobuf_Msg_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Msg_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace demo
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::demo::Msg* Arena::CreateMaybeMessage< ::demo::Msg >(Arena* arena) {
  return Arena::CreateInternal< ::demo::Msg >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
