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
// source: google/cloud/translate/v3/translation_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/translate/v3/translation_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TranslationServiceStub {
 public:
  virtual ~TranslationServiceStub() = 0;

  virtual StatusOr<google::cloud::translation::v3::TranslateTextResponse>
  TranslateText(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::TranslateTextRequest const& request) = 0;

  virtual StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
  DetectLanguage(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::DetectLanguageRequest const& request) = 0;

  virtual StatusOr<google::cloud::translation::v3::SupportedLanguages>
  GetSupportedLanguages(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetSupportedLanguagesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
  TranslateDocument(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::TranslateDocumentRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncBatchTranslateText(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::BatchTranslateTextRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> BatchTranslateText(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::BatchTranslateTextRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncBatchTranslateDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> BatchTranslateDocument(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::CreateGlossaryRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateGlossary(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::CreateGlossaryRequest const& request) = 0;

  virtual StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
  ListGlossaries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListGlossariesRequest const& request) = 0;

  virtual StatusOr<google::cloud::translation::v3::Glossary> GetGlossary(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetGlossaryRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::DeleteGlossaryRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteGlossary(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::DeleteGlossaryRequest const& request) = 0;

  virtual StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  CreateAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
          request) = 0;

  virtual Status DeleteAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  GetAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse>
  ListAdaptiveMtDatasets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
  AdaptiveMtTranslate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::AdaptiveMtTranslateRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
  GetAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetAdaptiveMtFileRequest const&
          request) = 0;

  virtual Status DeleteAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
  ImportAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::translation::v3::ListAdaptiveMtFilesResponse>
  ListAdaptiveMtFiles(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtFilesRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::translation::v3::ListAdaptiveMtSentencesResponse>
  ListAdaptiveMtSentences(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultTranslationServiceStub : public TranslationServiceStub {
 public:
  DefaultTranslationServiceStub(
      std::unique_ptr<
          google::cloud::translation::v3::TranslationService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::translation::v3::TranslateTextResponse> TranslateText(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::TranslateTextRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
  DetectLanguage(grpc::ClientContext& context, Options const& options,
                 google::cloud::translation::v3::DetectLanguageRequest const&
                     request) override;

  StatusOr<google::cloud::translation::v3::SupportedLanguages>
  GetSupportedLanguages(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetSupportedLanguagesRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
  TranslateDocument(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::TranslateDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchTranslateText(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::BatchTranslateTextRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchTranslateText(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::BatchTranslateTextRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchTranslateDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchTranslateDocument(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::CreateGlossaryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateGlossary(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::CreateGlossaryRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
  ListGlossaries(grpc::ClientContext& context, Options const& options,
                 google::cloud::translation::v3::ListGlossariesRequest const&
                     request) override;

  StatusOr<google::cloud::translation::v3::Glossary> GetGlossary(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetGlossaryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::DeleteGlossaryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteGlossary(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::DeleteGlossaryRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  CreateAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
          request) override;

  Status DeleteAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  GetAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse>
  ListAdaptiveMtDatasets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
  AdaptiveMtTranslate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtFile> GetAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request)
      override;

  Status DeleteAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
  ImportAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::ListAdaptiveMtFilesResponse>
  ListAdaptiveMtFiles(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtFilesRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListAdaptiveMtSentencesResponse>
  ListAdaptiveMtSentences(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
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
  std::unique_ptr<
      google::cloud::translation::v3::TranslationService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_STUB_H
