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
#ifndef  GOOGLE_GMAIL_API_LABEL_COLOR_H_
#define  GOOGLE_GMAIL_API_LABEL_COLOR_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_gmail_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class LabelColor : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LabelColor* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LabelColor(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LabelColor(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LabelColor();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_gmail_api::LabelColor</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_gmail_api::LabelColor");
  }

  /**
   * Determine if the '<code>backgroundColor</code>' attribute was set.
   *
   * @return true if the '<code>backgroundColor</code>' attribute was set.
   */
  bool has_background_color() const {
    return Storage().isMember("backgroundColor");
  }

  /**
   * Clears the '<code>backgroundColor</code>' attribute.
   */
  void clear_background_color() {
    MutableStorage()->removeMember("backgroundColor");
  }


  /**
   * Get the value of the '<code>backgroundColor</code>' attribute.
   */
  const StringPiece get_background_color() const {
    const Json::Value& v = Storage("backgroundColor");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>backgroundColor</code>' attribute.
   *
   * The background color represented as hex string #RRGGBB (ex #000000). This
   * field is required in order to set the color of a label. Only the following
   * predefined set of color values are allowed:
   * #000000, #434343, #666666, #999999, #cccccc, #efefef, #f3f3f3, #ffffff,
   * #fb4c2f, #ffad47, #fad165, #16a766, #43d692, #4a86e8, #a479e2, #f691b3,
   * #f6c5be, #ffe6c7, #fef1d1, #b9e4d0, #c6f3de, #c9daf8, #e4d7f5, #fcdee8,
   * #efa093, #ffd6a2, #fce8b3, #89d3b2, #a0eac9, #a4c2f4, #d0bcf1, #fbc8d9,
   * #e66550, #ffbc6b, #fcda83, #44b984, #68dfa9, #6d9eeb, #b694e8, #f7a7c0,
   * #cc3a21, #eaa041, #f2c960, #149e60, #3dc789, #3c78d8, #8e63ce, #e07798,
   * #ac2b16, #cf8933, #d5ae49, #0b804b, #2a9c68, #285bac, #653e9b, #b65775,
   * #822111, #a46a21, #aa8831, #076239, #1a764d, #1c4587, #41236d, #83334c.
   *
   * @param[in] value The new value.
   */
  void set_background_color(const StringPiece& value) {
    *MutableStorage("backgroundColor") = value.data();
  }

  /**
   * Determine if the '<code>textColor</code>' attribute was set.
   *
   * @return true if the '<code>textColor</code>' attribute was set.
   */
  bool has_text_color() const {
    return Storage().isMember("textColor");
  }

  /**
   * Clears the '<code>textColor</code>' attribute.
   */
  void clear_text_color() {
    MutableStorage()->removeMember("textColor");
  }


  /**
   * Get the value of the '<code>textColor</code>' attribute.
   */
  const StringPiece get_text_color() const {
    const Json::Value& v = Storage("textColor");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>textColor</code>' attribute.
   *
   * The text color of the label, represented as hex string. This field is
   * required in order to set the color of a label. Only the following
   * predefined set of color values are allowed:
   * #000000, #434343, #666666, #999999, #cccccc, #efefef, #f3f3f3, #ffffff,
   * #fb4c2f, #ffad47, #fad165, #16a766, #43d692, #4a86e8, #a479e2, #f691b3,
   * #f6c5be, #ffe6c7, #fef1d1, #b9e4d0, #c6f3de, #c9daf8, #e4d7f5, #fcdee8,
   * #efa093, #ffd6a2, #fce8b3, #89d3b2, #a0eac9, #a4c2f4, #d0bcf1, #fbc8d9,
   * #e66550, #ffbc6b, #fcda83, #44b984, #68dfa9, #6d9eeb, #b694e8, #f7a7c0,
   * #cc3a21, #eaa041, #f2c960, #149e60, #3dc789, #3c78d8, #8e63ce, #e07798,
   * #ac2b16, #cf8933, #d5ae49, #0b804b, #2a9c68, #285bac, #653e9b, #b65775,
   * #822111, #a46a21, #aa8831, #076239, #1a764d, #1c4587, #41236d, #83334c.
   *
   * @param[in] value The new value.
   */
  void set_text_color(const StringPiece& value) {
    *MutableStorage("textColor") = value.data();
  }

 private:
  void operator=(const LabelColor&);
};  // LabelColor
}  // namespace google_gmail_api
#endif  // GOOGLE_GMAIL_API_LABEL_COLOR_H_
