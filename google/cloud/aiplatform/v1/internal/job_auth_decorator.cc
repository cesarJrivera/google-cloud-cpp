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
// source: google/cloud/aiplatform/v1/job_service.proto

#include "google/cloud/aiplatform/v1/internal/job_auth_decorator.h"
#include <google/cloud/aiplatform/v1/job_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobServiceAuth::JobServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<JobServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::aiplatform::v1::CustomJob>
JobServiceAuth::CreateCustomJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateCustomJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCustomJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::CustomJob> JobServiceAuth::GetCustomJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetCustomJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCustomJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListCustomJobsResponse>
JobServiceAuth::ListCustomJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListCustomJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCustomJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceAuth::AsyncDeleteCustomJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteCustomJob(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> JobServiceAuth::DeleteCustomJob(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCustomJob(context, options, request);
}

Status JobServiceAuth::CancelCustomJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelCustomJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelCustomJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceAuth::CreateDataLabelingJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDataLabelingJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceAuth::GetDataLabelingJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetDataLabelingJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDataLabelingJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListDataLabelingJobsResponse>
JobServiceAuth::ListDataLabelingJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDataLabelingJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDataLabelingJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceAuth::AsyncDeleteDataLabelingJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteDataLabelingJob(cq, *std::move(context),
                                                 std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> JobServiceAuth::DeleteDataLabelingJob(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDataLabelingJob(context, options, request);
}

Status JobServiceAuth::CancelDataLabelingJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelDataLabelingJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceAuth::CreateHyperparameterTuningJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateHyperparameterTuningJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateHyperparameterTuningJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceAuth::GetHyperparameterTuningJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetHyperparameterTuningJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListHyperparameterTuningJobsResponse>
JobServiceAuth::ListHyperparameterTuningJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListHyperparameterTuningJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceAuth::AsyncDeleteHyperparameterTuningJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteHyperparameterTuningJob(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
JobServiceAuth::DeleteHyperparameterTuningJob(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteHyperparameterTuningJob(context, options, request);
}

Status JobServiceAuth::CancelHyperparameterTuningJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelHyperparameterTuningJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelHyperparameterTuningJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::NasJob> JobServiceAuth::CreateNasJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateNasJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateNasJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::NasJob> JobServiceAuth::GetNasJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetNasJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetNasJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListNasJobsResponse>
JobServiceAuth::ListNasJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListNasJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListNasJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceAuth::AsyncDeleteNasJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteNasJob(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> JobServiceAuth::DeleteNasJob(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteNasJob(context, options, request);
}

Status JobServiceAuth::CancelNasJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelNasJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelNasJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::NasTrialDetail>
JobServiceAuth::GetNasTrialDetail(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetNasTrialDetailRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetNasTrialDetail(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListNasTrialDetailsResponse>
JobServiceAuth::ListNasTrialDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListNasTrialDetailsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListNasTrialDetails(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceAuth::CreateBatchPredictionJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateBatchPredictionJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceAuth::GetBatchPredictionJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBatchPredictionJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListBatchPredictionJobsResponse>
JobServiceAuth::ListBatchPredictionJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBatchPredictionJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceAuth::AsyncDeleteBatchPredictionJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteBatchPredictionJob(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
JobServiceAuth::DeleteBatchPredictionJob(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteBatchPredictionJob(context, options, request);
}

Status JobServiceAuth::CancelBatchPredictionJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelBatchPredictionJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceAuth::CreateModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        CreateModelDeploymentMonitoringJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateModelDeploymentMonitoringJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::
             SearchModelDeploymentMonitoringStatsAnomaliesResponse>
JobServiceAuth::SearchModelDeploymentMonitoringStatsAnomalies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        SearchModelDeploymentMonitoringStatsAnomaliesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SearchModelDeploymentMonitoringStatsAnomalies(context, options,
                                                               request);
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceAuth::GetModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetModelDeploymentMonitoringJobRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetModelDeploymentMonitoringJob(context, options, request);
}

StatusOr<
    google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsResponse>
JobServiceAuth::ListModelDeploymentMonitoringJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        ListModelDeploymentMonitoringJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListModelDeploymentMonitoringJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceAuth::AsyncUpdateModelDeploymentMonitoringJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::
        UpdateModelDeploymentMonitoringJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateModelDeploymentMonitoringJob(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
JobServiceAuth::UpdateModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::
        UpdateModelDeploymentMonitoringJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateModelDeploymentMonitoringJob(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceAuth::AsyncDeleteModelDeploymentMonitoringJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::
        DeleteModelDeploymentMonitoringJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteModelDeploymentMonitoringJob(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
JobServiceAuth::DeleteModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::
        DeleteModelDeploymentMonitoringJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteModelDeploymentMonitoringJob(context, options, request);
}

Status JobServiceAuth::PauseModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        PauseModelDeploymentMonitoringJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PauseModelDeploymentMonitoringJob(context, options, request);
}

Status JobServiceAuth::ResumeModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        ResumeModelDeploymentMonitoringJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ResumeModelDeploymentMonitoringJob(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceAuth::AsyncGetOperation(
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

future<Status> JobServiceAuth::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
