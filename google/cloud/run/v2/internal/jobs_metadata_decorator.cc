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
// source: google/cloud/run/v2/job.proto

#include "google/cloud/run/v2/internal/jobs_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/routing_matcher.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/run/v2/job.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobsMetadata::JobsMetadata(
    std::shared_ptr<JobsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>> JobsMetadata::AsyncCreateJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::run::v2::CreateJobRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::CreateJobRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::CreateJobRequest const& request)
                 -> std::string const& { return request.parent(); },
             std::regex{"projects/[^/]+/locations/([^/]+)",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncCreateJob(cq, std::move(context), std::move(options),
                                request);
}

StatusOr<google::longrunning::Operation> JobsMetadata::CreateJob(
    grpc::ClientContext& context, Options options,
    google::cloud::run::v2::CreateJobRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::CreateJobRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::CreateJobRequest const& request)
                 -> std::string const& { return request.parent(); },
             std::regex{"projects/[^/]+/locations/([^/]+)",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->CreateJob(context, options, request);
}

StatusOr<google::cloud::run::v2::Job> JobsMetadata::GetJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::run::v2::GetJobRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::GetJobRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::GetJobRequest const& request)
                 -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->GetJob(context, options, request);
}

StatusOr<google::cloud::run::v2::ListJobsResponse> JobsMetadata::ListJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::run::v2::ListJobsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::ListJobsRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::ListJobsRequest const& request)
                 -> std::string const& { return request.parent(); },
             std::regex{"projects/[^/]+/locations/([^/]+)",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->ListJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> JobsMetadata::AsyncUpdateJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::run::v2::UpdateJobRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::UpdateJobRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::UpdateJobRequest const& request)
                 -> std::string const& { return request.job().name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncUpdateJob(cq, std::move(context), std::move(options),
                                request);
}

StatusOr<google::longrunning::Operation> JobsMetadata::UpdateJob(
    grpc::ClientContext& context, Options options,
    google::cloud::run::v2::UpdateJobRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::UpdateJobRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::UpdateJobRequest const& request)
                 -> std::string const& { return request.job().name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->UpdateJob(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> JobsMetadata::AsyncDeleteJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::run::v2::DeleteJobRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::DeleteJobRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::DeleteJobRequest const& request)
                 -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncDeleteJob(cq, std::move(context), std::move(options),
                                request);
}

StatusOr<google::longrunning::Operation> JobsMetadata::DeleteJob(
    grpc::ClientContext& context, Options options,
    google::cloud::run::v2::DeleteJobRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::DeleteJobRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::DeleteJobRequest const& request)
                 -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->DeleteJob(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> JobsMetadata::AsyncRunJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::run::v2::RunJobRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::RunJobRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::RunJobRequest const& request)
                 -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncRunJob(cq, std::move(context), std::move(options),
                             request);
}

StatusOr<google::longrunning::Operation> JobsMetadata::RunJob(
    grpc::ClientContext& context, Options options,
    google::cloud::run::v2::RunJobRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::RunJobRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::RunJobRequest const& request)
                 -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->RunJob(context, options, request);
}

StatusOr<google::iam::v1::Policy> JobsMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> JobsMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
JobsMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> JobsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void JobsMetadata::SetMetadata(grpc::ClientContext& context,
                               Options const& options,
                               std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void JobsMetadata::SetMetadata(grpc::ClientContext& context,
                               Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google
