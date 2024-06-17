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
// source: google/cloud/edgecontainer/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGECONTAINER_V1_INTERNAL_EDGE_CONTAINER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGECONTAINER_V1_INTERNAL_EDGE_CONTAINER_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/edgecontainer/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace edgecontainer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EdgeContainerStub {
 public:
  virtual ~EdgeContainerStub() = 0;

  virtual StatusOr<google::cloud::edgecontainer::v1::ListClustersResponse>
  ListClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::ListClustersRequest const& request) = 0;

  virtual StatusOr<google::cloud::edgecontainer::v1::Cluster> GetCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GetClusterRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::CreateClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::CreateClusterRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::UpdateClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::UpdateClusterRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpgradeCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::UpgradeClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpgradeCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::UpgradeClusterRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::DeleteClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::DeleteClusterRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::edgecontainer::v1::GenerateOfflineCredentialResponse>
  GenerateOfflineCredential(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GenerateOfflineCredentialRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::edgecontainer::v1::ListNodePoolsResponse>
  ListNodePools(grpc::ClientContext& context, Options const& options,
                google::cloud::edgecontainer::v1::ListNodePoolsRequest const&
                    request) = 0;

  virtual StatusOr<google::cloud::edgecontainer::v1::NodePool> GetNodePool(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::CreateNodePoolRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::CreateNodePoolRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::UpdateNodePoolRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::UpdateNodePoolRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::DeleteNodePoolRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::DeleteNodePoolRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::edgecontainer::v1::ListMachinesResponse>
  ListMachines(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::ListMachinesRequest const& request) = 0;

  virtual StatusOr<google::cloud::edgecontainer::v1::Machine> GetMachine(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GetMachineRequest const& request) = 0;

  virtual StatusOr<google::cloud::edgecontainer::v1::ListVpnConnectionsResponse>
  ListVpnConnections(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::ListVpnConnectionsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::edgecontainer::v1::VpnConnection>
  GetVpnConnection(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GetVpnConnectionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateVpnConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateVpnConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteVpnConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteVpnConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::edgecontainer::v1::ServerConfig>
  GetServerConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GetServerConfigRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultEdgeContainerStub : public EdgeContainerStub {
 public:
  DefaultEdgeContainerStub(
      std::unique_ptr<
          google::cloud::edgecontainer::v1::EdgeContainer::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::edgecontainer::v1::ListClustersResponse> ListClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::ListClustersRequest const& request)
      override;

  StatusOr<google::cloud::edgecontainer::v1::Cluster> GetCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GetClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::CreateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::CreateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::UpdateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::UpgradeClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpgradeCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::UpgradeClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::DeleteClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::DeleteClusterRequest const& request)
      override;

  StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
          request) override;

  StatusOr<google::cloud::edgecontainer::v1::GenerateOfflineCredentialResponse>
  GenerateOfflineCredential(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GenerateOfflineCredentialRequest const&
          request) override;

  StatusOr<google::cloud::edgecontainer::v1::ListNodePoolsResponse>
  ListNodePools(grpc::ClientContext& context, Options const& options,
                google::cloud::edgecontainer::v1::ListNodePoolsRequest const&
                    request) override;

  StatusOr<google::cloud::edgecontainer::v1::NodePool> GetNodePool(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GetNodePoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request)
      override;

  StatusOr<google::cloud::edgecontainer::v1::ListMachinesResponse> ListMachines(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::ListMachinesRequest const& request)
      override;

  StatusOr<google::cloud::edgecontainer::v1::Machine> GetMachine(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GetMachineRequest const& request)
      override;

  StatusOr<google::cloud::edgecontainer::v1::ListVpnConnectionsResponse>
  ListVpnConnections(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::ListVpnConnectionsRequest const&
          request) override;

  StatusOr<google::cloud::edgecontainer::v1::VpnConnection> GetVpnConnection(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateVpnConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateVpnConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteVpnConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteVpnConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
          request) override;

  StatusOr<google::cloud::edgecontainer::v1::ServerConfig> GetServerConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgecontainer::v1::GetServerConfigRequest const& request)
      override;

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
  std::unique_ptr<
      google::cloud::edgecontainer::v1::EdgeContainer::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGECONTAINER_V1_INTERNAL_EDGE_CONTAINER_STUB_H
