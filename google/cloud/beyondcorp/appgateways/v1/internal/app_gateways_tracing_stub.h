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
// source: google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPGATEWAYS_V1_INTERNAL_APP_GATEWAYS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPGATEWAYS_V1_INTERNAL_APP_GATEWAYS_TRACING_STUB_H

#include "google/cloud/beyondcorp/appgateways/v1/internal/app_gateways_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace beyondcorp_appgateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AppGatewaysServiceTracingStub : public AppGatewaysServiceStub {
 public:
  ~AppGatewaysServiceTracingStub() override = default;

  explicit AppGatewaysServiceTracingStub(
      std::shared_ptr<AppGatewaysServiceStub> child);

  StatusOr<google::cloud::beyondcorp::appgateways::v1::ListAppGatewaysResponse>
  ListAppGateways(
      grpc::ClientContext& context, Options const& options,
      google::cloud::beyondcorp::appgateways::v1::ListAppGatewaysRequest const&
          request) override;

  StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>
  GetAppGateway(
      grpc::ClientContext& context, Options const& options,
      google::cloud::beyondcorp::appgateways::v1::GetAppGatewayRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAppGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::beyondcorp::appgateways::v1::CreateAppGatewayRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateAppGateway(
      grpc::ClientContext& context, Options options,
      google::cloud::beyondcorp::appgateways::v1::CreateAppGatewayRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAppGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::beyondcorp::appgateways::v1::DeleteAppGatewayRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteAppGateway(
      grpc::ClientContext& context, Options options,
      google::cloud::beyondcorp::appgateways::v1::DeleteAppGatewayRequest const&
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
  std::shared_ptr<AppGatewaysServiceStub> child_;
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
std::shared_ptr<AppGatewaysServiceStub> MakeAppGatewaysServiceTracingStub(
    std::shared_ptr<AppGatewaysServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appgateways_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPGATEWAYS_V1_INTERNAL_APP_GATEWAYS_TRACING_STUB_H
