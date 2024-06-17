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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_DATA_CATALOG_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_DATA_CATALOG_LOGGING_DECORATOR_H

#include "google/cloud/datacatalog/v1/internal/data_catalog_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataCatalogLogging : public DataCatalogStub {
 public:
  ~DataCatalogLogging() override = default;
  DataCatalogLogging(std::shared_ptr<DataCatalogStub> child,
                     TracingOptions tracing_options,
                     std::set<std::string> const& components);

  StatusOr<google::cloud::datacatalog::v1::SearchCatalogResponse> SearchCatalog(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::SearchCatalogRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::EntryGroup> CreateEntryGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::EntryGroup> GetEntryGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::GetEntryGroupRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::EntryGroup> UpdateEntryGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request)
      override;

  Status DeleteEntryGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ListEntryGroupsResponse>
  ListEntryGroups(grpc::ClientContext& context, Options const& options,
                  google::cloud::datacatalog::v1::ListEntryGroupsRequest const&
                      request) override;

  StatusOr<google::cloud::datacatalog::v1::Entry> CreateEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::CreateEntryRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::Entry> UpdateEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::UpdateEntryRequest const& request)
      override;

  Status DeleteEntry(grpc::ClientContext& context, Options const& options,
                     google::cloud::datacatalog::v1::DeleteEntryRequest const&
                         request) override;

  StatusOr<google::cloud::datacatalog::v1::Entry> GetEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::GetEntryRequest const& request) override;

  StatusOr<google::cloud::datacatalog::v1::Entry> LookupEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::LookupEntryRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ListEntriesResponse> ListEntries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::ListEntriesRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::EntryOverview> ModifyEntryOverview(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::Contacts> ModifyEntryContacts(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::ModifyEntryContactsRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplate> CreateTagTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplate> GetTagTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::GetTagTemplateRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplate> UpdateTagTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request)
      override;

  Status DeleteTagTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  CreateTagTemplateField(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  UpdateTagTemplateField(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  RenameTagTemplateField(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  RenameTagTemplateFieldEnumValue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::
          RenameTagTemplateFieldEnumValueRequest const& request) override;

  Status DeleteTagTemplateField(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::v1::Tag> CreateTag(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::CreateTagRequest const& request) override;

  StatusOr<google::cloud::datacatalog::v1::Tag> UpdateTag(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::UpdateTagRequest const& request) override;

  Status DeleteTag(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::DeleteTagRequest const& request) override;

  StatusOr<google::cloud::datacatalog::v1::ListTagsResponse> ListTags(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::ListTagsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncReconcileTags(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datacatalog::v1::ReconcileTagsRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ReconcileTags(
      grpc::ClientContext& context, Options options,
      google::cloud::datacatalog::v1::ReconcileTagsRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::StarEntryResponse> StarEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::StarEntryRequest const& request) override;

  StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse> UnstarEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::UnstarEntryRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportEntries(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datacatalog::v1::ImportEntriesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ImportEntries(
      grpc::ClientContext& context, Options options,
      google::cloud::datacatalog::v1::ImportEntriesRequest const& request)
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
  std::shared_ptr<DataCatalogStub> child_;
  TracingOptions tracing_options_;
};  // DataCatalogLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_DATA_CATALOG_LOGGING_DECORATOR_H
