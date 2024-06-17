// Copyright 2024 Google LLC
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
// source: google/cloud/aiplatform/v1/notebook_service.proto

#include "google/cloud/aiplatform/v1/internal/notebook_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/notebook_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotebookServiceLogging::NotebookServiceLogging(
    std::shared_ptr<NotebookServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncCreateNotebookRuntimeTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateNotebookRuntimeTemplateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::
                 CreateNotebookRuntimeTemplateRequest const& request) {
        return child_->AsyncCreateNotebookRuntimeTemplate(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NotebookServiceLogging::CreateNotebookRuntimeTemplate(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateNotebookRuntimeTemplateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 CreateNotebookRuntimeTemplateRequest const& request) {
        return child_->CreateNotebookRuntimeTemplate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>
NotebookServiceLogging::GetNotebookRuntimeTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetNotebookRuntimeTemplateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 GetNotebookRuntimeTemplateRequest const& request) {
        return child_->GetNotebookRuntimeTemplate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListNotebookRuntimeTemplatesResponse>
NotebookServiceLogging::ListNotebookRuntimeTemplates(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListNotebookRuntimeTemplatesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 ListNotebookRuntimeTemplatesRequest const& request) {
        return child_->ListNotebookRuntimeTemplates(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncDeleteNotebookRuntimeTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteNotebookRuntimeTemplateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::
                 DeleteNotebookRuntimeTemplateRequest const& request) {
        return child_->AsyncDeleteNotebookRuntimeTemplate(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NotebookServiceLogging::DeleteNotebookRuntimeTemplate(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteNotebookRuntimeTemplateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 DeleteNotebookRuntimeTemplateRequest const& request) {
        return child_->DeleteNotebookRuntimeTemplate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>
NotebookServiceLogging::UpdateNotebookRuntimeTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateNotebookRuntimeTemplateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 UpdateNotebookRuntimeTemplateRequest const& request) {
        return child_->UpdateNotebookRuntimeTemplate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncAssignNotebookRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::AssignNotebookRuntimeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::AssignNotebookRuntimeRequest const&
                 request) {
        return child_->AsyncAssignNotebookRuntime(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NotebookServiceLogging::AssignNotebookRuntime(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::AssignNotebookRuntimeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::AssignNotebookRuntimeRequest const&
                 request) {
        return child_->AssignNotebookRuntime(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::NotebookRuntime>
NotebookServiceLogging::GetNotebookRuntime(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetNotebookRuntimeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetNotebookRuntimeRequest const&
                 request) {
        return child_->GetNotebookRuntime(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListNotebookRuntimesResponse>
NotebookServiceLogging::ListNotebookRuntimes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListNotebookRuntimesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListNotebookRuntimesRequest const&
                 request) {
        return child_->ListNotebookRuntimes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncDeleteNotebookRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteNotebookRuntimeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::DeleteNotebookRuntimeRequest const&
                 request) {
        return child_->AsyncDeleteNotebookRuntime(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NotebookServiceLogging::DeleteNotebookRuntime(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteNotebookRuntimeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::DeleteNotebookRuntimeRequest const&
                 request) {
        return child_->DeleteNotebookRuntime(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncUpgradeNotebookRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpgradeNotebookRuntimeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::UpgradeNotebookRuntimeRequest const&
                 request) {
        return child_->AsyncUpgradeNotebookRuntime(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NotebookServiceLogging::UpgradeNotebookRuntime(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UpgradeNotebookRuntimeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::UpgradeNotebookRuntimeRequest const&
                 request) {
        return child_->UpgradeNotebookRuntime(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncStartNotebookRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::StartNotebookRuntimeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::StartNotebookRuntimeRequest const&
                 request) {
        return child_->AsyncStartNotebookRuntime(cq, std::move(context),
                                                 std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NotebookServiceLogging::StartNotebookRuntime(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::StartNotebookRuntimeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::StartNotebookRuntimeRequest const&
                 request) {
        return child_->StartNotebookRuntime(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncGetOperation(
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

future<Status> NotebookServiceLogging::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
