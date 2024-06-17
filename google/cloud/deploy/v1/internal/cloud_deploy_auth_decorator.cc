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

#include "google/cloud/deploy/v1/internal/cloud_deploy_auth_decorator.h"
#include <google/cloud/deploy/v1/cloud_deploy.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace deploy_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudDeployAuth::CloudDeployAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CloudDeployStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::deploy::v1::ListDeliveryPipelinesResponse>
CloudDeployAuth::ListDeliveryPipelines(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListDeliveryPipelinesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDeliveryPipelines(context, options, request);
}

StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployAuth::GetDeliveryPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDeliveryPipeline(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncCreateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateDeliveryPipeline(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CloudDeployAuth::CreateDeliveryPipeline(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDeliveryPipeline(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncUpdateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateDeliveryPipeline(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CloudDeployAuth::UpdateDeliveryPipeline(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateDeliveryPipeline(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncDeleteDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteDeliveryPipeline(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CloudDeployAuth::DeleteDeliveryPipeline(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDeliveryPipeline(context, options, request);
}

StatusOr<google::cloud::deploy::v1::ListTargetsResponse>
CloudDeployAuth::ListTargets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListTargetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTargets(context, options, request);
}

StatusOr<google::cloud::deploy::v1::RollbackTargetResponse>
CloudDeployAuth::RollbackTarget(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::RollbackTargetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RollbackTarget(context, options, request);
}

StatusOr<google::cloud::deploy::v1::Target> CloudDeployAuth::GetTarget(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetTargetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTarget(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncCreateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateTarget(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudDeployAuth::CreateTarget(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTarget(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncUpdateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateTarget(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudDeployAuth::UpdateTarget(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateTarget(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncDeleteTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteTarget(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudDeployAuth::DeleteTarget(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTarget(context, options, request);
}

StatusOr<google::cloud::deploy::v1::ListCustomTargetTypesResponse>
CloudDeployAuth::ListCustomTargetTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListCustomTargetTypesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCustomTargetTypes(context, options, request);
}

StatusOr<google::cloud::deploy::v1::CustomTargetType>
CloudDeployAuth::GetCustomTargetType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetCustomTargetTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCustomTargetType(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncCreateCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateCustomTargetType(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CloudDeployAuth::CreateCustomTargetType(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCustomTargetType(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncUpdateCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateCustomTargetType(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CloudDeployAuth::UpdateCustomTargetType(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCustomTargetType(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncDeleteCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteCustomTargetType(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CloudDeployAuth::DeleteCustomTargetType(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCustomTargetType(context, options, request);
}

StatusOr<google::cloud::deploy::v1::ListReleasesResponse>
CloudDeployAuth::ListReleases(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListReleasesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListReleases(context, options, request);
}

StatusOr<google::cloud::deploy::v1::Release> CloudDeployAuth::GetRelease(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetReleaseRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRelease(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncCreateRelease(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateRelease(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudDeployAuth::CreateRelease(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateRelease(context, options, request);
}

StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
CloudDeployAuth::AbandonRelease(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::AbandonReleaseRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AbandonRelease(context, options, request);
}

StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
CloudDeployAuth::ApproveRollout(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ApproveRolloutRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ApproveRollout(context, options, request);
}

StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>
CloudDeployAuth::AdvanceRollout(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::AdvanceRolloutRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AdvanceRollout(context, options, request);
}

StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>
CloudDeployAuth::CancelRollout(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::CancelRolloutRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelRollout(context, options, request);
}

StatusOr<google::cloud::deploy::v1::ListRolloutsResponse>
CloudDeployAuth::ListRollouts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListRolloutsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRollouts(context, options, request);
}

StatusOr<google::cloud::deploy::v1::Rollout> CloudDeployAuth::GetRollout(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetRolloutRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRollout(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncCreateRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateRollout(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudDeployAuth::CreateRollout(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateRollout(context, options, request);
}

StatusOr<google::cloud::deploy::v1::IgnoreJobResponse>
CloudDeployAuth::IgnoreJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::IgnoreJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->IgnoreJob(context, options, request);
}

StatusOr<google::cloud::deploy::v1::RetryJobResponse> CloudDeployAuth::RetryJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::RetryJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RetryJob(context, options, request);
}

StatusOr<google::cloud::deploy::v1::ListJobRunsResponse>
CloudDeployAuth::ListJobRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListJobRunsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListJobRuns(context, options, request);
}

StatusOr<google::cloud::deploy::v1::JobRun> CloudDeployAuth::GetJobRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetJobRunRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetJobRun(context, options, request);
}

StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>
CloudDeployAuth::TerminateJobRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::TerminateJobRunRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TerminateJobRun(context, options, request);
}

StatusOr<google::cloud::deploy::v1::Config> CloudDeployAuth::GetConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncCreateAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::CreateAutomationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateAutomation(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudDeployAuth::CreateAutomation(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::CreateAutomationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateAutomation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncUpdateAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateAutomation(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudDeployAuth::UpdateAutomation(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateAutomation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncDeleteAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteAutomation(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudDeployAuth::DeleteAutomation(
    grpc::ClientContext& context, Options options,
    google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAutomation(context, options, request);
}

StatusOr<google::cloud::deploy::v1::Automation> CloudDeployAuth::GetAutomation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetAutomationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAutomation(context, options, request);
}

StatusOr<google::cloud::deploy::v1::ListAutomationsResponse>
CloudDeployAuth::ListAutomations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListAutomationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAutomations(context, options, request);
}

StatusOr<google::cloud::deploy::v1::AutomationRun>
CloudDeployAuth::GetAutomationRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::GetAutomationRunRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAutomationRun(context, options, request);
}

StatusOr<google::cloud::deploy::v1::ListAutomationRunsResponse>
CloudDeployAuth::ListAutomationRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::ListAutomationRunsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAutomationRuns(context, options, request);
}

StatusOr<google::cloud::deploy::v1::CancelAutomationRunResponse>
CloudDeployAuth::CancelAutomationRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::deploy::v1::CancelAutomationRunRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelAutomationRun(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployAuth::AsyncGetOperation(
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

future<Status> CloudDeployAuth::AsyncCancelOperation(
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
}  // namespace deploy_v1_internal
}  // namespace cloud
}  // namespace google
