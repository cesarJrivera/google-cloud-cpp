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
// source: google/cloud/redis/v1/cloud_redis.proto

#include "google/cloud/redis/v1/internal/cloud_redis_auth_decorator.h"
#include <google/cloud/redis/v1/cloud_redis.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace redis_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudRedisAuth::CloudRedisAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CloudRedisStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::redis::v1::ListInstancesResponse>
CloudRedisAuth::ListInstances(
    grpc::ClientContext& context, Options const& options,
    google::cloud::redis::v1::ListInstancesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInstances(context, options, request);
}

StatusOr<google::cloud::redis::v1::Instance> CloudRedisAuth::GetInstance(
    grpc::ClientContext& context, Options const& options,
    google::cloud::redis::v1::GetInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInstance(context, options, request);
}

StatusOr<google::cloud::redis::v1::InstanceAuthString>
CloudRedisAuth::GetInstanceAuthString(
    grpc::ClientContext& context, Options const& options,
    google::cloud::redis::v1::GetInstanceAuthStringRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInstanceAuthString(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisAuth::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::v1::CreateInstanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateInstance(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudRedisAuth::CreateInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::v1::CreateInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisAuth::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::v1::UpdateInstanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateInstance(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudRedisAuth::UpdateInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::v1::UpdateInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisAuth::AsyncUpgradeInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::v1::UpgradeInstanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpgradeInstance(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudRedisAuth::UpgradeInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::v1::UpgradeInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpgradeInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisAuth::AsyncImportInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::v1::ImportInstanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncImportInstance(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudRedisAuth::ImportInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::v1::ImportInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ImportInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisAuth::AsyncExportInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::v1::ExportInstanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncExportInstance(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudRedisAuth::ExportInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::v1::ExportInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ExportInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisAuth::AsyncFailoverInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::v1::FailoverInstanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncFailoverInstance(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudRedisAuth::FailoverInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::v1::FailoverInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->FailoverInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisAuth::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::v1::DeleteInstanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteInstance(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudRedisAuth::DeleteInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::v1::DeleteInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisAuth::AsyncRescheduleMaintenance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::v1::RescheduleMaintenanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRescheduleMaintenance(cq, *std::move(context),
                                                 std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudRedisAuth::RescheduleMaintenance(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::v1::RescheduleMaintenanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RescheduleMaintenance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisAuth::AsyncGetOperation(
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

future<Status> CloudRedisAuth::AsyncCancelOperation(
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
}  // namespace redis_v1_internal
}  // namespace cloud
}  // namespace google
