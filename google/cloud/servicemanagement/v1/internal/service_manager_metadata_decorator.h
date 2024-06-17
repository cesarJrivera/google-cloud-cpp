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
// source: google/api/servicemanagement/v1/servicemanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_INTERNAL_SERVICE_MANAGER_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_INTERNAL_SERVICE_MANAGER_METADATA_DECORATOR_H

#include "google/cloud/servicemanagement/v1/internal/service_manager_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace servicemanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceManagerMetadata : public ServiceManagerStub {
 public:
  ~ServiceManagerMetadata() override = default;
  ServiceManagerMetadata(std::shared_ptr<ServiceManagerStub> child,
                         std::multimap<std::string, std::string> fixed_metadata,
                         std::string api_client_header = "");

  StatusOr<google::api::servicemanagement::v1::ListServicesResponse>
  ListServices(grpc::ClientContext& context, Options const& options,
               google::api::servicemanagement::v1::ListServicesRequest const&
                   request) override;

  StatusOr<google::api::servicemanagement::v1::ManagedService> GetService(
      grpc::ClientContext& context, Options const& options,
      google::api::servicemanagement::v1::GetServiceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::api::servicemanagement::v1::CreateServiceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateService(
      grpc::ClientContext& context, Options options,
      google::api::servicemanagement::v1::CreateServiceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::api::servicemanagement::v1::DeleteServiceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteService(
      grpc::ClientContext& context, Options options,
      google::api::servicemanagement::v1::DeleteServiceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeleteService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::api::servicemanagement::v1::UndeleteServiceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UndeleteService(
      grpc::ClientContext& context, Options options,
      google::api::servicemanagement::v1::UndeleteServiceRequest const& request)
      override;

  StatusOr<google::api::servicemanagement::v1::ListServiceConfigsResponse>
  ListServiceConfigs(
      grpc::ClientContext& context, Options const& options,
      google::api::servicemanagement::v1::ListServiceConfigsRequest const&
          request) override;

  StatusOr<google::api::Service> GetServiceConfig(
      grpc::ClientContext& context, Options const& options,
      google::api::servicemanagement::v1::GetServiceConfigRequest const&
          request) override;

  StatusOr<google::api::Service> CreateServiceConfig(
      grpc::ClientContext& context, Options const& options,
      google::api::servicemanagement::v1::CreateServiceConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSubmitConfigSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> SubmitConfigSource(
      grpc::ClientContext& context, Options options,
      google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
          request) override;

  StatusOr<google::api::servicemanagement::v1::ListServiceRolloutsResponse>
  ListServiceRollouts(
      grpc::ClientContext& context, Options const& options,
      google::api::servicemanagement::v1::ListServiceRolloutsRequest const&
          request) override;

  StatusOr<google::api::servicemanagement::v1::Rollout> GetServiceRollout(
      grpc::ClientContext& context, Options const& options,
      google::api::servicemanagement::v1::GetServiceRolloutRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateServiceRollout(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateServiceRollout(
      grpc::ClientContext& context, Options options,
      google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
          request) override;

  StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
  GenerateConfigReport(
      grpc::ClientContext& context, Options const& options,
      google::api::servicemanagement::v1::GenerateConfigReportRequest const&
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
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<ServiceManagerStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_INTERNAL_SERVICE_MANAGER_METADATA_DECORATOR_H
