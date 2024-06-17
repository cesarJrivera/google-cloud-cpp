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
// source: google/cloud/gkebackup/v1/gkebackup.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_INTERNAL_BACKUP_FOR_GKE_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_INTERNAL_BACKUP_FOR_GKE_TRACING_STUB_H

#include "google/cloud/gkebackup/v1/internal/backup_for_gke_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace gkebackup_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class BackupForGKETracingStub : public BackupForGKEStub {
 public:
  ~BackupForGKETracingStub() override = default;

  explicit BackupForGKETracingStub(std::shared_ptr<BackupForGKEStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackupPlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateBackupPlan(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListBackupPlansResponse>
  ListBackupPlans(grpc::ClientContext& context, Options const& options,
                  google::cloud::gkebackup::v1::ListBackupPlansRequest const&
                      request) override;

  StatusOr<google::cloud::gkebackup::v1::BackupPlan> GetBackupPlan(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::GetBackupPlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBackupPlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateBackupPlan(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackupPlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteBackupPlan(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::CreateBackupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateBackup(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::CreateBackupRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListBackupsResponse> ListBackups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::ListBackupsRequest const& request) override;

  StatusOr<google::cloud::gkebackup::v1::Backup> GetBackup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::UpdateBackupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateBackup(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::UpdateBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::DeleteBackupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteBackup(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::DeleteBackupRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListVolumeBackupsResponse>
  ListVolumeBackups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::ListVolumeBackupsRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::VolumeBackup> GetVolumeBackup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::GetVolumeBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRestorePlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateRestorePlan(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListRestorePlansResponse>
  ListRestorePlans(grpc::ClientContext& context, Options const& options,
                   google::cloud::gkebackup::v1::ListRestorePlansRequest const&
                       request) override;

  StatusOr<google::cloud::gkebackup::v1::RestorePlan> GetRestorePlan(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::GetRestorePlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRestorePlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateRestorePlan(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRestorePlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteRestorePlan(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::CreateRestoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateRestore(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::CreateRestoreRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListRestoresResponse> ListRestores(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::ListRestoresRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::Restore> GetRestore(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::GetRestoreRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::UpdateRestoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateRestore(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::UpdateRestoreRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkebackup::v1::DeleteRestoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteRestore(
      grpc::ClientContext& context, Options options,
      google::cloud::gkebackup::v1::DeleteRestoreRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListVolumeRestoresResponse>
  ListVolumeRestores(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::ListVolumeRestoresRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::VolumeRestore> GetVolumeRestore(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::GetVolumeRestoreRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlResponse>
  GetBackupIndexDownloadUrl(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlRequest const&
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
  std::shared_ptr<BackupForGKEStub> child_;
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
std::shared_ptr<BackupForGKEStub> MakeBackupForGKETracingStub(
    std::shared_ptr<BackupForGKEStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkebackup_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_INTERNAL_BACKUP_FOR_GKE_TRACING_STUB_H
