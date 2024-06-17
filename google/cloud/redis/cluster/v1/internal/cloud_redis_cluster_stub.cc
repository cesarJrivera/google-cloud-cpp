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
// source: google/cloud/redis/cluster/v1/cloud_redis_cluster.proto

#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/redis/cluster/v1/cloud_redis_cluster.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace redis_cluster_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudRedisClusterStub::~CloudRedisClusterStub() = default;

StatusOr<google::cloud::redis::cluster::v1::ListClustersResponse>
DefaultCloudRedisClusterStub::ListClusters(
    grpc::ClientContext& context, Options const&,
    google::cloud::redis::cluster::v1::ListClustersRequest const& request) {
  google::cloud::redis::cluster::v1::ListClustersResponse response;
  auto status = grpc_stub_->ListClusters(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::redis::cluster::v1::Cluster>
DefaultCloudRedisClusterStub::GetCluster(
    grpc::ClientContext& context, Options const&,
    google::cloud::redis::cluster::v1::GetClusterRequest const& request) {
  google::cloud::redis::cluster::v1::Cluster response;
  auto status = grpc_stub_->GetCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudRedisClusterStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::redis::cluster::v1::UpdateClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::redis::cluster::v1::UpdateClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::redis::cluster::v1::UpdateClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudRedisClusterStub::UpdateCluster(
    grpc::ClientContext& context, Options,
    google::cloud::redis::cluster::v1::UpdateClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudRedisClusterStub::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::redis::cluster::v1::DeleteClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::redis::cluster::v1::DeleteClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::redis::cluster::v1::DeleteClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudRedisClusterStub::DeleteCluster(
    grpc::ClientContext& context, Options,
    google::cloud::redis::cluster::v1::DeleteClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudRedisClusterStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::redis::cluster::v1::CreateClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::redis::cluster::v1::CreateClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::redis::cluster::v1::CreateClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudRedisClusterStub::CreateCluster(
    grpc::ClientContext& context, Options,
    google::cloud::redis::cluster::v1::CreateClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::redis::cluster::v1::CertificateAuthority>
DefaultCloudRedisClusterStub::GetClusterCertificateAuthority(
    grpc::ClientContext& context, Options const&,
    google::cloud::redis::cluster::v1::
        GetClusterCertificateAuthorityRequest const& request) {
  google::cloud::redis::cluster::v1::CertificateAuthority response;
  auto status =
      grpc_stub_->GetClusterCertificateAuthority(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudRedisClusterStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultCloudRedisClusterStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1_internal
}  // namespace cloud
}  // namespace google
