// Copyright 2024 Google LLC
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
// source: google/cloud/backupdr/v1/backupdr.proto

#include "google/cloud/backupdr/v1/internal/backup_dr_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/backupdr/v1/backupdr.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace backupdr_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BackupDRStub::~BackupDRStub() = default;

StatusOr<google::cloud::backupdr::v1::ListManagementServersResponse>
DefaultBackupDRStub::ListManagementServers(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::ListManagementServersRequest const& request) {
  google::cloud::backupdr::v1::ListManagementServersResponse response;
  auto status = grpc_stub_->ListManagementServers(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::ManagementServer>
DefaultBackupDRStub::GetManagementServer(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::GetManagementServerRequest const& request) {
  google::cloud::backupdr::v1::ManagementServer response;
  auto status = grpc_stub_->GetManagementServer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncCreateManagementServer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::CreateManagementServerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::CreateManagementServerRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::backupdr::v1::CreateManagementServerRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateManagementServer(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupDRStub::CreateManagementServer(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::CreateManagementServerRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateManagementServer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncDeleteManagementServer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::DeleteManagementServerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::DeleteManagementServerRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::backupdr::v1::DeleteManagementServerRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteManagementServer(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupDRStub::DeleteManagementServer(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::DeleteManagementServerRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteManagementServer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultBackupDRStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace backupdr_v1_internal
}  // namespace cloud
}  // namespace google
