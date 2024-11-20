// Copyright 2023 Google LLC
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
// source: google/cloud/compute/region_commitments/v1/region_commitments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_REGION_COMMITMENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_REGION_COMMITMENTS_CLIENT_H

#include "google/cloud/compute/region_commitments/v1/region_commitments_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_region_commitments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the regionCommitments resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments
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
class RegionCommitmentsClient {
 public:
  explicit RegionCommitmentsClient(
      std::shared_ptr<RegionCommitmentsConnection> connection,
      Options opts = {});
  ~RegionCommitmentsClient();

  ///@{
  /// @name Copy and move support
  RegionCommitmentsClient(RegionCommitmentsClient const&) = default;
  RegionCommitmentsClient& operator=(RegionCommitmentsClient const&) = default;
  RegionCommitmentsClient(RegionCommitmentsClient&&) = default;
  RegionCommitmentsClient& operator=(RegionCommitmentsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RegionCommitmentsClient const& a,
                         RegionCommitmentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RegionCommitmentsClient const& a,
                         RegionCommitmentsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves an aggregated list of commitments by region. To prevent failure,
  /// Google recommends that you set the `returnPartialSuccess` parameter to
  /// `true`.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments/aggregatedList
  ///
  /// @param project  Project ID for this request.
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
  ///     [google.cloud.cpp.compute.v1.CommitmentsScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_commitments.v1.AggregatedListRegionCommitmentsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_commitments/v1/region_commitments.proto#L102}
  /// [google.cloud.cpp.compute.v1.CommitmentsScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_018.proto#L397}
  ///
  // clang-format on
  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::CommitmentsScopedList>>
  AggregatedListRegionCommitments(std::string const& project,
                                  Options opts = {});

  // clang-format off
  ///
  /// Retrieves an aggregated list of commitments by region. To prevent failure,
  /// Google recommends that you set the `returnPartialSuccess` parameter to
  /// `true`.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments/aggregatedList
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_commitments.v1.AggregatedListRegionCommitmentsRequest].
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
  ///     [google.cloud.cpp.compute.v1.CommitmentsScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_commitments.v1.AggregatedListRegionCommitmentsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_commitments/v1/region_commitments.proto#L102}
  /// [google.cloud.cpp.compute.v1.CommitmentsScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_018.proto#L397}
  ///
  // clang-format on
  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::CommitmentsScopedList>>
  AggregatedListRegionCommitments(
      google::cloud::cpp::compute::region_commitments::v1::
          AggregatedListRegionCommitmentsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified commitment resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments/get
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param commitment  Name of the commitment to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Commitment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_commitments.v1.GetCommitmentRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_commitments/v1/region_commitments.proto#L184}
  /// [google.cloud.cpp.compute.v1.Commitment]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_018.proto#L31}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Commitment> GetCommitment(
      std::string const& project, std::string const& region,
      std::string const& commitment, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified commitment resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_commitments.v1.GetCommitmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Commitment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_commitments.v1.GetCommitmentRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_commitments/v1/region_commitments.proto#L184}
  /// [google.cloud.cpp.compute.v1.Commitment]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_018.proto#L31}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Commitment> GetCommitment(
      google::cloud::cpp::compute::region_commitments::v1::
          GetCommitmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a commitment in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments/insert
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param commitment_resource  The Commitment for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_commitments.v1.InsertCommitmentRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_commitments/v1/region_commitments.proto#L199}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertCommitment(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::Commitment const& commitment_resource,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertCommitment
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertCommitment(
      NoAwaitTag, std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::Commitment const& commitment_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a commitment in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_commitments.v1.InsertCommitmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_commitments.v1.InsertCommitmentRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_commitments/v1/region_commitments.proto#L199}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertCommitment(
      google::cloud::cpp::compute::region_commitments::v1::
          InsertCommitmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertCommitment
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertCommitment(
      NoAwaitTag,
      google::cloud::cpp::compute::region_commitments::v1::
          InsertCommitmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertCommitment
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertCommitment(
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of commitments contained within the specified region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments/list
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
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
  ///     [google.cloud.cpp.compute.v1.Commitment], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_commitments.v1.ListRegionCommitmentsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_commitments/v1/region_commitments.proto#L232}
  /// [google.cloud.cpp.compute.v1.Commitment]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_018.proto#L31}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Commitment>
  ListRegionCommitments(std::string const& project, std::string const& region,
                        Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of commitments contained within the specified region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_commitments.v1.ListRegionCommitmentsRequest].
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
  ///     [google.cloud.cpp.compute.v1.Commitment], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_commitments.v1.ListRegionCommitmentsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_commitments/v1/region_commitments.proto#L232}
  /// [google.cloud.cpp.compute.v1.Commitment]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_018.proto#L31}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Commitment>
  ListRegionCommitments(google::cloud::cpp::compute::region_commitments::v1::
                            ListRegionCommitmentsRequest request,
                        Options opts = {});

  // clang-format off
  ///
  /// Updates the specified commitment with the data included in the request.
  /// Update is performed only on selected fields included as part of
  /// update-mask. Only the following fields can be modified: auto_renew.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments/update
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param commitment  Name of the commitment for which auto renew is being updated.
  /// @param update_mask  update_mask indicates fields to be updated as part of this request.
  /// @param commitment_resource  The Commitment for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_commitments.v1.UpdateCommitmentRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_commitments/v1/region_commitments.proto#L304}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateCommitment(
      std::string const& project, std::string const& region,
      std::string const& commitment, std::string const& update_mask,
      google::cloud::cpp::compute::v1::Commitment const& commitment_resource,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief UpdateCommitment
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateCommitment(
      NoAwaitTag, std::string const& project, std::string const& region,
      std::string const& commitment, std::string const& update_mask,
      google::cloud::cpp::compute::v1::Commitment const& commitment_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified commitment with the data included in the request.
  /// Update is performed only on selected fields included as part of
  /// update-mask. Only the following fields can be modified: auto_renew.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionCommitments/update
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_commitments.v1.UpdateCommitmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_commitments.v1.UpdateCommitmentRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_commitments/v1/region_commitments.proto#L304}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateCommitment(
      google::cloud::cpp::compute::region_commitments::v1::
          UpdateCommitmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief UpdateCommitment
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateCommitment(
      NoAwaitTag,
      google::cloud::cpp::compute::region_commitments::v1::
          UpdateCommitmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief UpdateCommitment
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateCommitment(
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<RegionCommitmentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_commitments_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_REGION_COMMITMENTS_CLIENT_H
