// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/struct.proto

#ifndef PROTOBUF_google_2fprotobuf_2fstruct_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2fstruct_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fprotobuf_2fstruct_2eproto {
// Internal implementation detail -- do not use these members.
struct PROTOBUF_API TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void PROTOBUF_API AddDescriptors();
void PROTOBUF_API InitDefaultsListValueImpl();
void PROTOBUF_API InitDefaultsListValue();
inline void PROTOBUF_API InitDefaults() {
  InitDefaultsListValue();
}
}  // namespace protobuf_google_2fprotobuf_2fstruct_2eproto
namespace google {
namespace protobuf {
class ListValue;
class ListValueDefaultTypeInternal;
PROTOBUF_API extern ListValueDefaultTypeInternal _ListValue_default_instance_;
class Struct;
class StructDefaultTypeInternal;
PROTOBUF_API extern StructDefaultTypeInternal _Struct_default_instance_;
class Struct_FieldsEntry_DoNotUse;
class Struct_FieldsEntry_DoNotUseDefaultTypeInternal;
PROTOBUF_API extern Struct_FieldsEntry_DoNotUseDefaultTypeInternal _Struct_FieldsEntry_DoNotUse_default_instance_;
class Value;
class ValueDefaultTypeInternal;
PROTOBUF_API extern ValueDefaultTypeInternal _Value_default_instance_;
}  // namespace protobuf
}  // namespace google
namespace google {
namespace protobuf {

enum NullValue {
  NULL_VALUE = 0,
  NullValue_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  NullValue_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
PROTOBUF_API bool NullValue_IsValid(int value);
const NullValue NullValue_MIN = NULL_VALUE;
const NullValue NullValue_MAX = NULL_VALUE;
const int NullValue_ARRAYSIZE = NullValue_MAX + 1;

PROTOBUF_API const ::google::protobuf::EnumDescriptor* NullValue_descriptor();
inline const ::std::string& NullValue_Name(NullValue value) {
  return ::google::protobuf::internal::NameOfEnum(
    NullValue_descriptor(), value);
}
inline bool NullValue_Parse(
    const ::std::string& name, NullValue* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NullValue>(
    NullValue_descriptor(), name, value);
}
// ===================================================================

class Struct_FieldsEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<Struct_FieldsEntry_DoNotUse, 
    ::std::string, ::google::protobuf::Value,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<Struct_FieldsEntry_DoNotUse, 
    ::std::string, ::google::protobuf::Value,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  Struct_FieldsEntry_DoNotUse();
  Struct_FieldsEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const Struct_FieldsEntry_DoNotUse& other);
  static const Struct_FieldsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const Struct_FieldsEntry_DoNotUse*>(&_Struct_FieldsEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class PROTOBUF_API Struct : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Struct) */ {
 public:
  Struct();
  virtual ~Struct();

  Struct(const Struct& from);

  inline Struct& operator=(const Struct& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Struct(Struct&& from) noexcept
    : Struct() {
    *this = ::std::move(from);
  }

  inline Struct& operator=(Struct&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const Struct& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Struct* internal_default_instance() {
    return reinterpret_cast<const Struct*>(
               &_Struct_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(Struct* other);
  void Swap(Struct* other);
  friend void swap(Struct& a, Struct& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Struct* New() const PROTOBUF_FINAL { return New(NULL); }

  Struct* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Struct& from);
  void MergeFrom(const Struct& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Struct* other);
  protected:
  explicit Struct(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .google.protobuf.Value> fields = 1;
  int fields_size() const;
  void clear_fields();
  static const int kFieldsFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::google::protobuf::Value >&
      fields() const;
  ::google::protobuf::Map< ::std::string, ::google::protobuf::Value >*
      mutable_fields();

  // @@protoc_insertion_point(class_scope:google.protobuf.Struct)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::MapField<
      Struct_FieldsEntry_DoNotUse,
      ::std::string, ::google::protobuf::Value,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > fields_;
  mutable int _cached_size_;
  friend struct ::protobuf_google_2fprotobuf_2fstruct_2eproto::TableStruct;
  friend void ::protobuf_google_2fprotobuf_2fstruct_2eproto::InitDefaultsListValueImpl();
};
// -------------------------------------------------------------------

class PROTOBUF_API Value : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Value) */ {
 public:
  Value();
  virtual ~Value();

  Value(const Value& from);

  inline Value& operator=(const Value& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Value(Value&& from) noexcept
    : Value() {
    *this = ::std::move(from);
  }

  inline Value& operator=(Value&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const Value& default_instance();

  enum KindCase {
    kNullValue = 1,
    kNumberValue = 2,
    kStringValue = 3,
    kBoolValue = 4,
    kStructValue = 5,
    kListValue = 6,
    KIND_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Value* internal_default_instance() {
    return reinterpret_cast<const Value*>(
               &_Value_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void UnsafeArenaSwap(Value* other);
  void Swap(Value* other);
  friend void swap(Value& a, Value& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Value* New() const PROTOBUF_FINAL { return New(NULL); }

  Value* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Value& from);
  void MergeFrom(const Value& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Value* other);
  protected:
  explicit Value(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.protobuf.NullValue null_value = 1;
  private:
  bool has_null_value() const;
  public:
  void clear_null_value();
  static const int kNullValueFieldNumber = 1;
  ::google::protobuf::NullValue null_value() const;
  void set_null_value(::google::protobuf::NullValue value);

  // double number_value = 2;
  private:
  bool has_number_value() const;
  public:
  void clear_number_value();
  static const int kNumberValueFieldNumber = 2;
  double number_value() const;
  void set_number_value(double value);

  // string string_value = 3;
  private:
  bool has_string_value() const;
  public:
  void clear_string_value();
  static const int kStringValueFieldNumber = 3;
  const ::std::string& string_value() const;
  void set_string_value(const ::std::string& value);
  #if LANG_CXX11
  void set_string_value(::std::string&& value);
  #endif
  void set_string_value(const char* value);
  void set_string_value(const char* value, size_t size);
  ::std::string* mutable_string_value();
  ::std::string* release_string_value();
  void set_allocated_string_value(::std::string* string_value);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_string_value();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_string_value(
      ::std::string* string_value);

  // bool bool_value = 4;
  private:
  bool has_bool_value() const;
  public:
  void clear_bool_value();
  static const int kBoolValueFieldNumber = 4;
  bool bool_value() const;
  void set_bool_value(bool value);

  // .google.protobuf.Struct struct_value = 5;
  bool has_struct_value() const;
  void clear_struct_value();
  static const int kStructValueFieldNumber = 5;
  private:
  void _slow_mutable_struct_value();
  public:
  const ::google::protobuf::Struct& struct_value() const;
  ::google::protobuf::Struct* release_struct_value();
  ::google::protobuf::Struct* mutable_struct_value();
  void set_allocated_struct_value(::google::protobuf::Struct* struct_value);
  void unsafe_arena_set_allocated_struct_value(
      ::google::protobuf::Struct* struct_value);
  ::google::protobuf::Struct* unsafe_arena_release_struct_value();

  // .google.protobuf.ListValue list_value = 6;
  bool has_list_value() const;
  void clear_list_value();
  static const int kListValueFieldNumber = 6;
  private:
  void _slow_mutable_list_value();
  public:
  const ::google::protobuf::ListValue& list_value() const;
  ::google::protobuf::ListValue* release_list_value();
  ::google::protobuf::ListValue* mutable_list_value();
  void set_allocated_list_value(::google::protobuf::ListValue* list_value);
  void unsafe_arena_set_allocated_list_value(
      ::google::protobuf::ListValue* list_value);
  ::google::protobuf::ListValue* unsafe_arena_release_list_value();

  KindCase kind_case() const;
  // @@protoc_insertion_point(class_scope:google.protobuf.Value)
 private:
  void set_has_null_value();
  void set_has_number_value();
  void set_has_string_value();
  void set_has_bool_value();
  void set_has_struct_value();
  void set_has_list_value();

  inline bool has_kind() const;
  void clear_kind();
  inline void clear_has_kind();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  union KindUnion {
    KindUnion() {}
    int null_value_;
    double number_value_;
    ::google::protobuf::internal::ArenaStringPtr string_value_;
    bool bool_value_;
    ::google::protobuf::Struct* struct_value_;
    ::google::protobuf::ListValue* list_value_;
  } kind_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_google_2fprotobuf_2fstruct_2eproto::TableStruct;
  friend void ::protobuf_google_2fprotobuf_2fstruct_2eproto::InitDefaultsListValueImpl();
};
// -------------------------------------------------------------------

class PROTOBUF_API ListValue : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.protobuf.ListValue) */ {
 public:
  ListValue();
  virtual ~ListValue();

  ListValue(const ListValue& from);

  inline ListValue& operator=(const ListValue& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ListValue(ListValue&& from) noexcept
    : ListValue() {
    *this = ::std::move(from);
  }

  inline ListValue& operator=(ListValue&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const ListValue& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ListValue* internal_default_instance() {
    return reinterpret_cast<const ListValue*>(
               &_ListValue_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void UnsafeArenaSwap(ListValue* other);
  void Swap(ListValue* other);
  friend void swap(ListValue& a, ListValue& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ListValue* New() const PROTOBUF_FINAL { return New(NULL); }

  ListValue* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ListValue& from);
  void MergeFrom(const ListValue& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ListValue* other);
  protected:
  explicit ListValue(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .google.protobuf.Value values = 1;
  int values_size() const;
  void clear_values();
  static const int kValuesFieldNumber = 1;
  const ::google::protobuf::Value& values(int index) const;
  ::google::protobuf::Value* mutable_values(int index);
  ::google::protobuf::Value* add_values();
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >*
      mutable_values();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >&
      values() const;

  // @@protoc_insertion_point(class_scope:google.protobuf.ListValue)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value > values_;
  mutable int _cached_size_;
  friend struct ::protobuf_google_2fprotobuf_2fstruct_2eproto::TableStruct;
  friend void ::protobuf_google_2fprotobuf_2fstruct_2eproto::InitDefaultsListValueImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Struct

// map<string, .google.protobuf.Value> fields = 1;
inline int Struct::fields_size() const {
  return fields_.size();
}
inline void Struct::clear_fields() {
  fields_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::google::protobuf::Value >&
Struct::fields() const {
  // @@protoc_insertion_point(field_map:google.protobuf.Struct.fields)
  return fields_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::google::protobuf::Value >*
Struct::mutable_fields() {
  // @@protoc_insertion_point(field_mutable_map:google.protobuf.Struct.fields)
  return fields_.MutableMap();
}

// -------------------------------------------------------------------

// Value

// .google.protobuf.NullValue null_value = 1;
inline bool Value::has_null_value() const {
  return kind_case() == kNullValue;
}
inline void Value::set_has_null_value() {
  _oneof_case_[0] = kNullValue;
}
inline void Value::clear_null_value() {
  if (has_null_value()) {
    kind_.null_value_ = 0;
    clear_has_kind();
  }
}
inline ::google::protobuf::NullValue Value::null_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.null_value)
  if (has_null_value()) {
    return static_cast< ::google::protobuf::NullValue >(kind_.null_value_);
  }
  return static_cast< ::google::protobuf::NullValue >(0);
}
inline void Value::set_null_value(::google::protobuf::NullValue value) {
  if (!has_null_value()) {
    clear_kind();
    set_has_null_value();
  }
  kind_.null_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Value.null_value)
}

// double number_value = 2;
inline bool Value::has_number_value() const {
  return kind_case() == kNumberValue;
}
inline void Value::set_has_number_value() {
  _oneof_case_[0] = kNumberValue;
}
inline void Value::clear_number_value() {
  if (has_number_value()) {
    kind_.number_value_ = 0;
    clear_has_kind();
  }
}
inline double Value::number_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.number_value)
  if (has_number_value()) {
    return kind_.number_value_;
  }
  return 0;
}
inline void Value::set_number_value(double value) {
  if (!has_number_value()) {
    clear_kind();
    set_has_number_value();
  }
  kind_.number_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Value.number_value)
}

// string string_value = 3;
inline bool Value::has_string_value() const {
  return kind_case() == kStringValue;
}
inline void Value::set_has_string_value() {
  _oneof_case_[0] = kStringValue;
}
inline void Value::clear_string_value() {
  if (has_string_value()) {
    kind_.string_value_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        GetArenaNoVirtual());
    clear_has_kind();
  }
}
inline const ::std::string& Value::string_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.string_value)
  if (has_string_value()) {
    return kind_.string_value_.Get();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Value::set_string_value(const ::std::string& value) {
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.protobuf.Value.string_value)
}
#if LANG_CXX11
inline void Value::set_string_value(::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.Value.string_value)
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.protobuf.Value.string_value)
}
#endif
inline void Value::set_string_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.protobuf.Value.string_value)
}
inline void Value::set_string_value(const char* value,
                             size_t size) {
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.Set(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size),
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Value.string_value)
}
inline ::std::string* Value::mutable_string_value() {
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  return kind_.string_value_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_mutable:google.protobuf.Value.string_value)
}
inline ::std::string* Value::release_string_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Value.string_value)
  if (has_string_value()) {
    clear_has_kind();
    return kind_.string_value_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        GetArenaNoVirtual());
  } else {
    return NULL;
  }
}
inline void Value::set_allocated_string_value(::std::string* string_value) {
  if (!has_string_value()) {
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_kind();
  if (string_value != NULL) {
    set_has_string_value();
    kind_.string_value_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), string_value,
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Value.string_value)
}
inline ::std::string* Value::unsafe_arena_release_string_value() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.Value.string_value)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (has_string_value()) {
    clear_has_kind();
    return kind_.string_value_.UnsafeArenaRelease(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  } else {
    return NULL;
  }
}
inline void Value::unsafe_arena_set_allocated_string_value(::std::string* string_value) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (!has_string_value()) {
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_kind();
  if (string_value) {
    set_has_string_value();
    kind_.string_value_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), string_value, GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.Value.string_value)
}

