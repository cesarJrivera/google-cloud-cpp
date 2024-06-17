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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#include "google/cloud/cloudbuild/v1/internal/cloud_build_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace cloudbuild_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudBuildTracingStub::CloudBuildTracingStub(
    std::shared_ptr<CloudBuildStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
CloudBuildTracingStub::AsyncCreateBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::CreateBuildRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "CreateBuild");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateBuild(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> CloudBuildTracingStub::CreateBuild(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::CreateBuildRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "CreateBuild");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateBuild(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v1::Build>
CloudBuildTracingStub::GetBuild(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::GetBuildRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "GetBuild");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetBuild(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v1::ListBuildsResponse>
CloudBuildTracingStub::ListBuilds(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ListBuildsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "ListBuilds");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBuilds(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v1::Build>
CloudBuildTracingStub::CancelBuild(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::CancelBuildRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "CancelBuild");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelBuild(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildTracingStub::AsyncRetryBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::RetryBuildRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "RetryBuild");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRetryBuild(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> CloudBuildTracingStub::RetryBuild(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::RetryBuildRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "RetryBuild");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RetryBuild(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildTracingStub::AsyncApproveBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::ApproveBuildRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "ApproveBuild");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncApproveBuild(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> CloudBuildTracingStub::ApproveBuild(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::ApproveBuildRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "ApproveBuild");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ApproveBuild(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildTracingStub::CreateBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "CreateBuildTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateBuildTrigger(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildTracingStub::GetBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "GetBuildTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetBuildTrigger(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v1::ListBuildTriggersResponse>
CloudBuildTracingStub::ListBuildTriggers(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ListBuildTriggersRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "ListBuildTriggers");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListBuildTriggers(context, options, request));
}

Status CloudBuildTracingStub::DeleteBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "DeleteBuildTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteBuildTrigger(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildTracingStub::UpdateBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "UpdateBuildTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateBuildTrigger(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildTracingStub::AsyncRunBuildTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "RunBuildTrigger");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncRunBuildTrigger(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> CloudBuildTracingStub::RunBuildTrigger(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "RunBuildTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RunBuildTrigger(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
CloudBuildTracingStub::ReceiveTriggerWebhook(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "ReceiveTriggerWebhook");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ReceiveTriggerWebhook(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildTracingStub::AsyncCreateWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "CreateWorkerPool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateWorkerPool(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
CloudBuildTracingStub::CreateWorkerPool(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "CreateWorkerPool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateWorkerPool(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildTracingStub::GetWorkerPool(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "GetWorkerPool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetWorkerPool(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildTracingStub::AsyncDeleteWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "DeleteWorkerPool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteWorkerPool(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
CloudBuildTracingStub::DeleteWorkerPool(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "DeleteWorkerPool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteWorkerPool(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildTracingStub::AsyncUpdateWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "UpdateWorkerPool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateWorkerPool(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
CloudBuildTracingStub::UpdateWorkerPool(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "UpdateWorkerPool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateWorkerPool(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v1::ListWorkerPoolsResponse>
CloudBuildTracingStub::ListWorkerPools(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.devtools.cloudbuild.v1.CloudBuild",
                                     "ListWorkerPools");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListWorkerPools(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildTracingStub::AsyncGetOperation(
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

future<Status> CloudBuildTracingStub::AsyncCancelOperation(
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

std::shared_ptr<CloudBuildStub> MakeCloudBuildTracingStub(
    std::shared_ptr<CloudBuildStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CloudBuildTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v1_internal
}  // namespace cloud
}  // namespace google
