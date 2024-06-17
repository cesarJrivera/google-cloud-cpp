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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#include "google/cloud/composer/v1/internal/environments_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/orchestration/airflow/service/v1/environments.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsLogging::EnvironmentsLogging(
    std::shared_ptr<EnvironmentsStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        CreateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::orchestration::airflow::service::v1::
                 CreateEnvironmentRequest const& request) {
        return child_->AsyncCreateEnvironment(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EnvironmentsLogging::CreateEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::orchestration::airflow::service::v1::
        CreateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 CreateEnvironmentRequest const& request) {
        return child_->CreateEnvironment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsLogging::GetEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        GetEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 GetEnvironmentRequest const& request) {
        return child_->GetEnvironment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ListEnvironmentsResponse>
EnvironmentsLogging::ListEnvironments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        ListEnvironmentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 ListEnvironmentsRequest const& request) {
        return child_->ListEnvironments(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        UpdateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::orchestration::airflow::service::v1::
                 UpdateEnvironmentRequest const& request) {
        return child_->AsyncUpdateEnvironment(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EnvironmentsLogging::UpdateEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::orchestration::airflow::service::v1::
        UpdateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 UpdateEnvironmentRequest const& request) {
        return child_->UpdateEnvironment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        DeleteEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::orchestration::airflow::service::v1::
                 DeleteEnvironmentRequest const& request) {
        return child_->AsyncDeleteEnvironment(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EnvironmentsLogging::DeleteEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::orchestration::airflow::service::v1::
        DeleteEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 DeleteEnvironmentRequest const& request) {
        return child_->DeleteEnvironment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ExecuteAirflowCommandResponse>
EnvironmentsLogging::ExecuteAirflowCommand(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        ExecuteAirflowCommandRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 ExecuteAirflowCommandRequest const& request) {
        return child_->ExecuteAirflowCommand(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             StopAirflowCommandResponse>
EnvironmentsLogging::StopAirflowCommand(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        StopAirflowCommandRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 StopAirflowCommandRequest const& request) {
        return child_->StopAirflowCommand(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             PollAirflowCommandResponse>
EnvironmentsLogging::PollAirflowCommand(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        PollAirflowCommandRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 PollAirflowCommandRequest const& request) {
        return child_->PollAirflowCommand(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::ListWorkloadsResponse>
EnvironmentsLogging::ListWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        ListWorkloadsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 ListWorkloadsRequest const& request) {
        return child_->ListWorkloads(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
EnvironmentsLogging::CreateUserWorkloadsSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        CreateUserWorkloadsSecretRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 CreateUserWorkloadsSecretRequest const& request) {
        return child_->CreateUserWorkloadsSecret(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
EnvironmentsLogging::GetUserWorkloadsSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        GetUserWorkloadsSecretRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 GetUserWorkloadsSecretRequest const& request) {
        return child_->GetUserWorkloadsSecret(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ListUserWorkloadsSecretsResponse>
EnvironmentsLogging::ListUserWorkloadsSecrets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        ListUserWorkloadsSecretsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 ListUserWorkloadsSecretsRequest const& request) {
        return child_->ListUserWorkloadsSecrets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
EnvironmentsLogging::UpdateUserWorkloadsSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        UpdateUserWorkloadsSecretRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 UpdateUserWorkloadsSecretRequest const& request) {
        return child_->UpdateUserWorkloadsSecret(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status EnvironmentsLogging::DeleteUserWorkloadsSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        DeleteUserWorkloadsSecretRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 DeleteUserWorkloadsSecretRequest const& request) {
        return child_->DeleteUserWorkloadsSecret(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsConfigMap>
EnvironmentsLogging::CreateUserWorkloadsConfigMap(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        CreateUserWorkloadsConfigMapRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 CreateUserWorkloadsConfigMapRequest const& request) {
        return child_->CreateUserWorkloadsConfigMap(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsConfigMap>
EnvironmentsLogging::GetUserWorkloadsConfigMap(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        GetUserWorkloadsConfigMapRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 GetUserWorkloadsConfigMapRequest const& request) {
        return child_->GetUserWorkloadsConfigMap(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ListUserWorkloadsConfigMapsResponse>
EnvironmentsLogging::ListUserWorkloadsConfigMaps(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        ListUserWorkloadsConfigMapsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 ListUserWorkloadsConfigMapsRequest const& request) {
        return child_->ListUserWorkloadsConfigMaps(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsConfigMap>
EnvironmentsLogging::UpdateUserWorkloadsConfigMap(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        UpdateUserWorkloadsConfigMapRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 UpdateUserWorkloadsConfigMapRequest const& request) {
        return child_->UpdateUserWorkloadsConfigMap(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status EnvironmentsLogging::DeleteUserWorkloadsConfigMap(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        DeleteUserWorkloadsConfigMapRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 DeleteUserWorkloadsConfigMapRequest const& request) {
        return child_->DeleteUserWorkloadsConfigMap(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncSaveSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        SaveSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::orchestration::airflow::service::v1::
                 SaveSnapshotRequest const& request) {
        return child_->AsyncSaveSnapshot(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EnvironmentsLogging::SaveSnapshot(
    grpc::ClientContext& context, Options options,
    google::cloud::orchestration::airflow::service::v1::
        SaveSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 SaveSnapshotRequest const& request) {
        return child_->SaveSnapshot(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncLoadSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        LoadSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::orchestration::airflow::service::v1::
                 LoadSnapshotRequest const& request) {
        return child_->AsyncLoadSnapshot(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EnvironmentsLogging::LoadSnapshot(
    grpc::ClientContext& context, Options options,
    google::cloud::orchestration::airflow::service::v1::
        LoadSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 LoadSnapshotRequest const& request) {
        return child_->LoadSnapshot(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncDatabaseFailover(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        DatabaseFailoverRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::orchestration::airflow::service::v1::
                 DatabaseFailoverRequest const& request) {
        return child_->AsyncDatabaseFailover(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EnvironmentsLogging::DatabaseFailover(
    grpc::ClientContext& context, Options options,
    google::cloud::orchestration::airflow::service::v1::
        DatabaseFailoverRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 DatabaseFailoverRequest const& request) {
        return child_->DatabaseFailover(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             FetchDatabasePropertiesResponse>
EnvironmentsLogging::FetchDatabaseProperties(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        FetchDatabasePropertiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 FetchDatabasePropertiesRequest const& request) {
        return child_->FetchDatabaseProperties(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncGetOperation(
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

future<Status> EnvironmentsLogging::AsyncCancelOperation(
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
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google
