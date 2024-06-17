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
// source: google/cloud/networkservices/v1/dep.proto

#include "google/cloud/networkservices/v1/internal/dep_auth_decorator.h"
#include <google/cloud/networkservices/v1/dep.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DepServiceAuth::DepServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DepServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::networkservices::v1::ListLbTrafficExtensionsResponse>
DepServiceAuth::ListLbTrafficExtensions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkservices::v1::ListLbTrafficExtensionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLbTrafficExtensions(context, options, request);
}

StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>
DepServiceAuth::GetLbTrafficExtension(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkservices::v1::GetLbTrafficExtensionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLbTrafficExtension(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DepServiceAuth::AsyncCreateLbTrafficExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest const&
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
        return child->AsyncCreateLbTrafficExtension(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DepServiceAuth::CreateLbTrafficExtension(
    grpc::ClientContext& context, Options options,
    google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateLbTrafficExtension(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DepServiceAuth::AsyncUpdateLbTrafficExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest const&
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
        return child->AsyncUpdateLbTrafficExtension(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DepServiceAuth::UpdateLbTrafficExtension(
    grpc::ClientContext& context, Options options,
    google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateLbTrafficExtension(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DepServiceAuth::AsyncDeleteLbTrafficExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest const&
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
        return child->AsyncDeleteLbTrafficExtension(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DepServiceAuth::DeleteLbTrafficExtension(
    grpc::ClientContext& context, Options options,
    google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteLbTrafficExtension(context, options, request);
}

StatusOr<google::cloud::networkservices::v1::ListLbRouteExtensionsResponse>
DepServiceAuth::ListLbRouteExtensions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkservices::v1::ListLbRouteExtensionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLbRouteExtensions(context, options, request);
}

StatusOr<google::cloud::networkservices::v1::LbRouteExtension>
DepServiceAuth::GetLbRouteExtension(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkservices::v1::GetLbRouteExtensionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLbRouteExtension(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DepServiceAuth::AsyncCreateLbRouteExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::CreateLbRouteExtensionRequest const&
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
        return child->AsyncCreateLbRouteExtension(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DepServiceAuth::CreateLbRouteExtension(
    grpc::ClientContext& context, Options options,
    google::cloud::networkservices::v1::CreateLbRouteExtensionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateLbRouteExtension(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DepServiceAuth::AsyncUpdateLbRouteExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest const&
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
        return child->AsyncUpdateLbRouteExtension(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DepServiceAuth::UpdateLbRouteExtension(
    grpc::ClientContext& context, Options options,
    google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateLbRouteExtension(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DepServiceAuth::AsyncDeleteLbRouteExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest const&
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
        return child->AsyncDeleteLbRouteExtension(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DepServiceAuth::DeleteLbRouteExtension(
    grpc::ClientContext& context, Options options,
    google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteLbRouteExtension(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DepServiceAuth::AsyncGetOperation(
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

future<Status> DepServiceAuth::AsyncCancelOperation(
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
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google
