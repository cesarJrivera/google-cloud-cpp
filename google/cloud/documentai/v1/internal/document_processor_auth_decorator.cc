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
// source: google/cloud/documentai/v1/document_processor_service.proto

#include "google/cloud/documentai/v1/internal/document_processor_auth_decorator.h"
#include <google/cloud/documentai/v1/document_processor_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace documentai_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentProcessorServiceAuth::DocumentProcessorServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DocumentProcessorServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DocumentProcessorServiceAuth::ProcessDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ProcessRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ProcessDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncBatchProcessDocuments(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBatchProcessDocuments(cq, *std::move(context),
                                                 std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::BatchProcessDocuments(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->BatchProcessDocuments(context, options, request);
}

StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
DocumentProcessorServiceAuth::FetchProcessorTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::FetchProcessorTypesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->FetchProcessorTypes(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ListProcessorTypesResponse>
DocumentProcessorServiceAuth::ListProcessorTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListProcessorTypesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListProcessorTypes(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ProcessorType>
DocumentProcessorServiceAuth::GetProcessorType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetProcessorTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetProcessorType(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ListProcessorsResponse>
DocumentProcessorServiceAuth::ListProcessors(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListProcessorsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListProcessors(context, options, request);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceAuth::GetProcessor(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetProcessorRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetProcessor(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncTrainProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::TrainProcessorVersionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncTrainProcessorVersion(cq, *std::move(context),
                                                 std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::TrainProcessorVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::TrainProcessorVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TrainProcessorVersion(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceAuth::GetProcessorVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetProcessorVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetProcessorVersion(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ListProcessorVersionsResponse>
DocumentProcessorServiceAuth::ListProcessorVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListProcessorVersionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListProcessorVersions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncDeleteProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteProcessorVersion(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::DeleteProcessorVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteProcessorVersion(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncDeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeployProcessorVersion(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::DeployProcessorVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeployProcessorVersion(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncUndeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUndeployProcessorVersion(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::UndeployProcessorVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UndeployProcessorVersion(context, options, request);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceAuth::CreateProcessor(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::CreateProcessorRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateProcessor(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncDeleteProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DeleteProcessorRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteProcessor(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::DeleteProcessor(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::DeleteProcessorRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteProcessor(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncEnableProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::EnableProcessorRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncEnableProcessor(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::EnableProcessor(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::EnableProcessorRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->EnableProcessor(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncDisableProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DisableProcessorRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDisableProcessor(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::DisableProcessor(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::DisableProcessorRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DisableProcessor(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncSetDefaultProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncSetDefaultProcessorVersion(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::SetDefaultProcessorVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetDefaultProcessorVersion(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncReviewDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncReviewDocument(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::ReviewDocument(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReviewDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncEvaluateProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncEvaluateProcessorVersion(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceAuth::EvaluateProcessorVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->EvaluateProcessorVersion(context, options, request);
}

StatusOr<google::cloud::documentai::v1::Evaluation>
DocumentProcessorServiceAuth::GetEvaluation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetEvaluationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEvaluation(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ListEvaluationsResponse>
DocumentProcessorServiceAuth::ListEvaluations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListEvaluationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEvaluations(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> DocumentProcessorServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1_internal
}  // namespace cloud
}  // namespace google
