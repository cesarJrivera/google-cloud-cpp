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

#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BigtableTableAdminTracingStub::BigtableTableAdminTracingStub(
    std::shared_ptr<BigtableTableAdminStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminTracingStub::CreateTable(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::CreateTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CreateTable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateTable(context, options, request));
}

StatusOr<google::bigtable::admin::v2::ListTablesResponse>
BigtableTableAdminTracingStub::ListTables(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListTablesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "ListTables");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTables(context, options, request));
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminTracingStub::GetTable(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "GetTable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTable(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncUpdateTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::UpdateTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "UpdateTable");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateTable(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingStub::UpdateTable(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::UpdateTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "UpdateTable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateTable(context, options, request));
}

Status BigtableTableAdminTracingStub::DeleteTable(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "DeleteTable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteTable(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncUndeleteTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::UndeleteTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "UndeleteTable");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUndeleteTable(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingStub::UndeleteTable(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::UndeleteTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "UndeleteTable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UndeleteTable(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncCreateAuthorizedView(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CreateAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CreateAuthorizedView");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateAuthorizedView(cq, context, std::move(options),
                                             request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingStub::CreateAuthorizedView(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::CreateAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CreateAuthorizedView");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateAuthorizedView(context, options, request));
}

StatusOr<google::bigtable::admin::v2::ListAuthorizedViewsResponse>
BigtableTableAdminTracingStub::ListAuthorizedViews(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListAuthorizedViewsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "ListAuthorizedViews");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListAuthorizedViews(context, options, request));
}

StatusOr<google::bigtable::admin::v2::AuthorizedView>
BigtableTableAdminTracingStub::GetAuthorizedView(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "GetAuthorizedView");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetAuthorizedView(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncUpdateAuthorizedView(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::UpdateAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "UpdateAuthorizedView");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateAuthorizedView(cq, context, std::move(options),
                                             request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingStub::UpdateAuthorizedView(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::UpdateAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "UpdateAuthorizedView");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateAuthorizedView(context, options, request));
}

Status BigtableTableAdminTracingStub::DeleteAuthorizedView(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "DeleteAuthorizedView");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteAuthorizedView(context, options, request));
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminTracingStub::ModifyColumnFamilies(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "ModifyColumnFamilies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ModifyColumnFamilies(context, options, request));
}

Status BigtableTableAdminTracingStub::DropRowRange(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DropRowRangeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "DropRowRange");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DropRowRange(context, options, request));
}

StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
BigtableTableAdminTracingStub::GenerateConsistencyToken(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.admin.v2.BigtableTableAdmin",
                             "GenerateConsistencyToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GenerateConsistencyToken(context, options, request));
}

StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
BigtableTableAdminTracingStub::CheckConsistency(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CheckConsistency");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CheckConsistency(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CreateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CreateBackup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateBackup(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingStub::CreateBackup(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::CreateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CreateBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateBackup(context, options, request));
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminTracingStub::GetBackup(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetBackup(context, options, request));
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminTracingStub::UpdateBackup(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::UpdateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "UpdateBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateBackup(context, options, request));
}

Status BigtableTableAdminTracingStub::DeleteBackup(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "DeleteBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteBackup(context, options, request));
}

StatusOr<google::bigtable::admin::v2::ListBackupsResponse>
BigtableTableAdminTracingStub::ListBackups(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListBackupsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "ListBackups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBackups(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncRestoreTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::RestoreTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "RestoreTable");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRestoreTable(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingStub::RestoreTable(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::RestoreTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "RestoreTable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RestoreTable(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncCopyBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CopyBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CopyBackup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCopyBackup(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingStub::CopyBackup(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::CopyBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CopyBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CopyBackup(context, options, request));
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableTableAdminTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
BigtableTableAdminTracingStub::AsyncCheckConsistency(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CheckConsistency");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCheckConsistency(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncGetOperation(
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

future<Status> BigtableTableAdminTracingStub::AsyncCancelOperation(
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

std::shared_ptr<BigtableTableAdminStub> MakeBigtableTableAdminTracingStub(
    std::shared_ptr<BigtableTableAdminStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<BigtableTableAdminTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google
