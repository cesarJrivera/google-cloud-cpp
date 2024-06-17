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
// source: google/cloud/retail/v2/model_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_MODEL_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_MODEL_LOGGING_DECORATOR_H

#include "google/cloud/retail/v2/internal/model_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ModelServiceLogging : public ModelServiceStub {
 public:
  ~ModelServiceLogging() override = default;
  ModelServiceLogging(std::shared_ptr<ModelServiceStub> child,
                      TracingOptions tracing_options,
                      std::set<std::string> const& components);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::retail::v2::CreateModelRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateModel(
      grpc::ClientContext& context, Options options,
      google::cloud::retail::v2::CreateModelRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Model> GetModel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::GetModelRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Model> PauseModel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::PauseModelRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Model> ResumeModel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::ResumeModelRequest const& request) override;

  Status DeleteModel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::DeleteModelRequest const& request) override;

  StatusOr<google::cloud::retail::v2::ListModelsResponse> ListModels(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::ListModelsRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Model> UpdateModel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::UpdateModelRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncTuneModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::retail::v2::TuneModelRequest const& request) override;

  StatusOr<google::longrunning::Operation> TuneModel(
      grpc::ClientContext& context, Options options,
      google::cloud::retail::v2::TuneModelRequest const& request) override;

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
  std::shared_ptr<ModelServiceStub> child_;
  TracingOptions tracing_options_;
};  // ModelServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_MODEL_LOGGING_DECORATOR_H
