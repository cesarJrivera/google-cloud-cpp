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
// source: google/cloud/dialogflow/v2/entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENTITY_TYPES_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENTITY_TYPES_TRACING_STUB_H

#include "google/cloud/dialogflow_es/internal/entity_types_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class EntityTypesTracingStub : public EntityTypesStub {
 public:
  ~EntityTypesTracingStub() override = default;

  explicit EntityTypesTracingStub(std::shared_ptr<EntityTypesStub> child);

  StatusOr<google::cloud::dialogflow::v2::ListEntityTypesResponse>
  ListEntityTypes(grpc::ClientContext& context, Options const& options,
                  google::cloud::dialogflow::v2::ListEntityTypesRequest const&
                      request) override;

  StatusOr<google::cloud::dialogflow::v2::EntityType> GetEntityType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GetEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::EntityType> CreateEntityType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::EntityType> UpdateEntityType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request)
      override;

  Status DeleteEntityType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchUpdateEntityTypes(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchUpdateEntityTypes(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchDeleteEntityTypes(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchDeleteEntityTypes(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchCreateEntities(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchCreateEntities(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchUpdateEntities(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchUpdateEntities(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchDeleteEntities(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchDeleteEntities(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<EntityTypesStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<EntityTypesStub> MakeEntityTypesTracingStub(
    std::shared_ptr<EntityTypesStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENTITY_TYPES_TRACING_STUB_H
