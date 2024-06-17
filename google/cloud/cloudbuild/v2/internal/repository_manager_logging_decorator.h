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
// source: google/devtools/cloudbuild/v2/repositories.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_INTERNAL_REPOSITORY_MANAGER_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_INTERNAL_REPOSITORY_MANAGER_LOGGING_DECORATOR_H

#include "google/cloud/cloudbuild/v2/internal/repository_manager_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace cloudbuild_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RepositoryManagerLogging : public RepositoryManagerStub {
 public:
  ~RepositoryManagerLogging() override = default;
  RepositoryManagerLogging(std::shared_ptr<RepositoryManagerStub> child,
                           TracingOptions tracing_options,
                           std::set<std::string> const& components);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::CreateConnectionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateConnection(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::CreateConnectionRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::Connection> GetConnection(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::GetConnectionRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::ListConnectionsResponse>
  ListConnections(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::ListConnectionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateConnection(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteConnection(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateRepository(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchCreateRepositories(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchCreateRepositories(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v2::Repository> GetRepository(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::GetRepositoryRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::ListRepositoriesResponse>
  ListRepositories(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::ListRepositoriesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteRepository(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
  FetchReadWriteToken(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
  FetchReadToken(grpc::ClientContext& context, Options const& options,
                 google::devtools::cloudbuild::v2::FetchReadTokenRequest const&
                     request) override;

  StatusOr<google::devtools::cloudbuild::v2::FetchLinkableRepositoriesResponse>
  FetchLinkableRepositories(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse> FetchGitRefs(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::FetchGitRefsRequest const& request)
      override;

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
  std::shared_ptr<RepositoryManagerStub> child_;
  TracingOptions tracing_options_;
};  // RepositoryManagerLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_INTERNAL_REPOSITORY_MANAGER_LOGGING_DECORATOR_H
