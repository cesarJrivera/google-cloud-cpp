// Copyright 2024 Google LLC
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
// source: google/cloud/apphub/v1/apphub_service.proto

#include "google/cloud/apphub/v1/internal/app_hub_auth_decorator.h"
#include <google/cloud/apphub/v1/apphub_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace apphub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppHubAuth::AppHubAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<AppHubStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::apphub::v1::LookupServiceProjectAttachmentResponse>
AppHubAuth::LookupServiceProjectAttachment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::LookupServiceProjectAttachmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->LookupServiceProjectAttachment(context, options, request);
}

StatusOr<google::cloud::apphub::v1::ListServiceProjectAttachmentsResponse>
AppHubAuth::ListServiceProjectAttachments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListServiceProjectAttachmentsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListServiceProjectAttachments(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AppHubAuth::AsyncCreateServiceProjectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest const&
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
        return child->AsyncCreateServiceProjectAttachment(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
AppHubAuth::CreateServiceProjectAttachment(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateServiceProjectAttachment(context, options, request);
}

StatusOr<google::cloud::apphub::v1::ServiceProjectAttachment>
AppHubAuth::GetServiceProjectAttachment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetServiceProjectAttachmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetServiceProjectAttachment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AppHubAuth::AsyncDeleteServiceProjectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest const&
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
        return child->AsyncDeleteServiceProjectAttachment(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
AppHubAuth::DeleteServiceProjectAttachment(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteServiceProjectAttachment(context, options, request);
}

StatusOr<google::cloud::apphub::v1::DetachServiceProjectAttachmentResponse>
AppHubAuth::DetachServiceProjectAttachment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::DetachServiceProjectAttachmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DetachServiceProjectAttachment(context, options, request);
}

StatusOr<google::cloud::apphub::v1::ListDiscoveredServicesResponse>
AppHubAuth::ListDiscoveredServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListDiscoveredServicesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDiscoveredServices(context, options, request);
}

StatusOr<google::cloud::apphub::v1::DiscoveredService>
AppHubAuth::GetDiscoveredService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetDiscoveredServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDiscoveredService(context, options, request);
}

StatusOr<google::cloud::apphub::v1::LookupDiscoveredServiceResponse>
AppHubAuth::LookupDiscoveredService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::LookupDiscoveredServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->LookupDiscoveredService(context, options, request);
}

StatusOr<google::cloud::apphub::v1::ListServicesResponse>
AppHubAuth::ListServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListServicesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListServices(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> AppHubAuth::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::CreateServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateService(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AppHubAuth::CreateService(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::CreateServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateService(context, options, request);
}

StatusOr<google::cloud::apphub::v1::Service> AppHubAuth::GetService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetService(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> AppHubAuth::AsyncUpdateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::UpdateServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateService(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AppHubAuth::UpdateService(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::UpdateServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateService(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> AppHubAuth::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::DeleteServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteService(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AppHubAuth::DeleteService(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::DeleteServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteService(context, options, request);
}

StatusOr<google::cloud::apphub::v1::ListDiscoveredWorkloadsResponse>
AppHubAuth::ListDiscoveredWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListDiscoveredWorkloadsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDiscoveredWorkloads(context, options, request);
}

StatusOr<google::cloud::apphub::v1::DiscoveredWorkload>
AppHubAuth::GetDiscoveredWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetDiscoveredWorkloadRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDiscoveredWorkload(context, options, request);
}

StatusOr<google::cloud::apphub::v1::LookupDiscoveredWorkloadResponse>
AppHubAuth::LookupDiscoveredWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::LookupDiscoveredWorkloadRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->LookupDiscoveredWorkload(context, options, request);
}

StatusOr<google::cloud::apphub::v1::ListWorkloadsResponse>
AppHubAuth::ListWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListWorkloadsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListWorkloads(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AppHubAuth::AsyncCreateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::CreateWorkloadRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateWorkload(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AppHubAuth::CreateWorkload(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::CreateWorkloadRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateWorkload(context, options, request);
}

StatusOr<google::cloud::apphub::v1::Workload> AppHubAuth::GetWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetWorkloadRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetWorkload(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AppHubAuth::AsyncUpdateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::UpdateWorkloadRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateWorkload(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AppHubAuth::UpdateWorkload(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::UpdateWorkloadRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateWorkload(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AppHubAuth::AsyncDeleteWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::DeleteWorkloadRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteWorkload(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AppHubAuth::DeleteWorkload(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::DeleteWorkloadRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteWorkload(context, options, request);
}

StatusOr<google::cloud::apphub::v1::ListApplicationsResponse>
AppHubAuth::ListApplications(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListApplicationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListApplications(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AppHubAuth::AsyncCreateApplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::CreateApplicationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateApplication(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AppHubAuth::CreateApplication(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::CreateApplicationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateApplication(context, options, request);
}

StatusOr<google::cloud::apphub::v1::Application> AppHubAuth::GetApplication(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetApplicationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetApplication(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AppHubAuth::AsyncUpdateApplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::UpdateApplicationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateApplication(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AppHubAuth::UpdateApplication(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::UpdateApplicationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateApplication(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AppHubAuth::AsyncDeleteApplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::DeleteApplicationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteApplication(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AppHubAuth::DeleteApplication(
    grpc::ClientContext& context, Options options,
    google::cloud::apphub::v1::DeleteApplicationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteApplication(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> AppHubAuth::AsyncGetOperation(
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

future<Status> AppHubAuth::AsyncCancelOperation(
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
}  // namespace apphub_v1_internal
}  // namespace cloud
}  // namespace google
