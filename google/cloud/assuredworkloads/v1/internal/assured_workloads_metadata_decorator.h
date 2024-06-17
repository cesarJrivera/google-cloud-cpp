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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_INTERNAL_ASSURED_WORKLOADS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_INTERNAL_ASSURED_WORKLOADS_METADATA_DECORATOR_H

#include "google/cloud/assuredworkloads/v1/internal/assured_workloads_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace assuredworkloads_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AssuredWorkloadsServiceMetadata : public AssuredWorkloadsServiceStub {
 public:
  ~AssuredWorkloadsServiceMetadata() override = default;
  AssuredWorkloadsServiceMetadata(
      std::shared_ptr<AssuredWorkloadsServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  future<StatusOr<google::longrunning::Operation>> AsyncCreateWorkload(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateWorkload(
      grpc::ClientContext& context, Options options,
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Workload> UpdateWorkload(
      grpc::ClientContext& context, Options const& options,
      google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request)
      override;

  StatusOr<
      google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
  RestrictAllowedResources(
      grpc::ClientContext& context, Options const& options,
      google::cloud::assuredworkloads::v1::
          RestrictAllowedResourcesRequest const& request) override;

  Status DeleteWorkload(
      grpc::ClientContext& context, Options const& options,
      google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      grpc::ClientContext& context, Options const& options,
      google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::ListWorkloadsResponse>
  ListWorkloads(grpc::ClientContext& context, Options const& options,
                google::cloud::assuredworkloads::v1::ListWorkloadsRequest const&
                    request) override;

  StatusOr<google::cloud::assuredworkloads::v1::ListViolationsResponse>
  ListViolations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::assuredworkloads::v1::ListViolationsRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Violation> GetViolation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::assuredworkloads::v1::GetViolationRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
  AcknowledgeViolation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
          request) override;

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

  std::shared_ptr<AssuredWorkloadsServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_INTERNAL_ASSURED_WORKLOADS_METADATA_DECORATOR_H
