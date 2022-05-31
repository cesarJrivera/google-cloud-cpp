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
// source: google/monitoring/v3/uptime_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_MOCKS_MOCK_UPTIME_CHECK_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_MOCKS_MOCK_UPTIME_CHECK_CONNECTION_H

#include "google/cloud/monitoring/uptime_check_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace monitoring_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `UptimeCheckServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `UptimeCheckServiceClient`. To do
 * so, construct an object of type `UptimeCheckServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with
 * GoogleTest. While the example showcases types from the BigQuery library, the
 * underlying principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockUptimeCheckServiceConnection
    : public monitoring::UptimeCheckServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::monitoring::v3::UptimeCheckConfig>,
              ListUptimeCheckConfigs,
              (google::monitoring::v3::ListUptimeCheckConfigsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::v3::UptimeCheckConfig>, GetUptimeCheckConfig,
      (google::monitoring::v3::GetUptimeCheckConfigRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::v3::UptimeCheckConfig>,
      CreateUptimeCheckConfig,
      (google::monitoring::v3::CreateUptimeCheckConfigRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::v3::UptimeCheckConfig>,
      UpdateUptimeCheckConfig,
      (google::monitoring::v3::UpdateUptimeCheckConfigRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteUptimeCheckConfig,
      (google::monitoring::v3::DeleteUptimeCheckConfigRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::monitoring::v3::UptimeCheckIp>,
              ListUptimeCheckIps,
              (google::monitoring::v3::ListUptimeCheckIpsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_MOCKS_MOCK_UPTIME_CHECK_CONNECTION_H
