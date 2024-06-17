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
// source:
// google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto

#include "google/cloud/compute/region_instance_templates/v1/internal/region_instance_templates_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_instance_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionInstanceTemplatesRestLogging::RegionInstanceTemplatesRestLogging(
    std::shared_ptr<RegionInstanceTemplatesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceTemplatesRestLogging::AsyncDeleteInstanceTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_instance_templates::v1::
        DeleteInstanceTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::region_instance_templates::v1::
                 DeleteInstanceTemplateRequest const& request) {
        return child_->AsyncDeleteInstanceTemplate(cq, std::move(rest_context),
                                                   std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceTemplatesRestLogging::DeleteInstanceTemplate(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instance_templates::v1::
        DeleteInstanceTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instance_templates::v1::
                 DeleteInstanceTemplateRequest const& request) {
        return child_->DeleteInstanceTemplate(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
RegionInstanceTemplatesRestLogging::GetInstanceTemplate(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instance_templates::v1::
        GetInstanceTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instance_templates::v1::
                 GetInstanceTemplateRequest const& request) {
        return child_->GetInstanceTemplate(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceTemplatesRestLogging::AsyncInsertInstanceTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_instance_templates::v1::
        InsertInstanceTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::region_instance_templates::v1::
                 InsertInstanceTemplateRequest const& request) {
        return child_->AsyncInsertInstanceTemplate(cq, std::move(rest_context),
                                                   std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceTemplatesRestLogging::InsertInstanceTemplate(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instance_templates::v1::
        InsertInstanceTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instance_templates::v1::
                 InsertInstanceTemplateRequest const& request) {
        return child_->InsertInstanceTemplate(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateList>
RegionInstanceTemplatesRestLogging::ListRegionInstanceTemplates(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instance_templates::v1::
        ListRegionInstanceTemplatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instance_templates::v1::
                 ListRegionInstanceTemplatesRequest const& request) {
        return child_->ListRegionInstanceTemplates(rest_context, options,
                                                   request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceTemplatesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::region_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context),
                                         std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> RegionInstanceTemplatesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::region_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_templates_v1_internal
}  // namespace cloud
}  // namespace google
