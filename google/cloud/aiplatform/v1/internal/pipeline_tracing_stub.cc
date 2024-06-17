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
// source: google/cloud/aiplatform/v1/pipeline_service.proto

#include "google/cloud/aiplatform/v1/internal/pipeline_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PipelineServiceTracingStub::PipelineServiceTracingStub(
    std::shared_ptr<PipelineServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceTracingStub::CreateTrainingPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "CreateTrainingPipeline");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateTrainingPipeline(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceTracingStub::GetTrainingPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetTrainingPipelineRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "GetTrainingPipeline");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetTrainingPipeline(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListTrainingPipelinesResponse>
PipelineServiceTracingStub::ListTrainingPipelines(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListTrainingPipelinesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "ListTrainingPipelines");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListTrainingPipelines(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceTracingStub::AsyncDeleteTrainingPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "DeleteTrainingPipeline");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteTrainingPipeline(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PipelineServiceTracingStub::DeleteTrainingPipeline(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "DeleteTrainingPipeline");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteTrainingPipeline(context, options, request));
}

Status PipelineServiceTracingStub::CancelTrainingPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "CancelTrainingPipeline");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CancelTrainingPipeline(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceTracingStub::CreatePipelineJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreatePipelineJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "CreatePipelineJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreatePipelineJob(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceTracingStub::GetPipelineJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetPipelineJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "GetPipelineJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetPipelineJob(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListPipelineJobsResponse>
PipelineServiceTracingStub::ListPipelineJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListPipelineJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "ListPipelineJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListPipelineJobs(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceTracingStub::AsyncDeletePipelineJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "DeletePipelineJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeletePipelineJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PipelineServiceTracingStub::DeletePipelineJob(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "DeletePipelineJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeletePipelineJob(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceTracingStub::AsyncBatchDeletePipelineJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "BatchDeletePipelineJobs");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchDeletePipelineJobs(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PipelineServiceTracingStub::BatchDeletePipelineJobs(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "BatchDeletePipelineJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->BatchDeletePipelineJobs(context, options, request));
}

Status PipelineServiceTracingStub::CancelPipelineJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelPipelineJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "CancelPipelineJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CancelPipelineJob(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceTracingStub::AsyncBatchCancelPipelineJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "BatchCancelPipelineJobs");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchCancelPipelineJobs(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PipelineServiceTracingStub::BatchCancelPipelineJobs(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PipelineService", "BatchCancelPipelineJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->BatchCancelPipelineJobs(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceTracingStub::AsyncGetOperation(
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

future<Status> PipelineServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<PipelineServiceStub> MakePipelineServiceTracingStub(
    std::shared_ptr<PipelineServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<PipelineServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
