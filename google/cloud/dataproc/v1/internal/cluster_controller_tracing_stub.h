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
// source: google/cloud/dataproc/v1/clusters.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_CLUSTER_CONTROLLER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_CLUSTER_CONTROLLER_TRACING_STUB_H

#include "google/cloud/dataproc/v1/internal/cluster_controller_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ClusterControllerTracingStub : public ClusterControllerStub {
 public:
  ~ClusterControllerTracingStub() override = default;

  explicit ClusterControllerTracingStub(
      std::shared_ptr<ClusterControllerStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::CreateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::CreateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::UpdateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::StopClusterRequest const& request) override;

  StatusOr<google::longrunning::Operation> StopCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::StopClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::StartClusterRequest const& request) override;

  StatusOr<google::longrunning::Operation> StartCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::StartClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::DeleteClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::DeleteClusterRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::Cluster> GetCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::GetClusterRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::ListClustersResponse> ListClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::ListClustersRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDiagnoseCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::DiagnoseClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DiagnoseCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::DiagnoseClusterRequest const& request)
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
  std::shared_ptr<ClusterControllerStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ClusterControllerStub> MakeClusterControllerTracingStub(
    std::shared_ptr<ClusterControllerStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_CLUSTER_CONTROLLER_TRACING_STUB_H
