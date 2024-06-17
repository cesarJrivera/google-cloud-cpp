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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#include "google/cloud/deploy/v1/internal/cloud_deploy_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/deploy/v1/cloud_deploy.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace deploy_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudDeployLogging::CloudDeployLogging(std::shared_ptr<CloudDeployStub> child,
                                       TracingOptions tracing_options,
                                       std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::deploy::v1::ListDeliveryPipelinesResponse>
CloudDeployLogging::ListDeliveryPipelines(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListDeliveryPipelinesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::ListDeliveryPipelinesRequest const&
                 request) {
        return child_->ListDeliveryPipelines(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployLogging::GetDeliveryPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::GetDeliveryPipelineRequest const&
                 request) {
        return child_->GetDeliveryPipeline(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncCreateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::CreateDeliveryPipelineRequest const&
                 request) {
        return child_->AsyncCreateDeliveryPipeline(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CloudDeployLogging::CreateDeliveryPipeline(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::CreateDeliveryPipelineRequest const&
                 request) {
        return child_->CreateDeliveryPipeline(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncUpdateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const&
                 request) {
        return child_->AsyncUpdateDeliveryPipeline(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CloudDeployLogging::UpdateDeliveryPipeline(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const&
                 request) {
        return child_->UpdateDeliveryPipeline(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncDeleteDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const&
                 request) {
        return child_->AsyncDeleteDeliveryPipeline(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CloudDeployLogging::DeleteDeliveryPipeline(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const&
                 request) {
        return child_->DeleteDeliveryPipeline(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListTargetsResponse>
CloudDeployLogging::ListTargets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListTargetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::ListTargetsRequest const& request) {
        return child_->ListTargets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::RollbackTargetResponse>
CloudDeployLogging::RollbackTarget(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::RollbackTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::RollbackTargetRequest const& request) {
        return child_->RollbackTarget(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::Target> CloudDeployLogging::GetTarget(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::GetTargetRequest const& request) {
        return child_->GetTarget(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncCreateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::CreateTargetRequest const& request) {
        return child_->AsyncCreateTarget(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CloudDeployLogging::CreateTarget(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::CreateTargetRequest const& request) {
        return child_->CreateTarget(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncUpdateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::UpdateTargetRequest const& request) {
        return child_->AsyncUpdateTarget(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CloudDeployLogging::UpdateTarget(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::UpdateTargetRequest const& request) {
        return child_->UpdateTarget(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncDeleteTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::DeleteTargetRequest const& request) {
        return child_->AsyncDeleteTarget(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CloudDeployLogging::DeleteTarget(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::DeleteTargetRequest const& request) {
        return child_->DeleteTarget(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListCustomTargetTypesResponse>
CloudDeployLogging::ListCustomTargetTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListCustomTargetTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::ListCustomTargetTypesRequest const&
                 request) {
        return child_->ListCustomTargetTypes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::CustomTargetType>
CloudDeployLogging::GetCustomTargetType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetCustomTargetTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::GetCustomTargetTypeRequest const&
                 request) {
        return child_->GetCustomTargetType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncCreateCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::CreateCustomTargetTypeRequest const&
                 request) {
        return child_->AsyncCreateCustomTargetType(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CloudDeployLogging::CreateCustomTargetType(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::CreateCustomTargetTypeRequest const&
                 request) {
        return child_->CreateCustomTargetType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncUpdateCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const&
                 request) {
        return child_->AsyncUpdateCustomTargetType(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CloudDeployLogging::UpdateCustomTargetType(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const&
                 request) {
        return child_->UpdateCustomTargetType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncDeleteCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const&
                 request) {
        return child_->AsyncDeleteCustomTargetType(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CloudDeployLogging::DeleteCustomTargetType(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const&
                 request) {
        return child_->DeleteCustomTargetType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListReleasesResponse>
CloudDeployLogging::ListReleases(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListReleasesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::ListReleasesRequest const& request) {
        return child_->ListReleases(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::Release> CloudDeployLogging::GetRelease(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetReleaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::GetReleaseRequest const& request) {
        return child_->GetRelease(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncCreateRelease(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::CreateReleaseRequest const& request) {
        return child_->AsyncCreateRelease(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CloudDeployLogging::CreateRelease(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::CreateReleaseRequest const& request) {
        return child_->CreateRelease(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
CloudDeployLogging::AbandonRelease(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::AbandonReleaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::AbandonReleaseRequest const& request) {
        return child_->AbandonRelease(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
CloudDeployLogging::ApproveRollout(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ApproveRolloutRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::ApproveRolloutRequest const& request) {
        return child_->ApproveRollout(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>
CloudDeployLogging::AdvanceRollout(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::AdvanceRolloutRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::AdvanceRolloutRequest const& request) {
        return child_->AdvanceRollout(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>
CloudDeployLogging::CancelRollout(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::CancelRolloutRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::CancelRolloutRequest const& request) {
        return child_->CancelRollout(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListRolloutsResponse>
CloudDeployLogging::ListRollouts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListRolloutsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::ListRolloutsRequest const& request) {
        return child_->ListRollouts(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::Rollout> CloudDeployLogging::GetRollout(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetRolloutRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::GetRolloutRequest const& request) {
        return child_->GetRollout(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncCreateRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::deploy::v1::CreateRolloutRequest const& request) {
        return child_->AsyncCreateRollout(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CloudDeployLogging::CreateRollout(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::CreateRolloutRequest const& request) {
        return child_->CreateRollout(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::IgnoreJobResponse>
CloudDeployLogging::IgnoreJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::IgnoreJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::IgnoreJobRequest const& request) {
        return child_->IgnoreJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::RetryJobResponse>
CloudDeployLogging::RetryJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::RetryJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::RetryJobRequest const& request) {
        return child_->RetryJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListJobRunsResponse>
CloudDeployLogging::ListJobRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListJobRunsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::ListJobRunsRequest const& request) {
        return child_->ListJobRuns(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::JobRun> CloudDeployLogging::GetJobRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetJobRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::GetJobRunRequest const& request) {
        return child_->GetJobRun(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>
CloudDeployLogging::TerminateJobRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::TerminateJobRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::TerminateJobRunRequest const& request) {
        return child_->TerminateJobRun(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::Config> CloudDeployLogging::GetConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::GetConfigRequest const& request) {
        return child_->GetConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncCreateAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateAutomationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::deploy::v1::CreateAutomationRequest const& request) {
        return child_->AsyncCreateAutomation(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CloudDeployLogging::CreateAutomation(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateAutomationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::deploy::v1::CreateAutomationRequest const& request) {
        return child_->CreateAutomation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncUpdateAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
        return child_->AsyncUpdateAutomation(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CloudDeployLogging::UpdateAutomation(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
        return child_->UpdateAutomation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncDeleteAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
        return child_->AsyncDeleteAutomation(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CloudDeployLogging::DeleteAutomation(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
        return child_->DeleteAutomation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::Automation>
CloudDeployLogging::GetAutomation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetAutomationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::GetAutomationRequest const& request) {
        return child_->GetAutomation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListAutomationsResponse>
CloudDeployLogging::ListAutomations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListAutomationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::ListAutomationsRequest const& request) {
        return child_->ListAutomations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::AutomationRun>
CloudDeployLogging::GetAutomationRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetAutomationRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::deploy::v1::GetAutomationRunRequest const& request) {
        return child_->GetAutomationRun(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListAutomationRunsResponse>
CloudDeployLogging::ListAutomationRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListAutomationRunsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::deploy::v1::ListAutomationRunsRequest const& request) {
        return child_->ListAutomationRuns(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::CancelAutomationRunResponse>
CloudDeployLogging::CancelAutomationRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::CancelAutomationRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::deploy::v1::CancelAutomationRunRequest const&
                 request) {
        return child_->CancelAutomationRun(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncGetOperation(
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

future<Status> CloudDeployLogging::AsyncCancelOperation(
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
}  // namespace deploy_v1_internal
}  // namespace cloud
}  // namespace google
