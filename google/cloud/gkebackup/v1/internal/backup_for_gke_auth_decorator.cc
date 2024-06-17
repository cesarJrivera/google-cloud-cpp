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

#include "google/cloud/gkebackup/v1/internal/backup_for_gke_auth_decorator.h"
#include <google/cloud/gkebackup/v1/gkebackup.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkebackup_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BackupForGKEAuth::BackupForGKEAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<BackupForGKEStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncCreateBackupPlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateBackupPlan(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::CreateBackupPlan(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateBackupPlan(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::ListBackupPlansResponse>
BackupForGKEAuth::ListBackupPlans(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::ListBackupPlansRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBackupPlans(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::BackupPlan>
BackupForGKEAuth::GetBackupPlan(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::GetBackupPlanRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBackupPlan(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncUpdateBackupPlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateBackupPlan(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::UpdateBackupPlan(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateBackupPlan(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncDeleteBackupPlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteBackupPlan(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::DeleteBackupPlan(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteBackupPlan(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::CreateBackupRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateBackup(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::CreateBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::CreateBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateBackup(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::ListBackupsResponse>
BackupForGKEAuth::ListBackups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::ListBackupsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBackups(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::Backup> BackupForGKEAuth::GetBackup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::GetBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncUpdateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::UpdateBackupRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateBackup(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::UpdateBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::UpdateBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::DeleteBackupRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteBackup(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::DeleteBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::DeleteBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteBackup(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::ListVolumeBackupsResponse>
BackupForGKEAuth::ListVolumeBackups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::ListVolumeBackupsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListVolumeBackups(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::VolumeBackup>
BackupForGKEAuth::GetVolumeBackup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::GetVolumeBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVolumeBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncCreateRestorePlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateRestorePlan(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::CreateRestorePlan(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateRestorePlan(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::ListRestorePlansResponse>
BackupForGKEAuth::ListRestorePlans(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::ListRestorePlansRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRestorePlans(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::RestorePlan>
BackupForGKEAuth::GetRestorePlan(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::GetRestorePlanRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRestorePlan(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncUpdateRestorePlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateRestorePlan(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::UpdateRestorePlan(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateRestorePlan(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncDeleteRestorePlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteRestorePlan(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::DeleteRestorePlan(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteRestorePlan(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncCreateRestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::CreateRestoreRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateRestore(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::CreateRestore(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::CreateRestoreRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateRestore(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::ListRestoresResponse>
BackupForGKEAuth::ListRestores(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::ListRestoresRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRestores(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::Restore> BackupForGKEAuth::GetRestore(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::GetRestoreRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRestore(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncUpdateRestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::UpdateRestoreRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateRestore(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::UpdateRestore(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::UpdateRestoreRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateRestore(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncDeleteRestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkebackup::v1::DeleteRestoreRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteRestore(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> BackupForGKEAuth::DeleteRestore(
    grpc::ClientContext& context, Options options,
    google::cloud::gkebackup::v1::DeleteRestoreRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteRestore(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::ListVolumeRestoresResponse>
BackupForGKEAuth::ListVolumeRestores(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::ListVolumeRestoresRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListVolumeRestores(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::VolumeRestore>
BackupForGKEAuth::GetVolumeRestore(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::GetVolumeRestoreRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVolumeRestore(context, options, request);
}

StatusOr<google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlResponse>
BackupForGKEAuth::GetBackupIndexDownloadUrl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBackupIndexDownloadUrl(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BackupForGKEAuth::AsyncGetOperation(
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

future<Status> BackupForGKEAuth::AsyncCancelOperation(
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
}  // namespace gkebackup_v1_internal
}  // namespace cloud
}  // namespace google
