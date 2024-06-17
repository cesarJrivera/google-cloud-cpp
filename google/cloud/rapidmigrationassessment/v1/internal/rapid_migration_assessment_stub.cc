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
// source:
// google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.proto

#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace rapidmigrationassessment_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RapidMigrationAssessmentStub::~RapidMigrationAssessmentStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultRapidMigrationAssessmentStub::AsyncCreateCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::rapidmigrationassessment::v1::CreateCollectorRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::rapidmigrationassessment::v1::CreateCollectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::rapidmigrationassessment::v1::
                 CreateCollectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCollector(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultRapidMigrationAssessmentStub::CreateCollector(
    grpc::ClientContext& context, Options,
    google::cloud::rapidmigrationassessment::v1::CreateCollectorRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateCollector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRapidMigrationAssessmentStub::AsyncCreateAnnotation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::rapidmigrationassessment::v1::CreateAnnotationRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::rapidmigrationassessment::v1::CreateAnnotationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::rapidmigrationassessment::v1::
                 CreateAnnotationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAnnotation(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultRapidMigrationAssessmentStub::CreateAnnotation(
    grpc::ClientContext& context, Options,
    google::cloud::rapidmigrationassessment::v1::CreateAnnotationRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateAnnotation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>
DefaultRapidMigrationAssessmentStub::GetAnnotation(
    grpc::ClientContext& context, Options const&,
    google::cloud::rapidmigrationassessment::v1::GetAnnotationRequest const&
        request) {
  google::cloud::rapidmigrationassessment::v1::Annotation response;
  auto status = grpc_stub_->GetAnnotation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::rapidmigrationassessment::v1::ListCollectorsResponse>
DefaultRapidMigrationAssessmentStub::ListCollectors(
    grpc::ClientContext& context, Options const&,
    google::cloud::rapidmigrationassessment::v1::ListCollectorsRequest const&
        request) {
  google::cloud::rapidmigrationassessment::v1::ListCollectorsResponse response;
  auto status = grpc_stub_->ListCollectors(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>
DefaultRapidMigrationAssessmentStub::GetCollector(
    grpc::ClientContext& context, Options const&,
    google::cloud::rapidmigrationassessment::v1::GetCollectorRequest const&
        request) {
  google::cloud::rapidmigrationassessment::v1::Collector response;
  auto status = grpc_stub_->GetCollector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRapidMigrationAssessmentStub::AsyncUpdateCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::rapidmigrationassessment::v1::UpdateCollectorRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::rapidmigrationassessment::v1::UpdateCollectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::rapidmigrationassessment::v1::
                 UpdateCollectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCollector(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultRapidMigrationAssessmentStub::UpdateCollector(
    grpc::ClientContext& context, Options,
    google::cloud::rapidmigrationassessment::v1::UpdateCollectorRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateCollector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRapidMigrationAssessmentStub::AsyncDeleteCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::rapidmigrationassessment::v1::DeleteCollectorRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::rapidmigrationassessment::v1::DeleteCollectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::rapidmigrationassessment::v1::
                 DeleteCollectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCollector(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultRapidMigrationAssessmentStub::DeleteCollector(
    grpc::ClientContext& context, Options,
    google::cloud::rapidmigrationassessment::v1::DeleteCollectorRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteCollector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRapidMigrationAssessmentStub::AsyncResumeCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::rapidmigrationassessment::v1::ResumeCollectorRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::rapidmigrationassessment::v1::ResumeCollectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::rapidmigrationassessment::v1::
                 ResumeCollectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncResumeCollector(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultRapidMigrationAssessmentStub::ResumeCollector(
    grpc::ClientContext& context, Options,
    google::cloud::rapidmigrationassessment::v1::ResumeCollectorRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ResumeCollector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRapidMigrationAssessmentStub::AsyncRegisterCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::rapidmigrationassessment::v1::RegisterCollectorRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::rapidmigrationassessment::v1::RegisterCollectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::rapidmigrationassessment::v1::
                 RegisterCollectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRegisterCollector(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultRapidMigrationAssessmentStub::RegisterCollector(
    grpc::ClientContext& context, Options,
    google::cloud::rapidmigrationassessment::v1::RegisterCollectorRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->RegisterCollector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRapidMigrationAssessmentStub::AsyncPauseCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::rapidmigrationassessment::v1::
                 PauseCollectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncPauseCollector(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultRapidMigrationAssessmentStub::PauseCollector(
    grpc::ClientContext& context, Options,
    google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->PauseCollector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRapidMigrationAssessmentStub::AsyncGetOperation(
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

future<Status> DefaultRapidMigrationAssessmentStub::AsyncCancelOperation(
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
}  // namespace rapidmigrationassessment_v1_internal
}  // namespace cloud
}  // namespace google
