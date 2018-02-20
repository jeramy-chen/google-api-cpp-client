// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   Build date: 2017-11-07 19:12:12 UTC
//   on: 2018-02-09, 01:39:09 UTC
//   C++ generator version: 0.1.4

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Gmail API (gmail/v1)
// Generated from:
//   Version: v1
//   Revision: 81
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_GMAIL_API_MESSAGE_H_
#define  GOOGLE_GMAIL_API_MESSAGE_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/gmail_api/message_part.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_gmail_api {
using namespace googleapis;

/**
 * An email message.
 *
 * @ingroup DataObject
 */
class Message : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Message* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Message(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Message(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Message();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_gmail_api::Message</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_gmail_api::Message");
  }

  /**
   * Determine if the '<code>historyId</code>' attribute was set.
   *
   * @return true if the '<code>historyId</code>' attribute was set.
   */
  bool has_history_id() const {
    return Storage().isMember("historyId");
  }

  /**
   * Clears the '<code>historyId</code>' attribute.
   */
  void clear_history_id() {
    MutableStorage()->removeMember("historyId");
  }


  /**
   * Get the value of the '<code>historyId</code>' attribute.
   */
  uint64 get_history_id() const {
    const Json::Value& storage = Storage("historyId");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>historyId</code>' attribute.
   *
   * The ID of the last history record that modified this message.
   *
   * @param[in] value The new value.
   */
  void set_history_id(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("historyId"));
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The immutable ID of the message.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>internalDate</code>' attribute was set.
   *
   * @return true if the '<code>internalDate</code>' attribute was set.
   */
  bool has_internal_date() const {
    return Storage().isMember("internalDate");
  }

  /**
   * Clears the '<code>internalDate</code>' attribute.
   */
  void clear_internal_date() {
    MutableStorage()->removeMember("internalDate");
  }


  /**
   * Get the value of the '<code>internalDate</code>' attribute.
   */
  int64 get_internal_date() const {
    const Json::Value& storage = Storage("internalDate");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>internalDate</code>' attribute.
   *
   * The internal message creation timestamp (epoch ms), which determines
   * ordering in the inbox. For normal SMTP-received email, this represents the
   * time the message was originally accepted by Google, which is more reliable
   * than the Date header. However, for API-migrated mail, it can be configured
   * by client to be based on the Date header.
   *
   * @param[in] value The new value.
   */
  void set_internal_date(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("internalDate"));
  }

  /**
   * Determine if the '<code>labelIds</code>' attribute was set.
   *
   * @return true if the '<code>labelIds</code>' attribute was set.
   */
  bool has_label_ids() const {
    return Storage().isMember("labelIds");
  }

  /**
   * Clears the '<code>labelIds</code>' attribute.
   */
  void clear_label_ids() {
    MutableStorage()->removeMember("labelIds");
  }


  /**
   * Get a reference to the value of the '<code>labelIds</code>' attribute.
   */
  const client::JsonCppArray<string > get_label_ids() const {
     const Json::Value& storage = Storage("labelIds");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>labelIds</code>'
   * property.
   *
   * List of IDs of labels applied to this message.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_labelIds() {
    Json::Value* storage = MutableStorage("labelIds");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>payload</code>' attribute was set.
   *
   * @return true if the '<code>payload</code>' attribute was set.
   */
  bool has_payload() const {
    return Storage().isMember("payload");
  }

  /**
   * Clears the '<code>payload</code>' attribute.
   */
  void clear_payload() {
    MutableStorage()->removeMember("payload");
  }


  /**
   * Get a reference to the value of the '<code>payload</code>' attribute.
   */
  const MessagePart get_payload() const;

  /**
   * Gets a reference to a mutable value of the '<code>payload</code>' property.
   *
   * The parsed email structure in the message parts.
   *
   * @return The result can be modified to change the attribute value.
   */
  MessagePart mutable_payload();

  /**
   * Determine if the '<code>raw</code>' attribute was set.
   *
   * @return true if the '<code>raw</code>' attribute was set.
   */
  bool has_raw() const {
    return Storage().isMember("raw");
  }

  /**
   * Clears the '<code>raw</code>' attribute.
   */
  void clear_raw() {
    MutableStorage()->removeMember("raw");
  }


  /**
   * Get the value of the '<code>raw</code>' attribute.
   */
  const StringPiece get_raw() const {
    const Json::Value& v = Storage("raw");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>raw</code>' attribute.
   *
   * The entire email message in an RFC 2822 formatted and base64url encoded
   * string. Returned in messages.get and drafts.get responses when the
   * format=RAW parameter is supplied.
   *
   * @param[in] value The new value.
   */
  void set_raw(const StringPiece& value) {
    *MutableStorage("raw") = value.data();
  }

  /**
   * Determine if the '<code>sizeEstimate</code>' attribute was set.
   *
   * @return true if the '<code>sizeEstimate</code>' attribute was set.
   */
  bool has_size_estimate() const {
    return Storage().isMember("sizeEstimate");
  }

  /**
   * Clears the '<code>sizeEstimate</code>' attribute.
   */
  void clear_size_estimate() {
    MutableStorage()->removeMember("sizeEstimate");
  }


  /**
   * Get the value of the '<code>sizeEstimate</code>' attribute.
   */
  int32 get_size_estimate() const {
    const Json::Value& storage = Storage("sizeEstimate");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>sizeEstimate</code>' attribute.
   *
   * Estimated size in bytes of the message.
   *
   * @param[in] value The new value.
   */
  void set_size_estimate(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("sizeEstimate"));
  }

  /**
   * Determine if the '<code>snippet</code>' attribute was set.
   *
   * @return true if the '<code>snippet</code>' attribute was set.
   */
  bool has_snippet() const {
    return Storage().isMember("snippet");
  }

  /**
   * Clears the '<code>snippet</code>' attribute.
   */
  void clear_snippet() {
    MutableStorage()->removeMember("snippet");
  }


  /**
   * Get the value of the '<code>snippet</code>' attribute.
   */
  const StringPiece get_snippet() const {
    const Json::Value& v = Storage("snippet");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>snippet</code>' attribute.
   *
   * A short part of the message text.
   *
   * @param[in] value The new value.
   */
  void set_snippet(const StringPiece& value) {
    *MutableStorage("snippet") = value.data();
  }

  /**
   * Determine if the '<code>threadId</code>' attribute was set.
   *
   * @return true if the '<code>threadId</code>' attribute was set.
   */
  bool has_thread_id() const {
    return Storage().isMember("threadId");
  }

  /**
   * Clears the '<code>threadId</code>' attribute.
   */
  void clear_thread_id() {
    MutableStorage()->removeMember("threadId");
  }


  /**
   * Get the value of the '<code>threadId</code>' attribute.
   */
  const StringPiece get_thread_id() const {
    const Json::Value& v = Storage("threadId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>threadId</code>' attribute.
   *
   * The ID of the thread the message belongs to. To add a message or draft to a
   * thread, the following criteria must be met:
   * - The requested threadId must be specified on the Message or Draft.Message
   * you supply with your request.
   * - The References and In-Reply-To headers must be set in compliance with the
   * RFC 2822 standard.
   * - The Subject headers must match.
   *
   * @param[in] value The new value.
   */
  void set_thread_id(const StringPiece& value) {
    *MutableStorage("threadId") = value.data();
  }

 private:
  void operator=(const Message&);
};  // Message
}  // namespace google_gmail_api
#endif  // GOOGLE_GMAIL_API_MESSAGE_H_
