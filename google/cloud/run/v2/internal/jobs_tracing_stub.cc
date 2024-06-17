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
// source: google/cloud/run/v2/job.proto

#include "google/cloud/run/v2/internal/jobs_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

JobsTracingStub::JobsTracingStub(std::shared_ptr<JobsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
JobsTracingStub::AsyncCreateJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::run::v2::CreateJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "CreateJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> JobsTracingStub::CreateJob(
    grpc::ClientContext& context, Options options,
    google::cloud::run::v2::CreateJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "CreateJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateJob(context, options, request));
}

StatusOr<google::cloud::run::v2::Job> JobsTracingStub::GetJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::run::v2::GetJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "GetJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetJob(context, options, request));
}

StatusOr<google::cloud::run::v2::ListJobsResponse> JobsTracingStub::ListJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::run::v2::ListJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "ListJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListJobs(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
JobsTracingStub::AsyncUpdateJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::run::v2::UpdateJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "UpdateJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> JobsTracingStub::UpdateJob(
    grpc::ClientContext& context, Options options,
    google::cloud::run::v2::UpdateJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "UpdateJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateJob(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
JobsTracingStub::AsyncDeleteJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::run::v2::DeleteJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "DeleteJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> JobsTracingStub::DeleteJob(
    grpc::ClientContext& context, Options options,
    google::cloud::run::v2::DeleteJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "DeleteJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteJob(context, options, request));
}

future<StatusOr<google::longrunning::Operation>> JobsTracingStub::AsyncRunJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::run::v2::RunJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "RunJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRunJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> JobsTracingStub::RunJob(
    grpc::ClientContext& context, Options options,
    google::cloud::run::v2::RunJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "RunJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RunJob(context, options, request));
}

StatusOr<google::iam::v1::Policy> JobsTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy> JobsTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
JobsTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.run.v2.Jobs", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
JobsTracingStub::AsyncGetOperation(
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

future<Status> JobsTracingStub::AsyncCancelOperation(
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

std::shared_ptr<JobsStub> MakeJobsTracingStub(std::shared_ptr<JobsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<JobsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google
