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
// source: google/cloud/resourcemanager/v3/tag_values.proto

#include "google/cloud/resourcemanager/v3/internal/tag_values_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/resourcemanager/v3/tag_values.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TagValuesMetadata::TagValuesMetadata(
    std::shared_ptr<TagValuesStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::resourcemanager::v3::ListTagValuesResponse>
TagValuesMetadata::ListTagValues(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::ListTagValuesRequest const& request) {
  SetMetadata(context, options);
  return child_->ListTagValues(context, options, request);
}

StatusOr<google::cloud::resourcemanager::v3::TagValue>
TagValuesMetadata::GetTagValue(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::GetTagValueRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTagValue(context, options, request);
}

StatusOr<google::cloud::resourcemanager::v3::TagValue>
TagValuesMetadata::GetNamespacedTagValue(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::GetNamespacedTagValueRequest const&
        request) {
  SetMetadata(context, options);
  return child_->GetNamespacedTagValue(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TagValuesMetadata::AsyncCreateTagValue(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::CreateTagValueRequest const& request) {
  SetMetadata(*context, *options);
  return child_->AsyncCreateTagValue(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> TagValuesMetadata::CreateTagValue(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::CreateTagValueRequest const& request) {
  SetMetadata(context, options);
  return child_->CreateTagValue(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TagValuesMetadata::AsyncUpdateTagValue(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::UpdateTagValueRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("tag_value.name=",
                           internal::UrlEncode(request.tag_value().name())));
  return child_->AsyncUpdateTagValue(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> TagValuesMetadata::UpdateTagValue(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::UpdateTagValueRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("tag_value.name=",
                           internal::UrlEncode(request.tag_value().name())));
  return child_->UpdateTagValue(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TagValuesMetadata::AsyncDeleteTagValue(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::DeleteTagValueRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteTagValue(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> TagValuesMetadata::DeleteTagValue(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::DeleteTagValueRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteTagValue(context, options, request);
}

StatusOr<google::iam::v1::Policy> TagValuesMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> TagValuesMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
TagValuesMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TagValuesMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> TagValuesMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void TagValuesMetadata::SetMetadata(grpc::ClientContext& context,
                                    Options const& options,
                                    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void TagValuesMetadata::SetMetadata(grpc::ClientContext& context,
                                    Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
