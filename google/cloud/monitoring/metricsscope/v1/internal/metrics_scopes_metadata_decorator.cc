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
// source: google/monitoring/metricsscope/v1/metrics_scopes.proto

#include "google/cloud/monitoring/metricsscope/v1/internal/metrics_scopes_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/monitoring/metricsscope/v1/metrics_scopes.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_metricsscope_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetricsScopesMetadata::MetricsScopesMetadata(
    std::shared_ptr<MetricsScopesStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::monitoring::metricsscope::v1::MetricsScope>
MetricsScopesMetadata::GetMetricsScope(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::metricsscope::v1::GetMetricsScopeRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMetricsScope(context, options, request);
}

StatusOr<google::monitoring::metricsscope::v1::
             ListMetricsScopesByMonitoredProjectResponse>
MetricsScopesMetadata::ListMetricsScopesByMonitoredProject(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::metricsscope::v1::
        ListMetricsScopesByMonitoredProjectRequest const& request) {
  SetMetadata(context, options);
  return child_->ListMetricsScopesByMonitoredProject(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MetricsScopesMetadata::AsyncCreateMonitoredProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateMonitoredProject(cq, std::move(context),
                                             std::move(options), request);
}

StatusOr<google::longrunning::Operation>
MetricsScopesMetadata::CreateMonitoredProject(
    grpc::ClientContext& context, Options options,
    google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateMonitoredProject(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MetricsScopesMetadata::AsyncDeleteMonitoredProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteMonitoredProject(cq, std::move(context),
                                             std::move(options), request);
}

StatusOr<google::longrunning::Operation>
MetricsScopesMetadata::DeleteMonitoredProject(
    grpc::ClientContext& context, Options options,
    google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteMonitoredProject(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MetricsScopesMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> MetricsScopesMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void MetricsScopesMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void MetricsScopesMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_metricsscope_v1_internal
}  // namespace cloud
}  // namespace google
