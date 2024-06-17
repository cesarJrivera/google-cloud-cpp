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
// source: google/cloud/networksecurity/v1/network_security.proto

#include "google/cloud/networksecurity/v1/internal/network_security_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace networksecurity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NetworkSecurityTracingStub::NetworkSecurityTracingStub(
    std::shared_ptr<NetworkSecurityStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::networksecurity::v1::ListAuthorizationPoliciesResponse>
NetworkSecurityTracingStub::ListAuthorizationPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "ListAuthorizationPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListAuthorizationPolicies(context, options, request));
}

StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityTracingStub::GetAuthorizationPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "GetAuthorizationPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetAuthorizationPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityTracingStub::AsyncCreateAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "CreateAuthorizationPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateAuthorizationPolicy(cq, context,
                                                  std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityTracingStub::CreateAuthorizationPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "CreateAuthorizationPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateAuthorizationPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityTracingStub::AsyncUpdateAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "UpdateAuthorizationPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateAuthorizationPolicy(cq, context,
                                                  std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityTracingStub::UpdateAuthorizationPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "UpdateAuthorizationPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdateAuthorizationPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityTracingStub::AsyncDeleteAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "DeleteAuthorizationPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteAuthorizationPolicy(cq, context,
                                                  std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityTracingStub::DeleteAuthorizationPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "DeleteAuthorizationPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteAuthorizationPolicy(context, options, request));
}

StatusOr<google::cloud::networksecurity::v1::ListServerTlsPoliciesResponse>
NetworkSecurityTracingStub::ListServerTlsPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "ListServerTlsPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListServerTlsPolicies(context, options, request));
}

StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityTracingStub::GetServerTlsPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networksecurity.v1.NetworkSecurity", "GetServerTlsPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetServerTlsPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityTracingStub::AsyncCreateServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "CreateServerTlsPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateServerTlsPolicy(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityTracingStub::CreateServerTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "CreateServerTlsPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateServerTlsPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityTracingStub::AsyncUpdateServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "UpdateServerTlsPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateServerTlsPolicy(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityTracingStub::UpdateServerTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "UpdateServerTlsPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateServerTlsPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityTracingStub::AsyncDeleteServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "DeleteServerTlsPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteServerTlsPolicy(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityTracingStub::DeleteServerTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "DeleteServerTlsPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteServerTlsPolicy(context, options, request));
}

StatusOr<google::cloud::networksecurity::v1::ListClientTlsPoliciesResponse>
NetworkSecurityTracingStub::ListClientTlsPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "ListClientTlsPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListClientTlsPolicies(context, options, request));
}

StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityTracingStub::GetClientTlsPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networksecurity.v1.NetworkSecurity", "GetClientTlsPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetClientTlsPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityTracingStub::AsyncCreateClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "CreateClientTlsPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateClientTlsPolicy(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityTracingStub::CreateClientTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "CreateClientTlsPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateClientTlsPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityTracingStub::AsyncUpdateClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "UpdateClientTlsPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateClientTlsPolicy(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityTracingStub::UpdateClientTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "UpdateClientTlsPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateClientTlsPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityTracingStub::AsyncDeleteClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "DeleteClientTlsPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteClientTlsPolicy(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityTracingStub::DeleteClientTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networksecurity.v1.NetworkSecurity",
                             "DeleteClientTlsPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteClientTlsPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> NetworkSecurityTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<NetworkSecurityStub> MakeNetworkSecurityTracingStub(
    std::shared_ptr<NetworkSecurityStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<NetworkSecurityTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1_internal
}  // namespace cloud
}  // namespace google
