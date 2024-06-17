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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#include "google/cloud/datacatalog/lineage/v1/internal/lineage_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datacatalog/lineage/v1/lineage.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LineageMetadata::LineageMetadata(
    std::shared_ptr<LineageStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<
    google::cloud::datacatalog::lineage::v1::ProcessOpenLineageRunEventResponse>
LineageMetadata::ProcessOpenLineageRunEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::
        ProcessOpenLineageRunEventRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ProcessOpenLineageRunEvent(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageMetadata::CreateProcess(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateProcess(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageMetadata::UpdateProcess(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("process.name=",
                           internal::UrlEncode(request.process().name())));
  return child_->UpdateProcess(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageMetadata::GetProcess(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::GetProcessRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProcess(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListProcessesResponse>
LineageMetadata::ListProcesses(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::ListProcessesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProcesses(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LineageMetadata::AsyncDeleteProcess(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteProcess(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation> LineageMetadata::DeleteProcess(
    grpc::ClientContext& context, Options options,
    google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteProcess(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageMetadata::CreateRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::CreateRunRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateRun(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageMetadata::UpdateRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::UpdateRunRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("run.name=", internal::UrlEncode(request.run().name())));
  return child_->UpdateRun(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run> LineageMetadata::GetRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::GetRunRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRun(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListRunsResponse>
LineageMetadata::ListRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::ListRunsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRuns(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LineageMetadata::AsyncDeleteRun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datacatalog::lineage::v1::DeleteRunRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteRun(cq, std::move(context), std::move(options),
                                request);
}

StatusOr<google::longrunning::Operation> LineageMetadata::DeleteRun(
    grpc::ClientContext& context, Options options,
    google::cloud::datacatalog::lineage::v1::DeleteRunRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteRun(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageMetadata::CreateLineageEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateLineageEvent(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageMetadata::GetLineageEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLineageEvent(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListLineageEventsResponse>
LineageMetadata::ListLineageEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::ListLineageEventsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListLineageEvents(context, options, request);
}

Status LineageMetadata::DeleteLineageEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteLineageEvent(context, options, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::SearchLinksResponse>
LineageMetadata::SearchLinks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::SearchLinksRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchLinks(context, options, request);
}

StatusOr<
    google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesResponse>
LineageMetadata::BatchSearchLinkProcesses(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::
        BatchSearchLinkProcessesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->BatchSearchLinkProcesses(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LineageMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> LineageMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void LineageMetadata::SetMetadata(grpc::ClientContext& context,
                                  Options const& options,
                                  std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void LineageMetadata::SetMetadata(grpc::ClientContext& context,
                                  Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1_internal
}  // namespace cloud
}  // namespace google
