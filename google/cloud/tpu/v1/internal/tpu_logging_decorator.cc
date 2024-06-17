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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#include "google/cloud/tpu/v1/internal/tpu_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/tpu/v1/cloud_tpu.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace tpu_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TpuLogging::TpuLogging(std::shared_ptr<TpuStub> child,
                       TracingOptions tracing_options,
                       std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::tpu::v1::ListNodesResponse> TpuLogging::ListNodes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v1::ListNodesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::tpu::v1::ListNodesRequest const& request) {
        return child_->ListNodes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v1::Node> TpuLogging::GetNode(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v1::GetNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::tpu::v1::GetNodeRequest const& request) {
        return child_->GetNode(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncCreateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v1::CreateNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::tpu::v1::CreateNodeRequest const& request) {
        return child_->AsyncCreateNode(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> TpuLogging::CreateNode(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v1::CreateNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::tpu::v1::CreateNodeRequest const& request) {
        return child_->CreateNode(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncDeleteNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v1::DeleteNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::tpu::v1::DeleteNodeRequest const& request) {
        return child_->AsyncDeleteNode(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> TpuLogging::DeleteNode(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v1::DeleteNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::tpu::v1::DeleteNodeRequest const& request) {
        return child_->DeleteNode(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncReimageNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v1::ReimageNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::tpu::v1::ReimageNodeRequest const& request) {
        return child_->AsyncReimageNode(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> TpuLogging::ReimageNode(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v1::ReimageNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::tpu::v1::ReimageNodeRequest const& request) {
        return child_->ReimageNode(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncStopNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v1::StopNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::tpu::v1::StopNodeRequest const& request) {
        return child_->AsyncStopNode(cq, std::move(context), std::move(options),
                                     request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> TpuLogging::StopNode(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v1::StopNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::tpu::v1::StopNodeRequest const& request) {
        return child_->StopNode(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncStartNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v1::StartNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::tpu::v1::StartNodeRequest const& request) {
        return child_->AsyncStartNode(cq, std::move(context),
                                      std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> TpuLogging::StartNode(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v1::StartNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::tpu::v1::StartNodeRequest const& request) {
        return child_->StartNode(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v1::ListTensorFlowVersionsResponse>
TpuLogging::ListTensorFlowVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v1::ListTensorFlowVersionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::tpu::v1::ListTensorFlowVersionsRequest const&
                 request) {
        return child_->ListTensorFlowVersions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v1::TensorFlowVersion>
TpuLogging::GetTensorFlowVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request) {
        return child_->GetTensorFlowVersion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v1::ListAcceleratorTypesResponse>
TpuLogging::ListAcceleratorTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v1::ListAcceleratorTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::tpu::v1::ListAcceleratorTypesRequest const& request) {
        return child_->ListAcceleratorTypes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v1::AcceleratorType>
TpuLogging::GetAcceleratorType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request) {
        return child_->GetAcceleratorType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> TpuLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1_internal
}  // namespace cloud
}  // namespace google
