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
// source: google/cloud/dataproc/v1/node_groups.proto

#include "google/cloud/dataproc/v1/internal/node_group_controller_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NodeGroupControllerTracingStub::NodeGroupControllerTracingStub(
    std::shared_ptr<NodeGroupControllerStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
NodeGroupControllerTracingStub::AsyncCreateNodeGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataproc::v1::CreateNodeGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataproc.v1.NodeGroupController", "CreateNodeGroup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateNodeGroup(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NodeGroupControllerTracingStub::CreateNodeGroup(
    grpc::ClientContext& context, Options options,
    google::cloud::dataproc::v1::CreateNodeGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataproc.v1.NodeGroupController", "CreateNodeGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateNodeGroup(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NodeGroupControllerTracingStub::AsyncResizeNodeGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataproc::v1::ResizeNodeGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataproc.v1.NodeGroupController", "ResizeNodeGroup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncResizeNodeGroup(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NodeGroupControllerTracingStub::ResizeNodeGroup(
    grpc::ClientContext& context, Options options,
    google::cloud::dataproc::v1::ResizeNodeGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataproc.v1.NodeGroupController", "ResizeNodeGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ResizeNodeGroup(context, options, request));
}

StatusOr<google::cloud::dataproc::v1::NodeGroup>
NodeGroupControllerTracingStub::GetNodeGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::GetNodeGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataproc.v1.NodeGroupController", "GetNodeGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetNodeGroup(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NodeGroupControllerTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> NodeGroupControllerTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<NodeGroupControllerStub> MakeNodeGroupControllerTracingStub(
    std::shared_ptr<NodeGroupControllerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<NodeGroupControllerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
