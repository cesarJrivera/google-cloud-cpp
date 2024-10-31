// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/texttospeech/v1/cloud_tts.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_V1_TEXT_TO_SPEECH_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_V1_TEXT_TO_SPEECH_CLIENT_H

#include "google/cloud/texttospeech/v1/text_to_speech_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace texttospeech_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service that implements Google Cloud Text-to-Speech API.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class TextToSpeechClient {
 public:
  explicit TextToSpeechClient(
      std::shared_ptr<TextToSpeechConnection> connection, Options opts = {});
  ~TextToSpeechClient();

  ///@{
  /// @name Copy and move support
  TextToSpeechClient(TextToSpeechClient const&) = default;
  TextToSpeechClient& operator=(TextToSpeechClient const&) = default;
  TextToSpeechClient(TextToSpeechClient&&) = default;
  TextToSpeechClient& operator=(TextToSpeechClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TextToSpeechClient const& a,
                         TextToSpeechClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TextToSpeechClient const& a,
                         TextToSpeechClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns a list of Voice supported for synthesis.
  ///
  /// @param language_code  Optional. Recommended.
  ///  [BCP-47](https://www.rfc-editor.org/rfc/bcp/bcp47.txt) language tag.
  ///  If not specified, the API will return all supported voices.
  ///  If specified, the ListVoices call will only return voices that can be used
  ///  to synthesize this language_code. For example, if you specify `"en-NZ"`,
  ///  all `"en-NZ"` voices will be returned. If you specify `"no"`, both
  ///  `"no-\*"` (Norwegian) and `"nb-\*"` (Norwegian Bokmal) voices will be
  ///  returned.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.texttospeech.v1.ListVoicesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.texttospeech.v1.ListVoicesRequest]: @googleapis_reference_link{google/cloud/texttospeech/v1/cloud_tts.proto#L118}
  /// [google.cloud.texttospeech.v1.ListVoicesResponse]: @googleapis_reference_link{google/cloud/texttospeech/v1/cloud_tts.proto#L131}
  ///
  // clang-format on
  StatusOr<google::cloud::texttospeech::v1::ListVoicesResponse> ListVoices(
      std::string const& language_code, Options opts = {});

  // clang-format off
  ///
  /// Returns a list of Voice supported for synthesis.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.texttospeech.v1.ListVoicesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.texttospeech.v1.ListVoicesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.texttospeech.v1.ListVoicesRequest]: @googleapis_reference_link{google/cloud/texttospeech/v1/cloud_tts.proto#L118}
  /// [google.cloud.texttospeech.v1.ListVoicesResponse]: @googleapis_reference_link{google/cloud/texttospeech/v1/cloud_tts.proto#L131}
  ///
  // clang-format on
  StatusOr<google::cloud::texttospeech::v1::ListVoicesResponse> ListVoices(
      google::cloud::texttospeech::v1::ListVoicesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Synthesizes speech synchronously: receive results after all text input
  /// has been processed.
  ///
  /// @param input  Required. The Synthesizer requires either plain text or SSML as input.
  /// @param voice  Required. The desired voice of the synthesized audio.
  /// @param audio_config  Required. The configuration of the synthesized audio.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.texttospeech.v1.SynthesizeSpeechResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.texttospeech.v1.SynthesizeSpeechRequest]: @googleapis_reference_link{google/cloud/texttospeech/v1/cloud_tts.proto#L161}
  /// [google.cloud.texttospeech.v1.SynthesizeSpeechResponse]: @googleapis_reference_link{google/cloud/texttospeech/v1/cloud_tts.proto#L394}
  ///
  // clang-format on
  StatusOr<google::cloud::texttospeech::v1::SynthesizeSpeechResponse>
  SynthesizeSpeech(
      google::cloud::texttospeech::v1::SynthesisInput const& input,
      google::cloud::texttospeech::v1::VoiceSelectionParams const& voice,
      google::cloud::texttospeech::v1::AudioConfig const& audio_config,
      Options opts = {});

  // clang-format off
  ///
  /// Synthesizes speech synchronously: receive results after all text input
  /// has been processed.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.texttospeech.v1.SynthesizeSpeechRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.texttospeech.v1.SynthesizeSpeechResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.texttospeech.v1.SynthesizeSpeechRequest]: @googleapis_reference_link{google/cloud/texttospeech/v1/cloud_tts.proto#L161}
  /// [google.cloud.texttospeech.v1.SynthesizeSpeechResponse]: @googleapis_reference_link{google/cloud/texttospeech/v1/cloud_tts.proto#L394}
  ///
  // clang-format on
  StatusOr<google::cloud::texttospeech::v1::SynthesizeSpeechResponse>
  SynthesizeSpeech(
      google::cloud::texttospeech::v1::SynthesizeSpeechRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Performs bidirectional streaming speech synthesis: receive audio while
  /// sending text.
  ///
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return An object representing the bidirectional streaming
  ///     RPC. Applications can send multiple request messages and receive
  ///     multiple response messages through this API. Bidirectional streaming
  ///     RPCs can impose restrictions on the sequence of request and response
  ///     messages. Please consult the service documentation for details.
  ///     The request message type ([google.cloud.texttospeech.v1.StreamingSynthesizeRequest]) and response messages
  ///     ([google.cloud.texttospeech.v1.StreamingSynthesizeResponse]) are mapped to C++ classes using the
  ///     [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.texttospeech.v1.StreamingSynthesizeRequest]: @googleapis_reference_link{google/cloud/texttospeech/v1/cloud_tts.proto#L425}
  /// [google.cloud.texttospeech.v1.StreamingSynthesizeResponse]: @googleapis_reference_link{google/cloud/texttospeech/v1/cloud_tts.proto#L442}
  ///
  // clang-format on
  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::texttospeech::v1::StreamingSynthesizeRequest,
      google::cloud::texttospeech::v1::StreamingSynthesizeResponse>>
  AsyncStreamingSynthesize(Options opts = {});

  // clang-format off
  ///
  /// Lists operations that match the specified filter in the request. If the
  /// server doesn't support this method, it returns `UNIMPLEMENTED`.
  ///
  /// NOTE: the `name` binding allows API services to override the binding
  /// to use different resource name schemes, such as `users/*/operations`. To
  /// override the binding, API services can add a binding such as
  /// `"/v1/{name=users/*}/operations"` to their service configuration.
  /// For backwards compatibility, the default name includes the operations
  /// collection id, however overriding users must ensure the name binding
  /// is the parent resource, without the operations collection id.
  ///
  /// @param name  The name of the operation's parent resource.
  /// @param filter  The standard list filter.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.longrunning.Operation], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.ListOperationsRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L171}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StreamRange<google::longrunning::Operation> ListOperations(
      std::string const& name, std::string const& filter, Options opts = {});

  // clang-format off
  ///
  /// Lists operations that match the specified filter in the request. If the
  /// server doesn't support this method, it returns `UNIMPLEMENTED`.
  ///
  /// NOTE: the `name` binding allows API services to override the binding
  /// to use different resource name schemes, such as `users/*/operations`. To
  /// override the binding, API services can add a binding such as
  /// `"/v1/{name=users/*}/operations"` to their service configuration.
  /// For backwards compatibility, the default name includes the operations
  /// collection id, however overriding users must ensure the name binding
  /// is the parent resource, without the operations collection id.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.ListOperationsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.longrunning.Operation], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.ListOperationsRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L171}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Gets the latest state of a long-running operation.  Clients can use this
  /// method to poll the operation result at intervals as recommended by the API
  /// service.
  ///
  /// @param name  The name of the operation resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.longrunning.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.GetOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L165}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> GetOperation(std::string const& name,
                                                        Options opts = {});

  // clang-format off
  ///
  /// Gets the latest state of a long-running operation.  Clients can use this
  /// method to poll the operation result at intervals as recommended by the API
  /// service.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.GetOperationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.longrunning.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.GetOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L165}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<TextToSpeechConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace texttospeech_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_V1_TEXT_TO_SPEECH_CLIENT_H
