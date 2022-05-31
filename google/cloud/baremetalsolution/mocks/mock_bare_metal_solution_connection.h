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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_MOCKS_MOCK_BARE_METAL_SOLUTION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_MOCKS_MOCK_BARE_METAL_SOLUTION_CONNECTION_H

#include "google/cloud/baremetalsolution/bare_metal_solution_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace baremetalsolution_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `BareMetalSolutionConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `BareMetalSolutionClient`. To do so,
 * construct an object of type `BareMetalSolutionClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with
 * GoogleTest. While the example showcases types from the BigQuery library, the
 * underlying principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockBareMetalSolutionConnection
    : public baremetalsolution::BareMetalSolutionConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<google::cloud::baremetalsolution::v2::Instance>,
      ListInstances,
      (google::cloud::baremetalsolution::v2::ListInstancesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::Instance>, GetInstance,
      (google::cloud::baremetalsolution::v2::GetInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<
                  google::cloud::baremetalsolution::v2::ResetInstanceResponse>>,
              ResetInstance,
              (google::cloud::baremetalsolution::v2::ResetInstanceRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::baremetalsolution::v2::Volume>, ListVolumes,
      (google::cloud::baremetalsolution::v2::ListVolumesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::Volume>, GetVolume,
      (google::cloud::baremetalsolution::v2::GetVolumeRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>,
              UpdateVolume,
              (google::cloud::baremetalsolution::v2::UpdateVolumeRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::baremetalsolution::v2::Network>, ListNetworks,
      (google::cloud::baremetalsolution::v2::ListNetworksRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::Network>, GetNetwork,
      (google::cloud::baremetalsolution::v2::GetNetworkRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::baremetalsolution::v2::SnapshotSchedulePolicy>,
      ListSnapshotSchedulePolicies,
      (google::cloud::baremetalsolution::v2::ListSnapshotSchedulePoliciesRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::SnapshotSchedulePolicy>,
      GetSnapshotSchedulePolicy,
      (google::cloud::baremetalsolution::v2::
           GetSnapshotSchedulePolicyRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::SnapshotSchedulePolicy>,
      CreateSnapshotSchedulePolicy,
      (google::cloud::baremetalsolution::v2::
           CreateSnapshotSchedulePolicyRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::SnapshotSchedulePolicy>,
      UpdateSnapshotSchedulePolicy,
      (google::cloud::baremetalsolution::v2::
           UpdateSnapshotSchedulePolicyRequest const& request),
      (override));

  MOCK_METHOD(Status, DeleteSnapshotSchedulePolicy,
              (google::cloud::baremetalsolution::v2::
                   DeleteSnapshotSchedulePolicyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>,
      CreateVolumeSnapshot,
      (google::cloud::baremetalsolution::v2::CreateVolumeSnapshotRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>>,
      RestoreVolumeSnapshot,
      (google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteVolumeSnapshot,
      (google::cloud::baremetalsolution::v2::DeleteVolumeSnapshotRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>,
      GetVolumeSnapshot,
      (google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest const&
           request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::baremetalsolution::v2::VolumeSnapshot>,
              ListVolumeSnapshots,
              (google::cloud::baremetalsolution::v2::ListVolumeSnapshotsRequest
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::Lun>, GetLun,
      (google::cloud::baremetalsolution::v2::GetLunRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::baremetalsolution::v2::Lun>, ListLuns,
              (google::cloud::baremetalsolution::v2::ListLunsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace baremetalsolution_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_MOCKS_MOCK_BARE_METAL_SOLUTION_CONNECTION_H
