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
// source: google/cloud/osconfig/v1/osconfig_zonal_service.proto

#include "google/cloud/osconfig/v1/internal/os_config_zonal_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/osconfig/v1/osconfig_zonal_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsConfigZonalServiceStub::~OsConfigZonalServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultOsConfigZonalServiceStub::AsyncCreateOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateOSPolicyAssignment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultOsConfigZonalServiceStub::CreateOSPolicyAssignment(
    grpc::ClientContext& context, Options,
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateOSPolicyAssignment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultOsConfigZonalServiceStub::AsyncUpdateOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateOSPolicyAssignment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultOsConfigZonalServiceStub::UpdateOSPolicyAssignment(
    grpc::ClientContext& context, Options,
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UpdateOSPolicyAssignment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>
DefaultOsConfigZonalServiceStub::GetOSPolicyAssignment(
    grpc::ClientContext& context, Options const&,
    google::cloud::osconfig::v1::GetOSPolicyAssignmentRequest const& request) {
  google::cloud::osconfig::v1::OSPolicyAssignment response;
  auto status = grpc_stub_->GetOSPolicyAssignment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentsResponse>
DefaultOsConfigZonalServiceStub::ListOSPolicyAssignments(
    grpc::ClientContext& context, Options const&,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentsRequest const&
        request) {
  google::cloud::osconfig::v1::ListOSPolicyAssignmentsResponse response;
  auto status =
      grpc_stub_->ListOSPolicyAssignments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsResponse>
DefaultOsConfigZonalServiceStub::ListOSPolicyAssignmentRevisions(
    grpc::ClientContext& context, Options const&,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsRequest const&
        request) {
  google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsResponse response;
  auto status =
      grpc_stub_->ListOSPolicyAssignmentRevisions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultOsConfigZonalServiceStub::AsyncDeleteOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteOSPolicyAssignment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultOsConfigZonalServiceStub::DeleteOSPolicyAssignment(
    grpc::ClientContext& context, Options,
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteOSPolicyAssignment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
DefaultOsConfigZonalServiceStub::GetOSPolicyAssignmentReport(
    grpc::ClientContext& context, Options const&,
    google::cloud::osconfig::v1::GetOSPolicyAssignmentReportRequest const&
        request) {
  google::cloud::osconfig::v1::OSPolicyAssignmentReport response;
  auto status =
      grpc_stub_->GetOSPolicyAssignmentReport(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsResponse>
DefaultOsConfigZonalServiceStub::ListOSPolicyAssignmentReports(
    grpc::ClientContext& context, Options const&,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsRequest const&
        request) {
  google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsResponse response;
  auto status =
      grpc_stub_->ListOSPolicyAssignmentReports(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::Inventory>
DefaultOsConfigZonalServiceStub::GetInventory(
    grpc::ClientContext& context, Options const&,
    google::cloud::osconfig::v1::GetInventoryRequest const& request) {
  google::cloud::osconfig::v1::Inventory response;
  auto status = grpc_stub_->GetInventory(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::ListInventoriesResponse>
DefaultOsConfigZonalServiceStub::ListInventories(
    grpc::ClientContext& context, Options const&,
    google::cloud::osconfig::v1::ListInventoriesRequest const& request) {
  google::cloud::osconfig::v1::ListInventoriesResponse response;
  auto status = grpc_stub_->ListInventories(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::VulnerabilityReport>
DefaultOsConfigZonalServiceStub::GetVulnerabilityReport(
    grpc::ClientContext& context, Options const&,
    google::cloud::osconfig::v1::GetVulnerabilityReportRequest const& request) {
  google::cloud::osconfig::v1::VulnerabilityReport response;
  auto status =
      grpc_stub_->GetVulnerabilityReport(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::ListVulnerabilityReportsResponse>
DefaultOsConfigZonalServiceStub::ListVulnerabilityReports(
    grpc::ClientContext& context, Options const&,
    google::cloud::osconfig::v1::ListVulnerabilityReportsRequest const&
        request) {
  google::cloud::osconfig::v1::ListVulnerabilityReportsResponse response;
  auto status =
      grpc_stub_->ListVulnerabilityReports(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultOsConfigZonalServiceStub::AsyncGetOperation(
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

future<Status> DefaultOsConfigZonalServiceStub::AsyncCancelOperation(
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
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
