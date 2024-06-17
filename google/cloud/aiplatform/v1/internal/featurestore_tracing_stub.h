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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURESTORE_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURESTORE_TRACING_STUB_H

#include "google/cloud/aiplatform/v1/internal/featurestore_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class FeaturestoreServiceTracingStub : public FeaturestoreServiceStub {
 public:
  ~FeaturestoreServiceTracingStub() override = default;

  explicit FeaturestoreServiceTracingStub(
      std::shared_ptr<FeaturestoreServiceStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFeaturestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFeaturestore(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Featurestore> GetFeaturestore(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListFeaturestoresResponse>
  ListFeaturestores(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListFeaturestoresRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFeaturestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateFeaturestore(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeaturestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFeaturestore(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEntityType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEntityType(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::EntityType> GetEntityType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListEntityTypesResponse>
  ListEntityTypes(grpc::ClientContext& context, Options const& options,
                  google::cloud::aiplatform::v1::ListEntityTypesRequest const&
                      request) override;

  StatusOr<google::cloud::aiplatform::v1::EntityType> UpdateEntityType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEntityType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteEntityType(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::CreateFeatureRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFeature(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::CreateFeatureRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchCreateFeatures(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchCreateFeatures(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Feature> GetFeature(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetFeatureRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListFeaturesResponse> ListFeatures(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListFeaturesRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Feature> UpdateFeature(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::UpdateFeatureRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteFeatureRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFeature(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteFeatureRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ImportFeatureValues(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchReadFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchReadFeatureValues(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ExportFeatureValues(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFeatureValues(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::SearchFeaturesResponse>
  SearchFeatures(grpc::ClientContext& context, Options const& options,
                 google::cloud::aiplatform::v1::SearchFeaturesRequest const&
                     request) override;

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
  std::shared_ptr<FeaturestoreServiceStub> child_;
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
std::shared_ptr<FeaturestoreServiceStub> MakeFeaturestoreServiceTracingStub(
    std::shared_ptr<FeaturestoreServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURESTORE_TRACING_STUB_H
