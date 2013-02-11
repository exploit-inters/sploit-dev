// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MFNNetworkRPC.proto

#ifndef PROTOBUF_MFNNetworkRPC_2eproto__INCLUDED
#define PROTOBUF_MFNNetworkRPC_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MFNNetworkRPC_2eproto();
void protobuf_AssignDesc_MFNNetworkRPC_2eproto();
void protobuf_ShutdownFile_MFNNetworkRPC_2eproto();

class MFNRPCRequest;
class MFNRPCResponse;

// ===================================================================

class MFNRPCRequest : public ::google::protobuf::Message {
 public:
  MFNRPCRequest();
  virtual ~MFNRPCRequest();
  
  MFNRPCRequest(const MFNRPCRequest& from);
  
  inline MFNRPCRequest& operator=(const MFNRPCRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const MFNRPCRequest& default_instance();
  
  void Swap(MFNRPCRequest* other);
  
  // implements Message ----------------------------------------------
  
  MFNRPCRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MFNRPCRequest& from);
  void MergeFrom(const MFNRPCRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional uint32 request_id = 1;
  inline bool has_request_id() const;
  inline void clear_request_id();
  static const int kRequestIdFieldNumber = 1;
  inline ::google::protobuf::uint32 request_id() const;
  inline void set_request_id(::google::protobuf::uint32 value);
  
  // optional bytes found_password_value = 2;
  inline bool has_found_password_value() const;
  inline void clear_found_password_value();
  static const int kFoundPasswordValueFieldNumber = 2;
  inline const ::std::string& found_password_value() const;
  inline void set_found_password_value(const ::std::string& value);
  inline void set_found_password_value(const char* value);
  inline void set_found_password_value(const void* value, size_t size);
  inline ::std::string* mutable_found_password_value();
  inline ::std::string* release_found_password_value();
  
  // optional bytes found_password_hash = 3;
  inline bool has_found_password_hash() const;
  inline void clear_found_password_hash();
  static const int kFoundPasswordHashFieldNumber = 3;
  inline const ::std::string& found_password_hash() const;
  inline void set_found_password_hash(const ::std::string& value);
  inline void set_found_password_hash(const char* value);
  inline void set_found_password_hash(const void* value, size_t size);
  inline ::std::string* mutable_found_password_hash();
  inline ::std::string* release_found_password_hash();
  
  // optional uint64 system_cracking_rate = 4;
  inline bool has_system_cracking_rate() const;
  inline void clear_system_cracking_rate();
  static const int kSystemCrackingRateFieldNumber = 4;
  inline ::google::protobuf::uint64 system_cracking_rate() const;
  inline void set_system_cracking_rate(::google::protobuf::uint64 value);
  
  // optional uint32 number_workunits_requested = 5;
  inline bool has_number_workunits_requested() const;
  inline void clear_number_workunits_requested();
  static const int kNumberWorkunitsRequestedFieldNumber = 5;
  inline ::google::protobuf::uint32 number_workunits_requested() const;
  inline void set_number_workunits_requested(::google::protobuf::uint32 value);
  
  // optional uint64 submitted_workunit_id = 6;
  inline bool has_submitted_workunit_id() const;
  inline void clear_submitted_workunit_id();
  static const int kSubmittedWorkunitIdFieldNumber = 6;
  inline ::google::protobuf::uint64 submitted_workunit_id() const;
  inline void set_submitted_workunit_id(::google::protobuf::uint64 value);
  
  // optional bytes additional_data = 7;
  inline bool has_additional_data() const;
  inline void clear_additional_data();
  static const int kAdditionalDataFieldNumber = 7;
  inline const ::std::string& additional_data() const;
  inline void set_additional_data(const ::std::string& value);
  inline void set_additional_data(const char* value);
  inline void set_additional_data(const void* value, size_t size);
  inline ::std::string* mutable_additional_data();
  inline ::std::string* release_additional_data();
  
  // optional uint32 password_length = 8;
  inline bool has_password_length() const;
  inline void clear_password_length();
  static const int kPasswordLengthFieldNumber = 8;
  inline ::google::protobuf::uint32 password_length() const;
  inline void set_password_length(::google::protobuf::uint32 value);
  
  // optional uint32 algorithm_type = 9;
  inline bool has_algorithm_type() const;
  inline void clear_algorithm_type();
  static const int kAlgorithmTypeFieldNumber = 9;
  inline ::google::protobuf::uint32 algorithm_type() const;
  inline void set_algorithm_type(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:MFNRPCRequest)
 private:
  inline void set_has_request_id();
  inline void clear_has_request_id();
  inline void set_has_found_password_value();
  inline void clear_has_found_password_value();
  inline void set_has_found_password_hash();
  inline void clear_has_found_password_hash();
  inline void set_has_system_cracking_rate();
  inline void clear_has_system_cracking_rate();
  inline void set_has_number_workunits_requested();
  inline void clear_has_number_workunits_requested();
  inline void set_has_submitted_workunit_id();
  inline void clear_has_submitted_workunit_id();
  inline void set_has_additional_data();
  inline void clear_has_additional_data();
  inline void set_has_password_length();
  inline void clear_has_password_length();
  inline void set_has_algorithm_type();
  inline void clear_has_algorithm_type();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* found_password_value_;
  ::std::string* found_password_hash_;
  ::google::protobuf::uint32 request_id_;
  ::google::protobuf::uint32 number_workunits_requested_;
  ::google::protobuf::uint64 system_cracking_rate_;
  ::google::protobuf::uint64 submitted_workunit_id_;
  ::std::string* additional_data_;
  ::google::protobuf::uint32 password_length_;
  ::google::protobuf::uint32 algorithm_type_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];
  
