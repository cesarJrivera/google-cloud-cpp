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
// source: google/cloud/managedkafka/v1/managed_kafka.proto

#include "google/cloud/managedkafka/v1/internal/managed_kafka_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/managedkafka/v1/managed_kafka.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace managedkafka_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedKafkaLogging::ManagedKafkaLogging(
    std::shared_ptr<ManagedKafkaStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::managedkafka::v1::ListClustersResponse>
ManagedKafkaLogging::ListClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::ListClustersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::managedkafka::v1::ListClustersRequest const& request) {
        return child_->ListClusters(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::managedkafka::v1::Cluster>
ManagedKafkaLogging::GetCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::GetClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::managedkafka::v1::GetClusterRequest const& request) {
        return child_->GetCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaLogging::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedkafka::v1::CreateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::managedkafka::v1::CreateClusterRequest const&
                 request) {
        return child_->AsyncCreateCluster(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> ManagedKafkaLogging::CreateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::managedkafka::v1::CreateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::managedkafka::v1::CreateClusterRequest const&
                 request) {
        return child_->CreateCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaLogging::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedkafka::v1::UpdateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::managedkafka::v1::UpdateClusterRequest const&
                 request) {
        return child_->AsyncUpdateCluster(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> ManagedKafkaLogging::UpdateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::managedkafka::v1::UpdateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::managedkafka::v1::UpdateClusterRequest const&
                 request) {
        return child_->UpdateCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaLogging::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedkafka::v1::DeleteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::managedkafka::v1::DeleteClusterRequest const&
                 request) {
        return child_->AsyncDeleteCluster(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> ManagedKafkaLogging::DeleteCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::managedkafka::v1::DeleteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::managedkafka::v1::DeleteClusterRequest const&
                 request) {
        return child_->DeleteCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::managedkafka::v1::ListTopicsResponse>
ManagedKafkaLogging::ListTopics(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::ListTopicsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::managedkafka::v1::ListTopicsRequest const& request) {
        return child_->ListTopics(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::managedkafka::v1::Topic> ManagedKafkaLogging::GetTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::GetTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::managedkafka::v1::GetTopicRequest const& request) {
        return child_->GetTopic(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::managedkafka::v1::Topic>
ManagedKafkaLogging::CreateTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::CreateTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::managedkafka::v1::CreateTopicRequest const& request) {
        return child_->CreateTopic(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::managedkafka::v1::Topic>
ManagedKafkaLogging::UpdateTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::UpdateTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::managedkafka::v1::UpdateTopicRequest const& request) {
        return child_->UpdateTopic(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ManagedKafkaLogging::DeleteTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::DeleteTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::managedkafka::v1::DeleteTopicRequest const& request) {
        return child_->DeleteTopic(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::managedkafka::v1::ListConsumerGroupsResponse>
ManagedKafkaLogging::ListConsumerGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::ListConsumerGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::managedkafka::v1::ListConsumerGroupsRequest const&
                 request) {
        return child_->ListConsumerGroups(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::managedkafka::v1::ConsumerGroup>
ManagedKafkaLogging::GetConsumerGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::GetConsumerGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::managedkafka::v1::GetConsumerGroupRequest const&
                 request) {
        return child_->GetConsumerGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::managedkafka::v1::ConsumerGroup>
ManagedKafkaLogging::UpdateConsumerGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::UpdateConsumerGroupRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::managedkafka::v1::UpdateConsumerGroupRequest const&
                 request) {
        return child_->UpdateConsumerGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ManagedKafkaLogging::DeleteConsumerGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::DeleteConsumerGroupRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::managedkafka::v1::DeleteConsumerGroupRequest const&
                 request) {
        return child_->DeleteConsumerGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaLogging::AsyncGetOperation(
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

future<Status> ManagedKafkaLogging::AsyncCancelOperation(
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
}  // namespace managedkafka_v1_internal
}  // namespace cloud
}  // namespace google
