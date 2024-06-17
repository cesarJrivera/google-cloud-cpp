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
// source: google/cloud/aiplatform/v1/metadata_service.proto

#include "google/cloud/aiplatform/v1/internal/metadata_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MetadataServiceTracingStub::MetadataServiceTracingStub(
    std::shared_ptr<MetadataServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceTracingStub::AsyncCreateMetadataStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "CreateMetadataStore");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateMetadataStore(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
MetadataServiceTracingStub::CreateMetadataStore(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "CreateMetadataStore");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateMetadataStore(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::MetadataStore>
MetadataServiceTracingStub::GetMetadataStore(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetMetadataStoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "GetMetadataStore");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetMetadataStore(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListMetadataStoresResponse>
MetadataServiceTracingStub::ListMetadataStores(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListMetadataStoresRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "ListMetadataStores");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListMetadataStores(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceTracingStub::AsyncDeleteMetadataStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "DeleteMetadataStore");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteMetadataStore(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
MetadataServiceTracingStub::DeleteMetadataStore(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "DeleteMetadataStore");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteMetadataStore(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceTracingStub::CreateArtifact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateArtifactRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "CreateArtifact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateArtifact(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceTracingStub::GetArtifact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetArtifactRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "GetArtifact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetArtifact(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListArtifactsResponse>
MetadataServiceTracingStub::ListArtifacts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListArtifactsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "ListArtifacts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListArtifacts(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceTracingStub::UpdateArtifact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateArtifactRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "UpdateArtifact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateArtifact(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceTracingStub::AsyncDeleteArtifact(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteArtifactRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "DeleteArtifact");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteArtifact(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
MetadataServiceTracingStub::DeleteArtifact(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteArtifactRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "DeleteArtifact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteArtifact(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceTracingStub::AsyncPurgeArtifacts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "PurgeArtifacts");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncPurgeArtifacts(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
MetadataServiceTracingStub::PurgeArtifacts(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "PurgeArtifacts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->PurgeArtifacts(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceTracingStub::CreateContext(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateContextRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "CreateContext");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateContext(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceTracingStub::GetContext(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetContextRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "GetContext");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetContext(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListContextsResponse>
MetadataServiceTracingStub::ListContexts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListContextsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "ListContexts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListContexts(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceTracingStub::UpdateContext(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateContextRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "UpdateContext");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateContext(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceTracingStub::AsyncDeleteContext(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteContextRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "DeleteContext");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteContext(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
MetadataServiceTracingStub::DeleteContext(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteContextRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "DeleteContext");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteContext(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceTracingStub::AsyncPurgeContexts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::PurgeContextsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "PurgeContexts");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncPurgeContexts(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
MetadataServiceTracingStub::PurgeContexts(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::PurgeContextsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "PurgeContexts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->PurgeContexts(context, options, request));
}

StatusOr<
    google::cloud::aiplatform::v1::AddContextArtifactsAndExecutionsResponse>
MetadataServiceTracingStub::AddContextArtifactsAndExecutions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        AddContextArtifactsAndExecutionsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.MetadataService",
                             "AddContextArtifactsAndExecutions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->AddContextArtifactsAndExecutions(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::AddContextChildrenResponse>
MetadataServiceTracingStub::AddContextChildren(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::AddContextChildrenRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "AddContextChildren");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->AddContextChildren(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::RemoveContextChildrenResponse>
MetadataServiceTracingStub::RemoveContextChildren(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "RemoveContextChildren");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->RemoveContextChildren(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceTracingStub::QueryContextLineageSubgraph(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.MetadataService",
                             "QueryContextLineageSubgraph");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->QueryContextLineageSubgraph(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceTracingStub::CreateExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateExecutionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "CreateExecution");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateExecution(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceTracingStub::GetExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetExecutionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "GetExecution");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetExecution(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListExecutionsResponse>
MetadataServiceTracingStub::ListExecutions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListExecutionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "ListExecutions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListExecutions(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceTracingStub::UpdateExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateExecutionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "UpdateExecution");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateExecution(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceTracingStub::AsyncDeleteExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteExecutionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "DeleteExecution");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteExecution(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
MetadataServiceTracingStub::DeleteExecution(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteExecutionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "DeleteExecution");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteExecution(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceTracingStub::AsyncPurgeExecutions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "PurgeExecutions");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncPurgeExecutions(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
MetadataServiceTracingStub::PurgeExecutions(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "PurgeExecutions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->PurgeExecutions(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::AddExecutionEventsResponse>
MetadataServiceTracingStub::AddExecutionEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::AddExecutionEventsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "AddExecutionEvents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->AddExecutionEvents(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceTracingStub::QueryExecutionInputsAndOutputs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::QueryExecutionInputsAndOutputsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.MetadataService",
                             "QueryExecutionInputsAndOutputs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->QueryExecutionInputsAndOutputs(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceTracingStub::CreateMetadataSchema(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "CreateMetadataSchema");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateMetadataSchema(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceTracingStub::GetMetadataSchema(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetMetadataSchemaRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "GetMetadataSchema");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetMetadataSchema(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListMetadataSchemasResponse>
MetadataServiceTracingStub::ListMetadataSchemas(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListMetadataSchemasRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.MetadataService", "ListMetadataSchemas");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListMetadataSchemas(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceTracingStub::QueryArtifactLineageSubgraph(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.MetadataService",
                             "QueryArtifactLineageSubgraph");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->QueryArtifactLineageSubgraph(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceTracingStub::AsyncGetOperation(
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

future<Status> MetadataServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<MetadataServiceStub> MakeMetadataServiceTracingStub(
    std::shared_ptr<MetadataServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<MetadataServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
