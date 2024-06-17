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
// source: google/cloud/edgenetwork/v1/service.proto

#include "google/cloud/edgenetwork/v1/internal/edge_network_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/edgenetwork/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace edgenetwork_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EdgeNetworkMetadata::EdgeNetworkMetadata(
    std::shared_ptr<EdgeNetworkStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::edgenetwork::v1::InitializeZoneResponse>
EdgeNetworkMetadata::InitializeZone(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::InitializeZoneRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->InitializeZone(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::ListZonesResponse>
EdgeNetworkMetadata::ListZones(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListZonesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListZones(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::Zone> EdgeNetworkMetadata::GetZone(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetZoneRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetZone(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::ListNetworksResponse>
EdgeNetworkMetadata::ListNetworks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListNetworksRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNetworks(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::Network>
EdgeNetworkMetadata::GetNetwork(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetNetworkRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNetwork(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseNetworkResponse>
EdgeNetworkMetadata::DiagnoseNetwork(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::DiagnoseNetworkRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DiagnoseNetwork(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncCreateNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateNetworkRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateNetwork(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkMetadata::CreateNetwork(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::CreateNetworkRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateNetwork(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncDeleteNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteNetwork(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkMetadata::DeleteNetwork(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteNetwork(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::ListSubnetsResponse>
EdgeNetworkMetadata::ListSubnets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListSubnetsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSubnets(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::Subnet> EdgeNetworkMetadata::GetSubnet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetSubnetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSubnet(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncCreateSubnet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateSubnetRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateSubnet(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkMetadata::CreateSubnet(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::CreateSubnetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSubnet(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncUpdateSubnet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("subnet.name=",
                           internal::UrlEncode(request.subnet().name())));
  return child_->AsyncUpdateSubnet(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkMetadata::UpdateSubnet(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("subnet.name=",
                           internal::UrlEncode(request.subnet().name())));
  return child_->UpdateSubnet(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncDeleteSubnet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteSubnet(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkMetadata::DeleteSubnet(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteSubnet(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::ListInterconnectsResponse>
EdgeNetworkMetadata::ListInterconnects(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListInterconnectsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInterconnects(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::Interconnect>
EdgeNetworkMetadata::GetInterconnect(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetInterconnectRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInterconnect(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseInterconnectResponse>
EdgeNetworkMetadata::DiagnoseInterconnect(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::DiagnoseInterconnectRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DiagnoseInterconnect(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::ListInterconnectAttachmentsResponse>
EdgeNetworkMetadata::ListInterconnectAttachments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListInterconnectAttachmentsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInterconnectAttachments(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>
EdgeNetworkMetadata::GetInterconnectAttachment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetInterconnectAttachmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInterconnectAttachment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncCreateInterconnectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateInterconnectAttachment(cq, std::move(context),
                                                   std::move(options), request);
}

StatusOr<google::longrunning::Operation>
EdgeNetworkMetadata::CreateInterconnectAttachment(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateInterconnectAttachment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncDeleteInterconnectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteInterconnectAttachment(cq, std::move(context),
                                                   std::move(options), request);
}

StatusOr<google::longrunning::Operation>
EdgeNetworkMetadata::DeleteInterconnectAttachment(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteInterconnectAttachment(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::ListRoutersResponse>
EdgeNetworkMetadata::ListRouters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListRoutersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRouters(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::Router> EdgeNetworkMetadata::GetRouter(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetRouterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRouter(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseRouterResponse>
EdgeNetworkMetadata::DiagnoseRouter(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::DiagnoseRouterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DiagnoseRouter(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncCreateRouter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateRouterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateRouter(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkMetadata::CreateRouter(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::CreateRouterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateRouter(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncUpdateRouter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::UpdateRouterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("router.name=",
                           internal::UrlEncode(request.router().name())));
  return child_->AsyncUpdateRouter(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkMetadata::UpdateRouter(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::UpdateRouterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("router.name=",
                           internal::UrlEncode(request.router().name())));
  return child_->UpdateRouter(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncDeleteRouter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteRouterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteRouter(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkMetadata::DeleteRouter(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::DeleteRouterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteRouter(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> EdgeNetworkMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void EdgeNetworkMetadata::SetMetadata(grpc::ClientContext& context,
                                      Options const& options,
                                      std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void EdgeNetworkMetadata::SetMetadata(grpc::ClientContext& context,
                                      Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgenetwork_v1_internal
}  // namespace cloud
}  // namespace google
