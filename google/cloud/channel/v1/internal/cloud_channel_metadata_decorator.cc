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
// source: google/cloud/channel/v1/service.proto

#include "google/cloud/channel/v1/internal/cloud_channel_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/channel/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudChannelServiceMetadata::CloudChannelServiceMetadata(
    std::shared_ptr<CloudChannelServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::channel::v1::ListCustomersResponse>
CloudChannelServiceMetadata::ListCustomers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListCustomersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCustomers(context, options, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceMetadata::GetCustomer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::GetCustomerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCustomer(context, options, request);
}

StatusOr<google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
CloudChannelServiceMetadata::CheckCloudIdentityAccountsExist(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CheckCloudIdentityAccountsExist(context, options, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceMetadata::CreateCustomer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::CreateCustomerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCustomer(context, options, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceMetadata::UpdateCustomer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::UpdateCustomerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("customer.name=",
                           internal::UrlEncode(request.customer().name())));
  return child_->UpdateCustomer(context, options, request);
}

Status CloudChannelServiceMetadata::DeleteCustomer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::DeleteCustomerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCustomer(context, options, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceMetadata::ImportCustomer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ImportCustomerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ImportCustomer(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncProvisionCloudIdentity(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("customer=", internal::UrlEncode(request.customer())));
  return child_->AsyncProvisionCloudIdentity(cq, std::move(context),
                                             std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::ProvisionCloudIdentity(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("customer=", internal::UrlEncode(request.customer())));
  return child_->ProvisionCloudIdentity(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListEntitlementsResponse>
CloudChannelServiceMetadata::ListEntitlements(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListEntitlementsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEntitlements(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListTransferableSkusResponse>
CloudChannelServiceMetadata::ListTransferableSkus(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListTransferableSkusRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTransferableSkus(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListTransferableOffersResponse>
CloudChannelServiceMetadata::ListTransferableOffers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListTransferableOffersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTransferableOffers(context, options, request);
}

StatusOr<google::cloud::channel::v1::Entitlement>
CloudChannelServiceMetadata::GetEntitlement(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::GetEntitlementRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEntitlement(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncCreateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::CreateEntitlementRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateEntitlement(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::CreateEntitlement(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::CreateEntitlementRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEntitlement(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncChangeParameters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::ChangeParametersRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncChangeParameters(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::ChangeParameters(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::ChangeParametersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ChangeParameters(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncChangeRenewalSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncChangeRenewalSettings(cq, std::move(context),
                                            std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::ChangeRenewalSettings(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ChangeRenewalSettings(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncChangeOffer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::ChangeOfferRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncChangeOffer(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::ChangeOffer(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::ChangeOfferRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ChangeOffer(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncStartPaidService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::StartPaidServiceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStartPaidService(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::StartPaidService(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::StartPaidServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StartPaidService(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncSuspendEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::SuspendEntitlementRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncSuspendEntitlement(cq, std::move(context),
                                         std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::SuspendEntitlement(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::SuspendEntitlementRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SuspendEntitlement(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncCancelEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::CancelEntitlementRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelEntitlement(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::CancelEntitlement(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::CancelEntitlementRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelEntitlement(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncActivateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::ActivateEntitlementRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncActivateEntitlement(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::ActivateEntitlement(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::ActivateEntitlementRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ActivateEntitlement(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncTransferEntitlements(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::TransferEntitlementsRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncTransferEntitlements(cq, std::move(context),
                                           std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::TransferEntitlements(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::TransferEntitlementsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->TransferEntitlements(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncTransferEntitlementsToGoogle(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncTransferEntitlementsToGoogle(cq, std::move(context),
                                                   std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudChannelServiceMetadata::TransferEntitlementsToGoogle(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->TransferEntitlementsToGoogle(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerLinksResponse>
CloudChannelServiceMetadata::ListChannelPartnerLinks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListChannelPartnerLinksRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListChannelPartnerLinks(context, options, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceMetadata::GetChannelPartnerLink(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetChannelPartnerLink(context, options, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceMetadata::CreateChannelPartnerLink(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateChannelPartnerLink(context, options, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceMetadata::UpdateChannelPartnerLink(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateChannelPartnerLink(context, options, request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceMetadata::GetCustomerRepricingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCustomerRepricingConfig(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListCustomerRepricingConfigsResponse>
CloudChannelServiceMetadata::ListCustomerRepricingConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListCustomerRepricingConfigsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCustomerRepricingConfigs(context, options, request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceMetadata::CreateCustomerRepricingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCustomerRepricingConfig(context, options, request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceMetadata::UpdateCustomerRepricingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("customer_repricing_config.name=",
                           internal::UrlEncode(
                               request.customer_repricing_config().name())));
  return child_->UpdateCustomerRepricingConfig(context, options, request);
}

Status CloudChannelServiceMetadata::DeleteCustomerRepricingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCustomerRepricingConfig(context, options, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceMetadata::GetChannelPartnerRepricingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::GetChannelPartnerRepricingConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetChannelPartnerRepricingConfig(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerRepricingConfigsResponse>
CloudChannelServiceMetadata::ListChannelPartnerRepricingConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListChannelPartnerRepricingConfigs(context, options, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceMetadata::CreateChannelPartnerRepricingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::
        CreateChannelPartnerRepricingConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateChannelPartnerRepricingConfig(context, options, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceMetadata::UpdateChannelPartnerRepricingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::
        UpdateChannelPartnerRepricingConfigRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("channel_partner_repricing_config.name=",
                   internal::UrlEncode(
                       request.channel_partner_repricing_config().name())));
  return child_->UpdateChannelPartnerRepricingConfig(context, options, request);
}

Status CloudChannelServiceMetadata::DeleteChannelPartnerRepricingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::
        DeleteChannelPartnerRepricingConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteChannelPartnerRepricingConfig(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListSkuGroupsResponse>
CloudChannelServiceMetadata::ListSkuGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListSkuGroupsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSkuGroups(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListSkuGroupBillableSkusResponse>
CloudChannelServiceMetadata::ListSkuGroupBillableSkus(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListSkuGroupBillableSkusRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSkuGroupBillableSkus(context, options, request);
}

StatusOr<google::cloud::channel::v1::Offer>
CloudChannelServiceMetadata::LookupOffer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::LookupOfferRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("entitlement=", internal::UrlEncode(request.entitlement())));
  return child_->LookupOffer(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListProductsResponse>
CloudChannelServiceMetadata::ListProducts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListProductsRequest const& request) {
  SetMetadata(context, options);
  return child_->ListProducts(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListSkusResponse>
CloudChannelServiceMetadata::ListSkus(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListSkusRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSkus(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListOffersResponse>
CloudChannelServiceMetadata::ListOffers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListOffersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListOffers(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListPurchasableSkusResponse>
CloudChannelServiceMetadata::ListPurchasableSkus(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListPurchasableSkusRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("customer=", internal::UrlEncode(request.customer())));
  return child_->ListPurchasableSkus(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListPurchasableOffersResponse>
CloudChannelServiceMetadata::ListPurchasableOffers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListPurchasableOffersRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("customer=", internal::UrlEncode(request.customer())));
  return child_->ListPurchasableOffers(context, options, request);
}

StatusOr<google::cloud::channel::v1::QueryEligibleBillingAccountsResponse>
CloudChannelServiceMetadata::QueryEligibleBillingAccounts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::QueryEligibleBillingAccountsRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("customer=", internal::UrlEncode(request.customer())));
  return child_->QueryEligibleBillingAccounts(context, options, request);
}

StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
CloudChannelServiceMetadata::RegisterSubscriber(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::RegisterSubscriberRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("account=", internal::UrlEncode(request.account())));
  return child_->RegisterSubscriber(context, options, request);
}

StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
CloudChannelServiceMetadata::UnregisterSubscriber(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::UnregisterSubscriberRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("account=", internal::UrlEncode(request.account())));
  return child_->UnregisterSubscriber(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListSubscribersResponse>
CloudChannelServiceMetadata::ListSubscribers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListSubscribersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("account=", internal::UrlEncode(request.account())));
  return child_->ListSubscribers(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListEntitlementChangesResponse>
CloudChannelServiceMetadata::ListEntitlementChanges(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListEntitlementChangesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEntitlementChanges(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> CloudChannelServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void CloudChannelServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void CloudChannelServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                              Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google
