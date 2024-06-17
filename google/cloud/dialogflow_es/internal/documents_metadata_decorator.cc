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
// source: google/cloud/dialogflow/v2/document.proto

#include "google/cloud/dialogflow_es/internal/documents_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/document.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentsMetadata::DocumentsMetadata(
    std::shared_ptr<DocumentsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::v2::ListDocumentsResponse>
DocumentsMetadata::ListDocuments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListDocumentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDocuments(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::Document>
DocumentsMetadata::GetDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetDocumentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncCreateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::CreateDocumentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDocument(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> DocumentsMetadata::CreateDocument(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::CreateDocumentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncImportDocuments(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::ImportDocumentsRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncImportDocuments(cq, std::move(context),
                                      std::move(options), request);
}

StatusOr<google::longrunning::Operation> DocumentsMetadata::ImportDocuments(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::ImportDocumentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ImportDocuments(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncDeleteDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::DeleteDocumentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDocument(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> DocumentsMetadata::DeleteDocument(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::DeleteDocumentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncUpdateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::UpdateDocumentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("document.name=",
                           internal::UrlEncode(request.document().name())));
  return child_->AsyncUpdateDocument(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> DocumentsMetadata::UpdateDocument(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::UpdateDocumentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("document.name=",
                           internal::UrlEncode(request.document().name())));
  return child_->UpdateDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncReloadDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::ReloadDocumentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncReloadDocument(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> DocumentsMetadata::ReloadDocument(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::ReloadDocumentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ReloadDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncExportDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::ExportDocumentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncExportDocument(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> DocumentsMetadata::ExportDocument(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::ExportDocumentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ExportDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> DocumentsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void DocumentsMetadata::SetMetadata(grpc::ClientContext& context,
                                    Options const& options,
                                    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void DocumentsMetadata::SetMetadata(grpc::ClientContext& context,
                                    Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
