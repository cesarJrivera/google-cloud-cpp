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
// source: google/cloud/dataplex/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_MOCKS_MOCK_DATAPLEX_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_MOCKS_MOCK_DATAPLEX_CONNECTION_H

#include "google/cloud/dataplex/dataplex_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dataplex_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DataplexServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DataplexServiceClient`. To do so,
 * construct an object of type `DataplexServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with
 * GoogleTest. While the example showcases types from the BigQuery library, the
 * underlying principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockDataplexServiceConnection
    : public dataplex::DataplexServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::Lake>>, CreateLake,
              (google::cloud::dataplex::v1::CreateLakeRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::Lake>>, UpdateLake,
              (google::cloud::dataplex::v1::UpdateLakeRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
              DeleteLake,
              (google::cloud::dataplex::v1::DeleteLakeRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Lake>, ListLakes,
              (google::cloud::dataplex::v1::ListLakesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Lake>, GetLake,
              (google::cloud::dataplex::v1::GetLakeRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Action>, ListLakeActions,
              (google::cloud::dataplex::v1::ListLakeActionsRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::Zone>>, CreateZone,
              (google::cloud::dataplex::v1::CreateZoneRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::Zone>>, UpdateZone,
              (google::cloud::dataplex::v1::UpdateZoneRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
              DeleteZone,
              (google::cloud::dataplex::v1::DeleteZoneRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Zone>, ListZones,
              (google::cloud::dataplex::v1::ListZonesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Zone>, GetZone,
              (google::cloud::dataplex::v1::GetZoneRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Action>, ListZoneActions,
              (google::cloud::dataplex::v1::ListZoneActionsRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::Asset>>, CreateAsset,
              (google::cloud::dataplex::v1::CreateAssetRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::Asset>>, UpdateAsset,
              (google::cloud::dataplex::v1::UpdateAssetRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
              DeleteAsset,
              (google::cloud::dataplex::v1::DeleteAssetRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Asset>, ListAssets,
              (google::cloud::dataplex::v1::ListAssetsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Asset>, GetAsset,
              (google::cloud::dataplex::v1::GetAssetRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Action>,
              ListAssetActions,
              (google::cloud::dataplex::v1::ListAssetActionsRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::Task>>, CreateTask,
              (google::cloud::dataplex::v1::CreateTaskRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::Task>>, UpdateTask,
              (google::cloud::dataplex::v1::UpdateTaskRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
              DeleteTask,
              (google::cloud::dataplex::v1::DeleteTaskRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Task>, ListTasks,
              (google::cloud::dataplex::v1::ListTasksRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Task>, GetTask,
              (google::cloud::dataplex::v1::GetTaskRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Job>, ListJobs,
              (google::cloud::dataplex::v1::ListJobsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Job>, GetJob,
              (google::cloud::dataplex::v1::GetJobRequest const& request),
              (override));

  MOCK_METHOD(Status, CancelJob,
              (google::cloud::dataplex::v1::CancelJobRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::Environment>>,
      CreateEnvironment,
      (google::cloud::dataplex::v1::CreateEnvironmentRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::Environment>>,
      UpdateEnvironment,
      (google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
      DeleteEnvironment,
      (google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Environment>,
              ListEnvironments,
              (google::cloud::dataplex::v1::ListEnvironmentsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::Environment>, GetEnvironment,
      (google::cloud::dataplex::v1::GetEnvironmentRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Session>, ListSessions,
              (google::cloud::dataplex::v1::ListSessionsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_MOCKS_MOCK_DATAPLEX_CONNECTION_H
