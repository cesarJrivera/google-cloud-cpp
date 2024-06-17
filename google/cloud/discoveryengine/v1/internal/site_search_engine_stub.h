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
// source: google/cloud/discoveryengine/v1/site_search_engine_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_SITE_SEARCH_ENGINE_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_SITE_SEARCH_ENGINE_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/discoveryengine/v1/site_search_engine_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SiteSearchEngineServiceStub {
 public:
  virtual ~SiteSearchEngineServiceStub() = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::SiteSearchEngine>
  GetSiteSearchEngine(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetSiteSearchEngineRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateTargetSite(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::CreateTargetSiteRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateTargetSite(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::CreateTargetSiteRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncBatchCreateTargetSites(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::BatchCreateTargetSitesRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> BatchCreateTargetSites(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::BatchCreateTargetSitesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::TargetSite>
  GetTargetSite(grpc::ClientContext& context, Options const& options,
                google::cloud::discoveryengine::v1::GetTargetSiteRequest const&
                    request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateTargetSite(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::UpdateTargetSiteRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateTargetSite(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::UpdateTargetSiteRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTargetSite(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::DeleteTargetSiteRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteTargetSite(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::DeleteTargetSiteRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::ListTargetSitesResponse>
  ListTargetSites(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::ListTargetSitesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncEnableAdvancedSiteSearch(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::EnableAdvancedSiteSearchRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> EnableAdvancedSiteSearch(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::EnableAdvancedSiteSearchRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDisableAdvancedSiteSearch(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::
          DisableAdvancedSiteSearchRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DisableAdvancedSiteSearch(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::
          DisableAdvancedSiteSearchRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRecrawlUris(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::RecrawlUrisRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> RecrawlUris(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::RecrawlUrisRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncBatchVerifyTargetSites(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::BatchVerifyTargetSitesRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> BatchVerifyTargetSites(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::BatchVerifyTargetSitesRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::discoveryengine::v1::FetchDomainVerificationStatusResponse>
  FetchDomainVerificationStatus(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::
          FetchDomainVerificationStatusRequest const& request) = 0;

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

class DefaultSiteSearchEngineServiceStub : public SiteSearchEngineServiceStub {
 public:
  DefaultSiteSearchEngineServiceStub(
      std::unique_ptr<google::cloud::discoveryengine::v1::
                          SiteSearchEngineService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::discoveryengine::v1::SiteSearchEngine>
  GetSiteSearchEngine(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetSiteSearchEngineRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTargetSite(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::CreateTargetSiteRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateTargetSite(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::CreateTargetSiteRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchCreateTargetSites(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::BatchCreateTargetSitesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchCreateTargetSites(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::BatchCreateTargetSitesRequest const&
          request) override;

  StatusOr<google::cloud::discoveryengine::v1::TargetSite> GetTargetSite(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetTargetSiteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTargetSite(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::UpdateTargetSiteRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateTargetSite(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::UpdateTargetSiteRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTargetSite(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::DeleteTargetSiteRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteTargetSite(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::DeleteTargetSiteRequest const&
          request) override;

  StatusOr<google::cloud::discoveryengine::v1::ListTargetSitesResponse>
  ListTargetSites(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::ListTargetSitesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncEnableAdvancedSiteSearch(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::EnableAdvancedSiteSearchRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> EnableAdvancedSiteSearch(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::EnableAdvancedSiteSearchRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDisableAdvancedSiteSearch(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::
          DisableAdvancedSiteSearchRequest const& request) override;

  StatusOr<google::longrunning::Operation> DisableAdvancedSiteSearch(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::
          DisableAdvancedSiteSearchRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRecrawlUris(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::RecrawlUrisRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RecrawlUris(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::RecrawlUrisRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchVerifyTargetSites(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::BatchVerifyTargetSitesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchVerifyTargetSites(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::BatchVerifyTargetSitesRequest const&
          request) override;

  StatusOr<
      google::cloud::discoveryengine::v1::FetchDomainVerificationStatusResponse>
  FetchDomainVerificationStatus(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::
          FetchDomainVerificationStatusRequest const& request) override;

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
  std::unique_ptr<google::cloud::discoveryengine::v1::SiteSearchEngineService::
                      StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_SITE_SEARCH_ENGINE_STUB_H
