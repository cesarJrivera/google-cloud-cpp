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
// source: google/cloud/notebooks/v1/managed_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_INTERNAL_MANAGED_NOTEBOOK_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_INTERNAL_MANAGED_NOTEBOOK_LOGGING_DECORATOR_H

#include "google/cloud/notebooks/v1/internal/managed_notebook_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ManagedNotebookServiceLogging : public ManagedNotebookServiceStub {
 public:
  ~ManagedNotebookServiceLogging() override = default;
  ManagedNotebookServiceLogging(
      std::shared_ptr<ManagedNotebookServiceStub> child,
      TracingOptions tracing_options, std::set<std::string> const& components);

  StatusOr<google::cloud::notebooks::v1::ListRuntimesResponse> ListRuntimes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::ListRuntimesRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::Runtime> GetRuntime(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetRuntimeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::CreateRuntimeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateRuntime(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::CreateRuntimeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::UpdateRuntimeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateRuntime(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::UpdateRuntimeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DeleteRuntimeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteRuntime(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DeleteRuntimeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::StartRuntimeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StartRuntime(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::StartRuntimeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::StopRuntimeRequest const& request) override;

  StatusOr<google::longrunning::Operation> StopRuntime(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::StopRuntimeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSwitchRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::SwitchRuntimeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> SwitchRuntime(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::SwitchRuntimeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResetRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::ResetRuntimeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ResetRuntime(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::ResetRuntimeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpgradeRuntime(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncReportRuntimeEvent(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ReportRuntimeEvent(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse>
  RefreshRuntimeTokenInternal(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDiagnoseRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DiagnoseRuntime(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request)
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
  std::shared_ptr<ManagedNotebookServiceStub> child_;
  TracingOptions tracing_options_;
};  // ManagedNotebookServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_INTERNAL_MANAGED_NOTEBOOK_LOGGING_DECORATOR_H
