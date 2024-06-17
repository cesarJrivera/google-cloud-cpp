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
// source: google/iam/v2/policy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_INTERNAL_POLICIES_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_INTERNAL_POLICIES_LOGGING_DECORATOR_H

#include "google/cloud/iam/v2/internal/policies_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace iam_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PoliciesLogging : public PoliciesStub {
 public:
  ~PoliciesLogging() override = default;
  PoliciesLogging(std::shared_ptr<PoliciesStub> child,
                  TracingOptions tracing_options,
                  std::set<std::string> const& components);

  StatusOr<google::iam::v2::ListPoliciesResponse> ListPolicies(
      grpc::ClientContext& context, Options const& options,
      google::iam::v2::ListPoliciesRequest const& request) override;

  StatusOr<google::iam::v2::Policy> GetPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v2::GetPolicyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreatePolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::iam::v2::CreatePolicyRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreatePolicy(
      grpc::ClientContext& context, Options options,
      google::iam::v2::CreatePolicyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdatePolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::iam::v2::UpdatePolicyRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdatePolicy(
      grpc::ClientContext& context, Options options,
      google::iam::v2::UpdatePolicyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeletePolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::iam::v2::DeletePolicyRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeletePolicy(
      grpc::ClientContext& context, Options options,
      google::iam::v2::DeletePolicyRequest const& request) override;

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
  std::shared_ptr<PoliciesStub> child_;
  TracingOptions tracing_options_;
};  // PoliciesLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_INTERNAL_POLICIES_LOGGING_DECORATOR_H