  friend void  protobuf_AddDesc_MFNNetworkRPC_2eproto();
  friend void protobuf_AssignDesc_MFNNetworkRPC_2eproto();
  friend void protobuf_ShutdownFile_MFNNetworkRPC_2eproto();
  
  void InitAsDefaultInstance();
  static MFNRPCRequest* default_instance_;
};
// -------------------------------------------------------------------

class MFNRPCResponse : public ::google::protobuf::Message {
 public:
  MFNRPCResponse();
  virtual ~MFNRPCResponse();
  
  MFNRPCResponse(const MFNRPCResponse& from);
  
  inline MFNRPCResponse& operator=(const MFNRPCResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const MFNRPCResponse& default_instance();
  
  void Swap(MFNRPCResponse* other);
  
  // implements Message ----------------------------------------------
  
  MFNRPCResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MFNRPCResponse& from);
  void MergeFrom(const MFNRPCResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional uint32 response_type_id = 1;
  inline bool has_response_type_id() const;
  inline void clear_response_type_id();
  static const int kResponseTypeIdFieldNumber = 1;
  inline ::google::protobuf::uint32 response_type_id() const;
  inline void set_response_type_id(::google::protobuf::uint32 value);
  
  // optional uint32 system_version_id = 2;
  inline bool has_system_version_id() const;
  inline void clear_system_version_id();
  static const int kSystemVersionIdFieldNumber = 2;
  inline ::google::protobuf::uint32 system_version_id() const;
  inline void set_system_version_id(::google::protobuf::uint32 value);
  
  // optional uint32 hash_type_id = 3;
  inline bool has_hash_type_id() const;
  inline void clear_hash_type_id();
  static const int kHashTypeIdFieldNumber = 3;
  inline ::google::protobuf::uint32 hash_type_id() const;
  inline void set_hash_type_id(::google::protobuf::uint32 value);
  
  // optional uint32 hash_file_id = 4;
  inline bool has_hash_file_id() const;
  inline void clear_hash_file_id();
  static const int kHashFileIdFieldNumber = 4;
  inline ::google::protobuf::uint32 hash_file_id() const;
  inline void set_hash_file_id(::google::protobuf::uint32 value);
  
  // optional uint32 charset_id = 5;
  inline bool has_charset_id() const;
  inline void clear_charset_id();
  static const int kCharsetIdFieldNumber = 5;
  inline ::google::protobuf::uint32 charset_id() const;
  inline void set_charset_id(::google::protobuf::uint32 value);
  
  // optional uint32 password_length = 6;
  inline bool has_password_length() const;
  inline void clear_password_length();
  static const int kPasswordLengthFieldNumber = 6;
  inline ::google::protobuf::uint32 password_length() const;
  inline void set_password_length(::google::protobuf::uint32 value);
  
  // optional bytes additional_data = 7;
  inline bool has_additional_data() const;
  inline void clear_additional_data();
  static const int kAdditionalDataFieldNumber = 7;
  inline const ::std::string& additional_data() const;
  inline void set_additional_data(const ::std::string& value);
  inline void set_additional_data(const char* value);
  inline void set_additional_data(const void* value, size_t size);
  inline ::std::string* mutable_additional_data();
  inline ::std::string* release_additional_data();
  
  // @@protoc_insertion_point(class_scope:MFNRPCResponse)
 private:
  inline void set_has_response_type_id();
  inline void clear_has_response_type_id();
  inline void set_has_system_version_id();
  inline void clear_has_system_version_id();
  inline void set_has_hash_type_id();
  inline void clear_has_hash_type_id();
  inline void set_has_hash_file_id();
  inline void clear_has_hash_file_id();
  inline void set_has_charset_id();
  inline void clear_has_charset_id();
  inline void set_has_password_length();
  inline void clear_has_password_length();
  inline void set_has_additional_data();
  inline void clear_has_additional_data();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint32 response_type_id_;
  ::google::protobuf::uint32 system_version_id_;
  ::google::protobuf::uint32 hash_type_id_;
  ::google::protobuf::uint32 hash_file_id_;
  ::google::protobuf::uint32 charset_id_;
  ::google::protobuf::uint32 password_length_;
  ::std::string* additional_data_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
  friend void  protobuf_AddDesc_MFNNetworkRPC_2eproto();
  friend void protobuf_AssignDesc_MFNNetworkRPC_2eproto();
  friend void protobuf_ShutdownFile_MFNNetworkRPC_2eproto();
  
  void InitAsDefaultInstance();
  static MFNRPCResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// MFNRPCRequest

// optional uint32 request_id = 1;
inline bool MFNRPCRequest::has_request_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MFNRPCRequest::set_has_request_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MFNRPCRequest::clear_has_request_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MFNRPCRequest::clear_request_id() {
  request_id_ = 0u;
  clear_has_request_id();
}
inline ::google::protobuf::uint32 MFNRPCRequest::request_id() const {
  return request_id_;
}
inline void MFNRPCRequest::set_request_id(::google::protobuf::uint32 value) {
  set_has_request_id();
  request_id_ = value;
}

// optional bytes found_password_value = 2;
inline bool MFNRPCRequest::has_found_password_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MFNRPCRequest::set_has_found_password_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MFNRPCRequest::clear_has_found_password_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MFNRPCRequest::clear_found_password_value() {
  if (found_password_value_ != &::google::protobuf::internal::kEmptyString) {
    found_password_value_->clear();
  }
  clear_has_found_password_value();
}
inline const ::std::string& MFNRPCRequest::found_password_value() const {
  return *found_password_value_;
}
inline void MFNRPCRequest::set_found_password_value(const ::std::string& value) {
  set_has_found_password_value();
  if (found_password_value_ == &::google::protobuf::internal::kEmptyString) {
    found_password_value_ = new ::std::string;
  }
  found_password_value_->assign(value);
}
inline void MFNRPCRequest::set_found_password_value(const char* value) {
  set_has_found_password_value();
  if (found_password_value_ == &::google::protobuf::internal::kEmptyString) {
    found_password_value_ = new ::std::string;
  }
  found_password_value_->assign(value);
}
inline void MFNRPCRequest::set_found_password_value(const void* value, size_t size) {
  set_has_found_password_value();
  if (found_password_value_ == &::google::protobuf::internal::kEmptyString) {
    found_password_value_ = new ::std::string;
  }
  found_password_value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MFNRPCRequest::mutable_found_password_value() {
  set_has_found_password_value();
  if (found_password_value_ == &::google::protobuf::internal::kEmptyString) {
    found_password_value_ = new ::std::string;
  }
  return found_password_value_;
}
inline ::std::string* MFNRPCRequest::release_found_password_value() {
  clear_has_found_password_value();
  if (found_password_value_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = found_password_value_;
    found_password_value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional bytes found_password_hash = 3;
inline bool MFNRPCRequest::has_found_password_hash() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MFNRPCRequest::set_has_found_password_hash() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MFNRPCRequest::clear_has_found_password_hash() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MFNRPCRequest::clear_found_password_hash() {
  if (found_password_hash_ != &::google::protobuf::internal::kEmptyString) {
    found_password_hash_->clear();
  }
  clear_has_found_password_hash();
}
inline const ::std::string& MFNRPCRequest::found_password_hash() const {
  return *found_password_hash_;
}
inline void MFNRPCRequest::set_found_password_hash(const ::std::string& value) {
  set_has_found_password_hash();
  if (found_password_hash_ == &::google::protobuf::internal::kEmptyString) {
    found_password_hash_ = new ::std::string;
  }
  found_password_hash_->assign(value);
}
inline void MFNRPCRequest::set_found_password_hash(const char* value) {
  set_has_found_password_hash();
  if (found_password_hash_ == &::google::protobuf::internal::kEmptyString) {
    found_password_hash_ = new ::std::string;
  }
  found_password_hash_->assign(value);
}
inline void MFNRPCRequest::set_found_password_hash(const void* value, size_t size) {
  set_has_found_password_hash();
  if (found_password_hash_ == &::google::protobuf::internal::kEmptyString) {
    found_password_hash_ = new ::std::string;
  }
  found_password_hash_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MFNRPCRequest::mutable_found_password_hash() {
  set_has_found_password_hash();
  if (found_password_hash_ == &::google::protobuf::internal::kEmptyString) {
    found_password_hash_ = new ::std::string;
  }
  return found_password_hash_;
}
inline ::std::string* MFNRPCRequest::release_found_password_hash() {
  clear_has_found_password_hash();
  if (found_password_hash_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = found_password_hash_;
    found_password_hash_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional uint64 system_cracking_rate = 4;
inline bool MFNRPCRequest::has_system_cracking_rate() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MFNRPCRequest::set_has_system_cracking_rate() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MFNRPCRequest::clear_has_system_cracking_rate() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MFNRPCRequest::clear_system_cracking_rate() {
  system_cracking_rate_ = GOOGLE_ULONGLONG(0);
  clear_has_system_cracking_rate();
}
inline ::google::protobuf::uint64 MFNRPCRequest::system_cracking_rate() const {
  return system_cracking_rate_;
}
inline void MFNRPCRequest::set_system_cracking_rate(::google::protobuf::uint64 value) {
  set_has_system_cracking_rate();
  system_cracking_rate_ = value;
}

// optional uint32 number_workunits_requested = 5;
inline bool MFNRPCRequest::has_number_workunits_requested() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MFNRPCRequest::set_has_number_workunits_requested() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MFNRPCRequest::clear_has_number_workunits_requested() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MFNRPCRequest::clear_number_workunits_requested() {
  number_workunits_requested_ = 0u;
  clear_has_number_workunits_requested();
}
inline ::google::protobuf::uint32 MFNRPCRequest::number_workunits_requested() const {
  return number_workunits_requested_;
}
inline void MFNRPCRequest::set_number_workunits_requested(::google::protobuf::uint32 value) {
  set_has_number_workunits_requested();
  number_workunits_requested_ = value;
}

// optional uint64 submitted_workunit_id = 6;
inline bool MFNRPCRequest::has_submitted_workunit_id() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void MFNRPCRequest::set_has_submitted_workunit_id() {
  _has_bits_[0] |= 0x00000020u;
}
inline void MFNRPCRequest::clear_has_submitted_workunit_id() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void MFNRPCRequest::clear_submitted_workunit_id() {
  submitted_workunit_id_ = GOOGLE_ULONGLONG(0);
  clear_has_submitted_workunit_id();
}
inline ::google::protobuf::uint64 MFNRPCRequest::submitted_workunit_id() const {
  return submitted_workunit_id_;
}
inline void MFNRPCRequest::set_submitted_workunit_id(::google::protobuf::uint64 value) {
  set_has_submitted_workunit_id();
  submitted_workunit_id_ = value;
}

// optional bytes additional_data = 7;
inline bool MFNRPCRequest::has_additional_data() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void MFNRPCRequest::set_has_additional_data() {
  _has_bits_[0] |= 0x00000040u;
}
inline void MFNRPCRequest::clear_has_additional_data() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void MFNRPCRequest::clear_additional_data() {
  if (additional_data_ != &::google::protobuf::internal::kEmptyString) {
    additional_data_->clear();
  }
  clear_has_additional_data();
}
inline const ::std::string& MFNRPCRequest::additional_data() const {
  return *additional_data_;
}
inline void MFNRPCRequest::set_additional_data(const ::std::string& value) {
  set_has_additional_data();
  if (additional_data_ == &::google::protobuf::internal::kEmptyString) {
    additional_data_ = new ::std::string;
  }
  additional_data_->assign(value);
}
inline void MFNRPCRequest::set_additional_data(const char* value) {
  set_has_additional_data();
  if (additional_data_ == &::google::protobuf::internal::kEmptyString) {
    additional_data_ = new ::std::string;
  }
  additional_data_->assign(value);
}
inline void MFNRPCRequest::set_additional_data(const void* value, size_t size) {
  set_has_additional_data();
  if (additional_data_ == &::google::protobuf::internal::kEmptyString) {
    additional_data_ = new ::std::string;
  }
  additional_data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MFNRPCRequest::mutable_additional_data() {
  set_has_additional_data();
  if (additional_data_ == &::google::protobuf::internal::kEmptyString) {
    additional_data_ = new ::std::string;
  }
  return additional_data_;
}
inline ::std::string* MFNRPCRequest::release_additional_data() {
  clear_has_additional_data();
  if (additional_data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = additional_data_;
    additional_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional uint32 password_length = 8;
inline bool MFNRPCRequest::has_password_length() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void MFNRPCRequest::set_has_password_length() {
  _has_bits_[0] |= 0x00000080u;
}
inline void MFNRPCRequest::clear_has_password_length() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void MFNRPCRequest::clear_password_length() {
  password_length_ = 0u;
  clear_has_password_length();
}
inline ::google::protobuf::uint32 MFNRPCRequest::password_length() const {
  return password_length_;
}
inline void MFNRPCRequest::set_password_length(::google::protobuf::uint32 value) {
  set_has_password_length();
  password_length_ = value;
}

// optional uint32 algorithm_type = 9;
inline bool MFNRPCRequest::has_algorithm_type() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void MFNRPCRequest::set_has_algorithm_type() {
  _has_bits_[0] |= 0x00000100u;
}
inline void MFNRPCRequest::clear_has_algorithm_type() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void MFNRPCRequest::clear_algorithm_type() {
  algorithm_type_ = 0u;
  clear_has_algorithm_type();
}
inline ::google::protobuf::uint32 MFNRPCRequest::algorithm_type() const {
  return algorithm_type_;
}
inline void MFNRPCRequest::set_algorithm_type(::google::protobuf::uint32 value) {
  set_has_algorithm_type();
  algorithm_type_ = value;
}

// -------------------------------------------------------------------

// MFNRPCResponse

// optional uint32 response_type_id = 1;
inline bool MFNRPCResponse::has_response_type_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MFNRPCResponse::set_has_response_type_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MFNRPCResponse::clear_has_response_type_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MFNRPCResponse::clear_response_type_id() {
  response_type_id_ = 0u;
  clear_has_response_type_id();
}
inline ::google::protobuf::uint32 MFNRPCResponse::response_type_id() const {
  return response_type_id_;
}
inline void MFNRPCResponse::set_response_type_id(::google::protobuf::uint32 value) {
  set_has_response_type_id();
  response_type_id_ = value;
}

// optional uint32 system_version_id = 2;
inline bool MFNRPCResponse::has_system_version_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MFNRPCResponse::set_has_system_version_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MFNRPCResponse::clear_has_system_version_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MFNRPCResponse::clear_system_version_id() {
  system_version_id_ = 0u;
  clear_has_system_version_id();
}
inline ::google::protobuf::uint32 MFNRPCResponse::system_version_id() const {
  return system_version_id_;
}
inline void MFNRPCResponse::set_system_version_id(::google::protobuf::uint32 value) {
  set_has_system_version_id();
  system_version_id_ = value;
}

// optional uint32 hash_type_id = 3;
inline bool MFNRPCResponse::has_hash_type_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MFNRPCResponse::set_has_hash_type_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MFNRPCResponse::clear_has_hash_type_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MFNRPCResponse::clear_hash_type_id() {
  hash_type_id_ = 0u;
  clear_has_hash_type_id();
}
inline ::google::protobuf::uint32 MFNRPCResponse::hash_type_id() const {
  return hash_type_id_;
}
inline void MFNRPCResponse::set_hash_type_id(::google::protobuf::uint32 value) {
  set_has_hash_type_id();
  hash_type_id_ = value;
}

// optional uint32 hash_file_id = 4;
inline bool MFNRPCResponse::has_hash_file_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MFNRPCResponse::set_has_hash_file_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MFNRPCResponse::clear_has_hash_file_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MFNRPCResponse::clear_hash_file_id() {
  hash_file_id_ = 0u;
  clear_has_hash_file_id();
}
inline ::google::protobuf::uint32 MFNRPCResponse::hash_file_id() const {
  return hash_file_id_;
}
inline void MFNRPCResponse::set_hash_file_id(::google::protobuf::uint32 value) {
  set_has_hash_file_id();
  hash_file_id_ = value;
}

// optional uint32 charset_id = 5;
inline bool MFNRPCResponse::has_charset_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MFNRPCResponse::set_has_charset_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MFNRPCResponse::clear_has_charset_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MFNRPCResponse::clear_charset_id() {
  charset_id_ = 0u;
  clear_has_charset_id();
}
inline ::google::protobuf::uint32 MFNRPCResponse::charset_id() const {
  return charset_id_;
}
inline void MFNRPCResponse::set_charset_id(::google::protobuf::uint32 value) {
  set_has_charset_id();
  charset_id_ = value;
}

// optional uint32 password_length = 6;
inline bool MFNRPCResponse::has_password_length() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void MFNRPCResponse::set_has_password_length() {
  _has_bits_[0] |= 0x00000020u;
}
inline void MFNRPCResponse::clear_has_password_length() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void MFNRPCResponse::clear_password_length() {
  password_length_ = 0u;
  clear_has_password_length();
}
inline ::google::protobuf::uint32 MFNRPCResponse::password_length() const {
  return password_length_;
}
inline void MFNRPCResponse::set_password_length(::google::protobuf::uint32 value) {
  set_has_password_length();
  password_length_ = value;
}

// optional bytes additional_data = 7;
inline bool MFNRPCResponse::has_additional_data() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void MFNRPCResponse::set_has_additional_data() {
  _has_bits_[0] |= 0x00000040u;
}
inline void MFNRPCResponse::clear_has_additional_data() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void MFNRPCResponse::clear_additional_data() {
  if (additional_data_ != &::google::protobuf::internal::kEmptyString) {
    additional_data_->clear();
  }
  clear_has_additional_data();
}
inline const ::std::string& MFNRPCResponse::additional_data() const {
  return *additional_data_;
}
inline void MFNRPCResponse::set_additional_data(const ::std::string& value) {
  set_has_additional_data();
  if (additional_data_ == &::google::protobuf::internal::kEmptyString) {
    additional_data_ = new ::std::string;
  }
  additional_data_->assign(value);
}
inline void MFNRPCResponse::set_additional_data(const char* value) {
  set_has_additional_data();
  if (additional_data_ == &::google::protobuf::internal::kEmptyString) {
    additional_data_ = new ::std::string;
  }
  additional_data_->assign(value);
}
inline void MFNRPCResponse::set_additional_data(const void* value, size_t size) {
  set_has_additional_data();
  if (additional_data_ == &::google::protobuf::internal::kEmptyString) {
    additional_data_ = new ::std::string;
  }
  additional_data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MFNRPCResponse::mutable_additional_data() {
  set_has_additional_data();
  if (additional_data_ == &::google::protobuf::internal::kEmptyString) {
    additional_data_ = new ::std::string;
  }
  return additional_data_;
}
inline ::std::string* MFNRPCResponse::release_additional_data() {
  clear_has_additional_data();
  if (additional_data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = additional_data_;
    additional_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MFNNetworkRPC_2eproto__INCLUDED