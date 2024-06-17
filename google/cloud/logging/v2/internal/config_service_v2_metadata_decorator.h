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
// source: google/logging/v2/logging_config.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_METADATA_DECORATOR_H

#include "google/cloud/logging/v2/internal/config_service_v2_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConfigServiceV2Metadata : public ConfigServiceV2Stub {
 public:
  ~ConfigServiceV2Metadata() override = default;
  ConfigServiceV2Metadata(
      std::shared_ptr<ConfigServiceV2Stub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::logging::v2::ListBucketsResponse> ListBuckets(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListBucketsRequest const& request) override;

  StatusOr<google::logging::v2::LogBucket> GetBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetBucketRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBucketAsync(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::CreateBucketRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateBucketAsync(
      grpc::ClientContext& context, Options options,
      google::logging::v2::CreateBucketRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBucketAsync(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::UpdateBucketRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateBucketAsync(
      grpc::ClientContext& context, Options options,
      google::logging::v2::UpdateBucketRequest const& request) override;

  StatusOr<google::logging::v2::LogBucket> CreateBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateBucketRequest const& request) override;

  StatusOr<google::logging::v2::LogBucket> UpdateBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateBucketRequest const& request) override;

  Status DeleteBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteBucketRequest const& request) override;

  Status UndeleteBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UndeleteBucketRequest const& request) override;

  StatusOr<google::logging::v2::ListViewsResponse> ListViews(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListViewsRequest const& request) override;

  StatusOr<google::logging::v2::LogView> GetView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetViewRequest const& request) override;

  StatusOr<google::logging::v2::LogView> CreateView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateViewRequest const& request) override;

  StatusOr<google::logging::v2::LogView> UpdateView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateViewRequest const& request) override;

  Status DeleteView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteViewRequest const& request) override;

  StatusOr<google::logging::v2::ListSinksResponse> ListSinks(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListSinksRequest const& request) override;

  StatusOr<google::logging::v2::LogSink> GetSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetSinkRequest const& request) override;

  StatusOr<google::logging::v2::LogSink> CreateSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateSinkRequest const& request) override;

  StatusOr<google::logging::v2::LogSink> UpdateSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateSinkRequest const& request) override;

  Status DeleteSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteSinkRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateLink(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::CreateLinkRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateLink(
      grpc::ClientContext& context, Options options,
      google::logging::v2::CreateLinkRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteLink(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::DeleteLinkRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteLink(
      grpc::ClientContext& context, Options options,
      google::logging::v2::DeleteLinkRequest const& request) override;

  StatusOr<google::logging::v2::ListLinksResponse> ListLinks(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListLinksRequest const& request) override;

  StatusOr<google::logging::v2::Link> GetLink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetLinkRequest const& request) override;

  StatusOr<google::logging::v2::ListExclusionsResponse> ListExclusions(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListExclusionsRequest const& request) override;

  StatusOr<google::logging::v2::LogExclusion> GetExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetExclusionRequest const& request) override;

  StatusOr<google::logging::v2::LogExclusion> CreateExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateExclusionRequest const& request) override;

  StatusOr<google::logging::v2::LogExclusion> UpdateExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateExclusionRequest const& request) override;

  Status DeleteExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteExclusionRequest const& request) override;

  StatusOr<google::logging::v2::CmekSettings> GetCmekSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetCmekSettingsRequest const& request) override;

  StatusOr<google::logging::v2::CmekSettings> UpdateCmekSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateCmekSettingsRequest const& request) override;

  StatusOr<google::logging::v2::Settings> GetSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetSettingsRequest const& request) override;

  StatusOr<google::logging::v2::Settings> UpdateSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateSettingsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCopyLogEntries(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::CopyLogEntriesRequest const& request) override;

  StatusOr<google::longrunning::Operation> CopyLogEntries(
      grpc::ClientContext& context, Options options,
      google::logging::v2::CopyLogEntriesRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<ConfigServiceV2Stub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_METADATA_DECORATOR_H