// bool bool_value = 4;
inline bool Value::has_bool_value() const {
  return kind_case() == kBoolValue;
}
inline void Value::set_has_bool_value() {
  _oneof_case_[0] = kBoolValue;
}
inline void Value::clear_bool_value() {
  if (has_bool_value()) {
    kind_.bool_value_ = false;
    clear_has_kind();
  }
}
inline bool Value::bool_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.bool_value)
  if (has_bool_value()) {
    return kind_.bool_value_;
  }
  return false;
}
inline void Value::set_bool_value(bool value) {
  if (!has_bool_value()) {
    clear_kind();
    set_has_bool_value();
  }
  kind_.bool_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Value.bool_value)
}

// .google.protobuf.Struct struct_value = 5;
inline bool Value::has_struct_value() const {
  return kind_case() == kStructValue;
}
inline void Value::set_has_struct_value() {
  _oneof_case_[0] = kStructValue;
}
inline void Value::clear_struct_value() {
  if (has_struct_value()) {
    if (GetArenaNoVirtual() == NULL) {
      delete kind_.struct_value_;
    }
    clear_has_kind();
  }
}
inline ::google::protobuf::Struct* Value::release_struct_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Value.struct_value)
  if (has_struct_value()) {
    clear_has_kind();
      ::google::protobuf::Struct* temp = kind_.struct_value_;
    if (GetArenaNoVirtual() != NULL) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp, NULL);
    }
    kind_.struct_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::protobuf::Struct& Value::struct_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.struct_value)
  return has_struct_value()
      ? *kind_.struct_value_
      : *reinterpret_cast< ::google::protobuf::Struct*>(&::google::protobuf::_Struct_default_instance_);
}
inline ::google::protobuf::Struct* Value::unsafe_arena_release_struct_value() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.Value.struct_value)
  if (has_struct_value()) {
    clear_has_kind();
    ::google::protobuf::Struct* temp = kind_.struct_value_;
    kind_.struct_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Value::unsafe_arena_set_allocated_struct_value(::google::protobuf::Struct* struct_value) {
  clear_kind();
  if (struct_value) {
    set_has_struct_value();
    kind_.struct_value_ = struct_value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.Value.struct_value)
}
inline ::google::protobuf::Struct* Value::mutable_struct_value() {
  if (!has_struct_value()) {
    clear_kind();
    set_has_struct_value();
    kind_.struct_value_ = 
      ::google::protobuf::Arena::CreateMessage< ::google::protobuf::Struct >(
      GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Value.struct_value)
  return kind_.struct_value_;
}

// .google.protobuf.ListValue list_value = 6;
inline bool Value::has_list_value() const {
  return kind_case() == kListValue;
}
inline void Value::set_has_list_value() {
  _oneof_case_[0] = kListValue;
}
inline void Value::clear_list_value() {
  if (has_list_value()) {
    if (GetArenaNoVirtual() == NULL) {
      delete kind_.list_value_;
    }
    clear_has_kind();
  }
}
inline ::google::protobuf::ListValue* Value::release_list_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Value.list_value)
  if (has_list_value()) {
    clear_has_kind();
      ::google::protobuf::ListValue* temp = kind_.list_value_;
    if (GetArenaNoVirtual() != NULL) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp, NULL);
    }
    kind_.list_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::protobuf::ListValue& Value::list_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.list_value)
  return has_list_value()
      ? *kind_.list_value_
      : *reinterpret_cast< ::google::protobuf::ListValue*>(&::google::protobuf::_ListValue_default_instance_);
}
inline ::google::protobuf::ListValue* Value::unsafe_arena_release_list_value() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.Value.list_value)
  if (has_list_value()) {
    clear_has_kind();
    ::google::protobuf::ListValue* temp = kind_.list_value_;
    kind_.list_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Value::unsafe_arena_set_allocated_list_value(::google::protobuf::ListValue* list_value) {
  clear_kind();
  if (list_value) {
    set_has_list_value();
    kind_.list_value_ = list_value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.Value.list_value)
}
inline ::google::protobuf::ListValue* Value::mutable_list_value() {
  if (!has_list_value()) {
    clear_kind();
    set_has_list_value();
    kind_.list_value_ = 
      ::google::protobuf::Arena::CreateMessage< ::google::protobuf::ListValue >(
      GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Value.list_value)
  return kind_.list_value_;
}

inline bool Value::has_kind() const {
  return kind_case() != KIND_NOT_SET;
}
inline void Value::clear_has_kind() {
  _oneof_case_[0] = KIND_NOT_SET;
}
inline Value::KindCase Value::kind_case() const {
  return Value::KindCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// ListValue

// repeated .google.protobuf.Value values = 1;
inline int ListValue::values_size() const {
  return values_.size();
}
inline void ListValue::clear_values() {
  values_.Clear();
}
inline const ::google::protobuf::Value& ListValue::values(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.ListValue.values)
  return values_.Get(index);
}
inline ::google::protobuf::Value* ListValue::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.ListValue.values)
  return values_.Mutable(index);
}
inline ::google::protobuf::Value* ListValue::add_values() {
  // @@protoc_insertion_point(field_add:google.protobuf.ListValue.values)
  return values_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >*
ListValue::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.ListValue.values)
  return &values_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >&
ListValue::values() const {
  // @@protoc_insertion_point(field_list:google.protobuf.ListValue.values)
  return values_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::protobuf::NullValue> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::protobuf::NullValue>() {
  return ::google::protobuf::NullValue_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2fstruct_2eproto__INCLUDED
