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
// source: google/cloud/dataplex/v1/data_taxonomy.proto

#include "google/cloud/dataplex/v1/internal/data_taxonomy_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataplex/v1/data_taxonomy.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataTaxonomyServiceLogging::DataTaxonomyServiceLogging(
    std::shared_ptr<DataTaxonomyServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceLogging::AsyncCreateDataTaxonomy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::dataplex::v1::CreateDataTaxonomyRequest const&
                 request) {
        return child_->AsyncCreateDataTaxonomy(cq, std::move(context),
                                               std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceLogging::CreateDataTaxonomy(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::CreateDataTaxonomyRequest const&
                 request) {
        return child_->CreateDataTaxonomy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceLogging::AsyncUpdateDataTaxonomy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const&
                 request) {
        return child_->AsyncUpdateDataTaxonomy(cq, std::move(context),
                                               std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceLogging::UpdateDataTaxonomy(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const&
                 request) {
        return child_->UpdateDataTaxonomy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceLogging::AsyncDeleteDataTaxonomy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const&
                 request) {
        return child_->AsyncDeleteDataTaxonomy(cq, std::move(context),
                                               std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceLogging::DeleteDataTaxonomy(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const&
                 request) {
        return child_->DeleteDataTaxonomy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListDataTaxonomiesResponse>
DataTaxonomyServiceLogging::ListDataTaxonomies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataTaxonomiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::ListDataTaxonomiesRequest const&
                 request) {
        return child_->ListDataTaxonomies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::DataTaxonomy>
DataTaxonomyServiceLogging::GetDataTaxonomy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::GetDataTaxonomyRequest const& request) {
        return child_->GetDataTaxonomy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceLogging::AsyncCreateDataAttributeBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
              request) {
        return child_->AsyncCreateDataAttributeBinding(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceLogging::CreateDataAttributeBinding(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
              request) {
        return child_->CreateDataAttributeBinding(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceLogging::AsyncUpdateDataAttributeBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
              request) {
        return child_->AsyncUpdateDataAttributeBinding(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceLogging::UpdateDataAttributeBinding(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
              request) {
        return child_->UpdateDataAttributeBinding(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceLogging::AsyncDeleteDataAttributeBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
              request) {
        return child_->AsyncDeleteDataAttributeBinding(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceLogging::DeleteDataAttributeBinding(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
              request) {
        return child_->DeleteDataAttributeBinding(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListDataAttributeBindingsResponse>
DataTaxonomyServiceLogging::ListDataAttributeBindings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataAttributeBindingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::ListDataAttributeBindingsRequest const&
              request) {
        return child_->ListDataAttributeBindings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>
DataTaxonomyServiceLogging::GetDataAttributeBinding(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataAttributeBindingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::GetDataAttributeBindingRequest const&
                 request) {
        return child_->GetDataAttributeBinding(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceLogging::AsyncCreateDataAttribute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateDataAttributeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::dataplex::v1::CreateDataAttributeRequest const&
                 request) {
        return child_->AsyncCreateDataAttribute(cq, std::move(context),
                                                std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceLogging::CreateDataAttribute(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateDataAttributeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::CreateDataAttributeRequest const&
                 request) {
        return child_->CreateDataAttribute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceLogging::AsyncUpdateDataAttribute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::dataplex::v1::UpdateDataAttributeRequest const&
                 request) {
        return child_->AsyncUpdateDataAttribute(cq, std::move(context),
                                                std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceLogging::UpdateDataAttribute(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::UpdateDataAttributeRequest const&
                 request) {
        return child_->UpdateDataAttribute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceLogging::AsyncDeleteDataAttribute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::dataplex::v1::DeleteDataAttributeRequest const&
                 request) {
        return child_->AsyncDeleteDataAttribute(cq, std::move(context),
                                                std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceLogging::DeleteDataAttribute(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::DeleteDataAttributeRequest const&
                 request) {
        return child_->DeleteDataAttribute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListDataAttributesResponse>
DataTaxonomyServiceLogging::ListDataAttributes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataAttributesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::ListDataAttributesRequest const&
                 request) {
        return child_->ListDataAttributes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::DataAttribute>
DataTaxonomyServiceLogging::GetDataAttribute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataAttributeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::GetDataAttributeRequest const& request) {
        return child_->GetDataAttribute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceLogging::AsyncGetOperation(
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

future<Status> DataTaxonomyServiceLogging::AsyncCancelOperation(
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
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
