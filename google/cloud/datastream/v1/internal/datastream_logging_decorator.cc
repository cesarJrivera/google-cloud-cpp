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
// source: google/cloud/datastream/v1/datastream.proto

#include "google/cloud/datastream/v1/internal/datastream_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datastream/v1/datastream.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastreamLogging::DatastreamLogging(std::shared_ptr<DatastreamStub> child,
                                     TracingOptions tracing_options,
                                     std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::datastream::v1::ListConnectionProfilesResponse>
DatastreamLogging::ListConnectionProfiles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::ListConnectionProfilesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::ListConnectionProfilesRequest const&
                 request) {
        return child_->ListConnectionProfiles(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::ConnectionProfile>
DatastreamLogging::GetConnectionProfile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::GetConnectionProfileRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::GetConnectionProfileRequest const&
                 request) {
        return child_->GetConnectionProfile(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncCreateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datastream::v1::CreateConnectionProfileRequest const&
              request) {
        return child_->AsyncCreateConnectionProfile(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DatastreamLogging::CreateConnectionProfile(
    grpc::ClientContext& context, Options options,
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datastream::v1::CreateConnectionProfileRequest const&
              request) {
        return child_->CreateConnectionProfile(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncUpdateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
              request) {
        return child_->AsyncUpdateConnectionProfile(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DatastreamLogging::UpdateConnectionProfile(
    grpc::ClientContext& context, Options options,
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
              request) {
        return child_->UpdateConnectionProfile(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncDeleteConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
              request) {
        return child_->AsyncDeleteConnectionProfile(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DatastreamLogging::DeleteConnectionProfile(
    grpc::ClientContext& context, Options options,
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
              request) {
        return child_->DeleteConnectionProfile(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
DatastreamLogging::DiscoverConnectionProfile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
              request) {
        return child_->DiscoverConnectionProfile(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::ListStreamsResponse>
DatastreamLogging::ListStreams(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::ListStreamsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::ListStreamsRequest const& request) {
        return child_->ListStreams(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::Stream> DatastreamLogging::GetStream(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::GetStreamRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::GetStreamRequest const& request) {
        return child_->GetStream(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncCreateStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datastream::v1::CreateStreamRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datastream::v1::CreateStreamRequest const& request) {
        return child_->AsyncCreateStream(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> DatastreamLogging::CreateStream(
    grpc::ClientContext& context, Options options,
    google::cloud::datastream::v1::CreateStreamRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datastream::v1::CreateStreamRequest const& request) {
        return child_->CreateStream(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncUpdateStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datastream::v1::UpdateStreamRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datastream::v1::UpdateStreamRequest const& request) {
        return child_->AsyncUpdateStream(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> DatastreamLogging::UpdateStream(
    grpc::ClientContext& context, Options options,
    google::cloud::datastream::v1::UpdateStreamRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datastream::v1::UpdateStreamRequest const& request) {
        return child_->UpdateStream(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncDeleteStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datastream::v1::DeleteStreamRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datastream::v1::DeleteStreamRequest const& request) {
        return child_->AsyncDeleteStream(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> DatastreamLogging::DeleteStream(
    grpc::ClientContext& context, Options options,
    google::cloud::datastream::v1::DeleteStreamRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datastream::v1::DeleteStreamRequest const& request) {
        return child_->DeleteStream(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamLogging::GetStreamObject(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::GetStreamObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::GetStreamObjectRequest const&
                 request) {
        return child_->GetStreamObject(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamLogging::LookupStreamObject(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::LookupStreamObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::LookupStreamObjectRequest const&
                 request) {
        return child_->LookupStreamObject(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::ListStreamObjectsResponse>
DatastreamLogging::ListStreamObjects(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::ListStreamObjectsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::ListStreamObjectsRequest const&
                 request) {
        return child_->ListStreamObjects(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
DatastreamLogging::StartBackfillJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::StartBackfillJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::StartBackfillJobRequest const&
                 request) {
        return child_->StartBackfillJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
DatastreamLogging::StopBackfillJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::StopBackfillJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::StopBackfillJobRequest const&
                 request) {
        return child_->StopBackfillJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::FetchStaticIpsResponse>
DatastreamLogging::FetchStaticIps(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::FetchStaticIpsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datastream::v1::FetchStaticIpsRequest const& request) {
        return child_->FetchStaticIps(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncCreatePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
              request) {
        return child_->AsyncCreatePrivateConnection(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DatastreamLogging::CreatePrivateConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
              request) {
        return child_->CreatePrivateConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::PrivateConnection>
DatastreamLogging::GetPrivateConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::GetPrivateConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::GetPrivateConnectionRequest const&
                 request) {
        return child_->GetPrivateConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::ListPrivateConnectionsResponse>
DatastreamLogging::ListPrivateConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::ListPrivateConnectionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::ListPrivateConnectionsRequest const&
                 request) {
        return child_->ListPrivateConnections(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncDeletePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
              request) {
        return child_->AsyncDeletePrivateConnection(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DatastreamLogging::DeletePrivateConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
              request) {
        return child_->DeletePrivateConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncCreateRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datastream::v1::CreateRouteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::datastream::v1::CreateRouteRequest const& request) {
        return child_->AsyncCreateRoute(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> DatastreamLogging::CreateRoute(
    grpc::ClientContext& context, Options options,
    google::cloud::datastream::v1::CreateRouteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::CreateRouteRequest const& request) {
        return child_->CreateRoute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::Route> DatastreamLogging::GetRoute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::GetRouteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::GetRouteRequest const& request) {
        return child_->GetRoute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datastream::v1::ListRoutesResponse>
DatastreamLogging::ListRoutes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datastream::v1::ListRoutesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::ListRoutesRequest const& request) {
        return child_->ListRoutes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncDeleteRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datastream::v1::DeleteRouteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::datastream::v1::DeleteRouteRequest const& request) {
        return child_->AsyncDeleteRoute(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> DatastreamLogging::DeleteRoute(
    grpc::ClientContext& context, Options options,
    google::cloud::datastream::v1::DeleteRouteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datastream::v1::DeleteRouteRequest const& request) {
        return child_->DeleteRoute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> DatastreamLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream_v1_internal
}  // namespace cloud
}  // namespace google
