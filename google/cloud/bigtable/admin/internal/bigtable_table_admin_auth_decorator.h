// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_TABLE_ADMIN_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_TABLE_ADMIN_AUTH_DECORATOR_H

#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigtableTableAdminAuth : public BigtableTableAdminStub {
 public:
  ~BigtableTableAdminAuth() override = default;
  BigtableTableAdminAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<BigtableTableAdminStub> child);

  StatusOr<google::bigtable::admin::v2::Table> CreateTable(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::CreateTableRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListTablesResponse> ListTables(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::ListTablesRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::Table> GetTable(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::GetTableRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTable(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::UpdateTableRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateTable(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::UpdateTableRequest const& request) override;

  Status DeleteTable(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::DeleteTableRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeleteTable(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::UndeleteTableRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UndeleteTable(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::UndeleteTableRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAuthorizedView(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::CreateAuthorizedViewRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateAuthorizedView(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::CreateAuthorizedViewRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::ListAuthorizedViewsResponse>
  ListAuthorizedViews(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::ListAuthorizedViewsRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::AuthorizedView> GetAuthorizedView(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::GetAuthorizedViewRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAuthorizedView(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::UpdateAuthorizedViewRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateAuthorizedView(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::UpdateAuthorizedViewRequest const& request)
      override;

  Status DeleteAuthorizedView(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::DeleteAuthorizedViewRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Table> ModifyColumnFamilies(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request)
      override;

  Status DropRowRange(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::DropRowRangeRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
  GenerateConsistencyToken(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
          request) override;

  StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
  CheckConsistency(grpc::ClientContext& context, Options const& options,
                   google::bigtable::admin::v2::CheckConsistencyRequest const&
                       request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::CreateBackupRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateBackup(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::CreateBackupRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::Backup> GetBackup(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::GetBackupRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::Backup> UpdateBackup(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::UpdateBackupRequest const& request) override;

  Status DeleteBackup(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::DeleteBackupRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListBackupsResponse> ListBackups(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::ListBackupsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreTable(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::RestoreTableRequest const& request) override;

  StatusOr<google::longrunning::Operation> RestoreTable(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::RestoreTableRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCopyBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::CopyBackupRequest const& request) override;

  StatusOr<google::longrunning::Operation> CopyBackup(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::CopyBackupRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
  AsyncCheckConsistency(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::CheckConsistencyRequest const& request)
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
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<BigtableTableAdminStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_TABLE_ADMIN_AUTH_DECORATOR_H
