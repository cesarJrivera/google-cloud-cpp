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
// source: google/cloud/aiplatform/v1/tensorboard_service.proto

#include "google/cloud/aiplatform/v1/internal/tensorboard_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/tensorboard_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TensorboardServiceStub::~TensorboardServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultTensorboardServiceStub::AsyncCreateTensorboard(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::CreateTensorboardRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CreateTensorboardRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::CreateTensorboardRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateTensorboard(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTensorboardServiceStub::CreateTensorboard(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::CreateTensorboardRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateTensorboard(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::Tensorboard>
DefaultTensorboardServiceStub::GetTensorboard(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetTensorboardRequest const& request) {
  google::cloud::aiplatform::v1::Tensorboard response;
  auto status = grpc_stub_->GetTensorboard(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTensorboardServiceStub::AsyncUpdateTensorboard(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::UpdateTensorboardRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::UpdateTensorboardRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::UpdateTensorboardRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateTensorboard(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTensorboardServiceStub::UpdateTensorboard(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::UpdateTensorboardRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateTensorboard(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardsResponse>
DefaultTensorboardServiceStub::ListTensorboards(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListTensorboardsRequest const& request) {
  google::cloud::aiplatform::v1::ListTensorboardsResponse response;
  auto status = grpc_stub_->ListTensorboards(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTensorboardServiceStub::AsyncDeleteTensorboard(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteTensorboardRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteTensorboardRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteTensorboardRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTensorboard(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTensorboardServiceStub::DeleteTensorboard(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::DeleteTensorboardRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteTensorboard(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardUsageResponse>
DefaultTensorboardServiceStub::ReadTensorboardUsage(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const& request) {
  google::cloud::aiplatform::v1::ReadTensorboardUsageResponse response;
  auto status = grpc_stub_->ReadTensorboardUsage(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardSizeResponse>
DefaultTensorboardServiceStub::ReadTensorboardSize(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const& request) {
  google::cloud::aiplatform::v1::ReadTensorboardSizeResponse response;
  auto status = grpc_stub_->ReadTensorboardSize(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
DefaultTensorboardServiceStub::CreateTensorboardExperiment(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::CreateTensorboardExperimentRequest const&
        request) {
  google::cloud::aiplatform::v1::TensorboardExperiment response;
  auto status =
      grpc_stub_->CreateTensorboardExperiment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
DefaultTensorboardServiceStub::GetTensorboardExperiment(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&
        request) {
  google::cloud::aiplatform::v1::TensorboardExperiment response;
  auto status =
      grpc_stub_->GetTensorboardExperiment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
DefaultTensorboardServiceStub::UpdateTensorboardExperiment(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::UpdateTensorboardExperimentRequest const&
        request) {
  google::cloud::aiplatform::v1::TensorboardExperiment response;
  auto status =
      grpc_stub_->UpdateTensorboardExperiment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardExperimentsResponse>
DefaultTensorboardServiceStub::ListTensorboardExperiments(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListTensorboardExperimentsRequest const&
        request) {
  google::cloud::aiplatform::v1::ListTensorboardExperimentsResponse response;
  auto status =
      grpc_stub_->ListTensorboardExperiments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTensorboardServiceStub::AsyncDeleteTensorboardExperiment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::
                 DeleteTensorboardExperimentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTensorboardExperiment(context, request,
                                                            cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTensorboardServiceStub::DeleteTensorboardExperiment(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteTensorboardExperiment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
DefaultTensorboardServiceStub::CreateTensorboardRun(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::CreateTensorboardRunRequest const& request) {
  google::cloud::aiplatform::v1::TensorboardRun response;
  auto status = grpc_stub_->CreateTensorboardRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::BatchCreateTensorboardRunsResponse>
DefaultTensorboardServiceStub::BatchCreateTensorboardRuns(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::BatchCreateTensorboardRunsRequest const&
        request) {
  google::cloud::aiplatform::v1::BatchCreateTensorboardRunsResponse response;
  auto status =
      grpc_stub_->BatchCreateTensorboardRuns(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
DefaultTensorboardServiceStub::GetTensorboardRun(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetTensorboardRunRequest const& request) {
  google::cloud::aiplatform::v1::TensorboardRun response;
  auto status = grpc_stub_->GetTensorboardRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
DefaultTensorboardServiceStub::UpdateTensorboardRun(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const& request) {
  google::cloud::aiplatform::v1::TensorboardRun response;
  auto status = grpc_stub_->UpdateTensorboardRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardRunsResponse>
DefaultTensorboardServiceStub::ListTensorboardRuns(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListTensorboardRunsRequest const& request) {
  google::cloud::aiplatform::v1::ListTensorboardRunsResponse response;
  auto status = grpc_stub_->ListTensorboardRuns(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTensorboardServiceStub::AsyncDeleteTensorboardRun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteTensorboardRunRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTensorboardRun(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTensorboardServiceStub::DeleteTensorboardRun(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteTensorboardRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::aiplatform::v1::BatchCreateTensorboardTimeSeriesResponse>
DefaultTensorboardServiceStub::BatchCreateTensorboardTimeSeries(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::
        BatchCreateTensorboardTimeSeriesRequest const& request) {
  google::cloud::aiplatform::v1::BatchCreateTensorboardTimeSeriesResponse
      response;
  auto status = grpc_stub_->BatchCreateTensorboardTimeSeries(&context, request,
                                                             &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
DefaultTensorboardServiceStub::CreateTensorboardTimeSeries(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::CreateTensorboardTimeSeriesRequest const&
        request) {
  google::cloud::aiplatform::v1::TensorboardTimeSeries response;
  auto status =
      grpc_stub_->CreateTensorboardTimeSeries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
DefaultTensorboardServiceStub::GetTensorboardTimeSeries(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&
        request) {
  google::cloud::aiplatform::v1::TensorboardTimeSeries response;
  auto status =
      grpc_stub_->GetTensorboardTimeSeries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
DefaultTensorboardServiceStub::UpdateTensorboardTimeSeries(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::UpdateTensorboardTimeSeriesRequest const&
        request) {
  google::cloud::aiplatform::v1::TensorboardTimeSeries response;
  auto status =
      grpc_stub_->UpdateTensorboardTimeSeries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardTimeSeriesResponse>
DefaultTensorboardServiceStub::ListTensorboardTimeSeries(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListTensorboardTimeSeriesRequest const&
        request) {
  google::cloud::aiplatform::v1::ListTensorboardTimeSeriesResponse response;
  auto status =
      grpc_stub_->ListTensorboardTimeSeries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTensorboardServiceStub::AsyncDeleteTensorboardTimeSeries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::
                 DeleteTensorboardTimeSeriesRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTensorboardTimeSeries(context, request,
                                                            cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTensorboardServiceStub::DeleteTensorboardTimeSeries(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteTensorboardTimeSeries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::aiplatform::v1::BatchReadTensorboardTimeSeriesDataResponse>
DefaultTensorboardServiceStub::BatchReadTensorboardTimeSeriesData(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::
        BatchReadTensorboardTimeSeriesDataRequest const& request) {
  google::cloud::aiplatform::v1::BatchReadTensorboardTimeSeriesDataResponse
      response;
  auto status = grpc_stub_->BatchReadTensorboardTimeSeriesData(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataResponse>
DefaultTensorboardServiceStub::ReadTensorboardTimeSeriesData(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataRequest const&
        request) {
  google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataResponse response;
  auto status =
      grpc_stub_->ReadTensorboardTimeSeriesData(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>>
DefaultTensorboardServiceStub::ReadTensorboardBlobData(
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&
        request) {
  auto stream = grpc_stub_->ReadTensorboardBlobData(context.get(), request);
  return std::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>>(
      std::move(context), std::move(stream));
}

StatusOr<google::cloud::aiplatform::v1::WriteTensorboardExperimentDataResponse>
DefaultTensorboardServiceStub::WriteTensorboardExperimentData(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::WriteTensorboardExperimentDataRequest const&
        request) {
  google::cloud::aiplatform::v1::WriteTensorboardExperimentDataResponse
      response;
  auto status =
      grpc_stub_->WriteTensorboardExperimentData(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::WriteTensorboardRunDataResponse>
DefaultTensorboardServiceStub::WriteTensorboardRunData(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&
        request) {
  google::cloud::aiplatform::v1::WriteTensorboardRunDataResponse response;
  auto status =
      grpc_stub_->WriteTensorboardRunData(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataResponse>
DefaultTensorboardServiceStub::ExportTensorboardTimeSeriesData(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataRequest const&
        request) {
  google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataResponse
      response;
  auto status =
      grpc_stub_->ExportTensorboardTimeSeriesData(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTensorboardServiceStub::AsyncGetOperation(
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

future<Status> DefaultTensorboardServiceStub::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
