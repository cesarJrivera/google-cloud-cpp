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
// source: google/cloud/notebooks/v2/service.proto

#include "google/cloud/notebooks/v2/internal/notebook_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/notebooks/v2/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace notebooks_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotebookServiceStub::~NotebookServiceStub() = default;

StatusOr<google::cloud::notebooks::v2::ListInstancesResponse>
DefaultNotebookServiceStub::ListInstances(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v2::ListInstancesRequest const& request) {
  google::cloud::notebooks::v2::ListInstancesResponse response;
  auto status = grpc_stub_->ListInstances(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::notebooks::v2::Instance>
DefaultNotebookServiceStub::GetInstance(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v2::GetInstanceRequest const& request) {
  google::cloud::notebooks::v2::Instance response;
  auto status = grpc_stub_->GetInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v2::CreateInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v2::CreateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v2::CreateInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNotebookServiceStub::CreateInstance(
    grpc::ClientContext& context, Options,
    google::cloud::notebooks::v2::CreateInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v2::UpdateInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v2::UpdateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v2::UpdateInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNotebookServiceStub::UpdateInstance(
    grpc::ClientContext& context, Options,
    google::cloud::notebooks::v2::UpdateInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v2::DeleteInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v2::DeleteInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v2::DeleteInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNotebookServiceStub::DeleteInstance(
    grpc::ClientContext& context, Options,
    google::cloud::notebooks::v2::DeleteInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v2::StartInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v2::StartInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v2::StartInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNotebookServiceStub::StartInstance(
    grpc::ClientContext& context, Options,
    google::cloud::notebooks::v2::StartInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->StartInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v2::StopInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v2::StopInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v2::StopInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStopInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNotebookServiceStub::StopInstance(
    grpc::ClientContext& context, Options,
    google::cloud::notebooks::v2::StopInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->StopInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v2::ResetInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v2::ResetInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v2::ResetInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncResetInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNotebookServiceStub::ResetInstance(
    grpc::ClientContext& context, Options,
    google::cloud::notebooks::v2::ResetInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ResetInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::notebooks::v2::CheckInstanceUpgradabilityResponse>
DefaultNotebookServiceStub::CheckInstanceUpgradability(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v2::CheckInstanceUpgradabilityRequest const&
        request) {
  google::cloud::notebooks::v2::CheckInstanceUpgradabilityResponse response;
  auto status =
      grpc_stub_->CheckInstanceUpgradability(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncUpgradeInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v2::UpgradeInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v2::UpgradeInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v2::UpgradeInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpgradeInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNotebookServiceStub::UpgradeInstance(
    grpc::ClientContext& context, Options,
    google::cloud::notebooks::v2::UpgradeInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpgradeInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncRollbackInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v2::RollbackInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v2::RollbackInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v2::RollbackInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRollbackInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNotebookServiceStub::RollbackInstance(
    grpc::ClientContext& context, Options,
    google::cloud::notebooks::v2::RollbackInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->RollbackInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncDiagnoseInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v2::DiagnoseInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDiagnoseInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNotebookServiceStub::DiagnoseInstance(
    grpc::ClientContext& context, Options,
    google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DiagnoseInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultNotebookServiceStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultNotebookServiceStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultNotebookServiceStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultNotebookServiceStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultNotebookServiceStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultNotebookServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultNotebookServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultNotebookServiceStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultNotebookServiceStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncGetOperation(
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
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultNotebookServiceStub::AsyncCancelOperation(
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
               return operations_stub_->AsyncCancelOperation(context, request,
                                                             cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v2_internal
}  // namespace cloud
}  // namespace google
