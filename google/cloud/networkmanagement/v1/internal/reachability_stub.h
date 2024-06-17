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
// source: google/cloud/networkmanagement/v1/reachability.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKMANAGEMENT_V1_INTERNAL_REACHABILITY_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKMANAGEMENT_V1_INTERNAL_REACHABILITY_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/networkmanagement/v1/reachability.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networkmanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ReachabilityServiceStub {
 public:
  virtual ~ReachabilityServiceStub() = 0;

  virtual StatusOr<
      google::cloud::networkmanagement::v1::ListConnectivityTestsResponse>
  ListConnectivityTests(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkmanagement::v1::ListConnectivityTestsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>
  GetConnectivityTest(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkmanagement::v1::GetConnectivityTestRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateConnectivityTest(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateConnectivityTest(
      grpc::ClientContext& context, Options options,
      google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateConnectivityTest(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateConnectivityTest(
      grpc::ClientContext& context, Options options,
      google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRerunConnectivityTest(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> RerunConnectivityTest(
      grpc::ClientContext& context, Options options,
      google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteConnectivityTest(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteConnectivityTest(
      grpc::ClientContext& context, Options options,
      google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultReachabilityServiceStub : public ReachabilityServiceStub {
 public:
  DefaultReachabilityServiceStub(
      std::unique_ptr<google::cloud::networkmanagement::v1::
                          ReachabilityService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::networkmanagement::v1::ListConnectivityTestsResponse>
  ListConnectivityTests(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkmanagement::v1::ListConnectivityTestsRequest const&
          request) override;

  StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>
  GetConnectivityTest(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkmanagement::v1::GetConnectivityTestRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateConnectivityTest(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateConnectivityTest(
      grpc::ClientContext& context, Options options,
      google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateConnectivityTest(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateConnectivityTest(
      grpc::ClientContext& context, Options options,
      google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRerunConnectivityTest(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RerunConnectivityTest(
      grpc::ClientContext& context, Options options,
      google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteConnectivityTest(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteConnectivityTest(
      grpc::ClientContext& context, Options options,
      google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
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
  std::unique_ptr<
      google::cloud::networkmanagement::v1::ReachabilityService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkmanagement_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKMANAGEMENT_V1_INTERNAL_REACHABILITY_STUB_H
