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
// source: google/monitoring/dashboard/v1/dashboards_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_DASHBOARD_V1_DASHBOARDS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_DASHBOARD_V1_DASHBOARDS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/monitoring/dashboard/v1/dashboards_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_dashboard_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DashboardsServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DashboardsServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DashboardsServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateDashboard(
      google::monitoring::dashboard::v1::CreateDashboardRequest const& request);

  virtual google::cloud::Idempotency ListDashboards(
      google::monitoring::dashboard::v1::ListDashboardsRequest request);

  virtual google::cloud::Idempotency GetDashboard(
      google::monitoring::dashboard::v1::GetDashboardRequest const& request);

  virtual google::cloud::Idempotency DeleteDashboard(
      google::monitoring::dashboard::v1::DeleteDashboardRequest const& request);

  virtual google::cloud::Idempotency UpdateDashboard(
      google::monitoring::dashboard::v1::UpdateDashboardRequest const& request);
};

std::unique_ptr<DashboardsServiceConnectionIdempotencyPolicy>
MakeDefaultDashboardsServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_dashboard_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_DASHBOARD_V1_DASHBOARDS_CONNECTION_IDEMPOTENCY_POLICY_H
