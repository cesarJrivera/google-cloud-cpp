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
// source: google/cloud/eventarc/v1/eventarc.proto

#include "google/cloud/eventarc/v1/internal/eventarc_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/eventarc/v1/eventarc.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace eventarc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EventarcLogging::EventarcLogging(std::shared_ptr<EventarcStub> child,
                                 TracingOptions tracing_options,
                                 std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::eventarc::v1::Trigger> EventarcLogging::GetTrigger(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetTriggerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::GetTriggerRequest const& request) {
        return child_->GetTrigger(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::eventarc::v1::ListTriggersResponse>
EventarcLogging::ListTriggers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListTriggersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::ListTriggersRequest const& request) {
        return child_->ListTriggers(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EventarcLogging::AsyncCreateTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::CreateTriggerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::eventarc::v1::CreateTriggerRequest const& request) {
        return child_->AsyncCreateTrigger(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EventarcLogging::CreateTrigger(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::CreateTriggerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::CreateTriggerRequest const& request) {
        return child_->CreateTrigger(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EventarcLogging::AsyncUpdateTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::UpdateTriggerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::eventarc::v1::UpdateTriggerRequest const& request) {
        return child_->AsyncUpdateTrigger(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EventarcLogging::UpdateTrigger(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::UpdateTriggerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::UpdateTriggerRequest const& request) {
        return child_->UpdateTrigger(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EventarcLogging::AsyncDeleteTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::DeleteTriggerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::eventarc::v1::DeleteTriggerRequest const& request) {
        return child_->AsyncDeleteTrigger(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EventarcLogging::DeleteTrigger(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::DeleteTriggerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::DeleteTriggerRequest const& request) {
        return child_->DeleteTrigger(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::eventarc::v1::Channel> EventarcLogging::GetChannel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetChannelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::GetChannelRequest const& request) {
        return child_->GetChannel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::eventarc::v1::ListChannelsResponse>
EventarcLogging::ListChannels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListChannelsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::ListChannelsRequest const& request) {
        return child_->ListChannels(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EventarcLogging::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::CreateChannelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::eventarc::v1::CreateChannelRequest const& request) {
        return child_->AsyncCreateChannel(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EventarcLogging::CreateChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::CreateChannelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::CreateChannelRequest const& request) {
        return child_->CreateChannel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EventarcLogging::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::UpdateChannelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::eventarc::v1::UpdateChannelRequest const& request) {
        return child_->AsyncUpdateChannel(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EventarcLogging::UpdateChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::UpdateChannelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::UpdateChannelRequest const& request) {
        return child_->UpdateChannel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EventarcLogging::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::DeleteChannelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::eventarc::v1::DeleteChannelRequest const& request) {
        return child_->AsyncDeleteChannel(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EventarcLogging::DeleteChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::DeleteChannelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::DeleteChannelRequest const& request) {
        return child_->DeleteChannel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::eventarc::v1::Provider> EventarcLogging::GetProvider(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetProviderRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::GetProviderRequest const& request) {
        return child_->GetProvider(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::eventarc::v1::ListProvidersResponse>
EventarcLogging::ListProviders(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListProvidersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::ListProvidersRequest const& request) {
        return child_->ListProviders(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::eventarc::v1::ChannelConnection>
EventarcLogging::GetChannelConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetChannelConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::GetChannelConnectionRequest const&
                 request) {
        return child_->GetChannelConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::eventarc::v1::ListChannelConnectionsResponse>
EventarcLogging::ListChannelConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListChannelConnectionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::ListChannelConnectionsRequest const&
                 request) {
        return child_->ListChannelConnections(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EventarcLogging::AsyncCreateChannelConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
                 request) {
        return child_->AsyncCreateChannelConnection(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
EventarcLogging::CreateChannelConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
                 request) {
        return child_->CreateChannelConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EventarcLogging::AsyncDeleteChannelConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
                 request) {
        return child_->AsyncDeleteChannelConnection(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
EventarcLogging::DeleteChannelConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
                 request) {
        return child_->DeleteChannelConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcLogging::GetGoogleChannelConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const&
                 request) {
        return child_->GetGoogleChannelConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcLogging::UpdateGoogleChannelConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
              request) {
        return child_->UpdateGoogleChannelConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EventarcLogging::AsyncGetOperation(
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

future<Status> EventarcLogging::AsyncCancelOperation(
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
}  // namespace eventarc_v1_internal
}  // namespace cloud
}  // namespace google
