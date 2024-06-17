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
// source: google/cloud/security/privateca/v1/service.proto

#include "google/cloud/privateca/v1/internal/certificate_authority_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/security/privateca/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace privateca_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateAuthorityServiceLogging::CertificateAuthorityServiceLogging(
    std::shared_ptr<CertificateAuthorityServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceLogging::CreateCertificate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::CreateCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 CreateCertificateRequest const& request) {
        return child_->CreateCertificate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceLogging::GetCertificate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::GetCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::security::privateca::v1::GetCertificateRequest const&
              request) {
        return child_->GetCertificate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::ListCertificatesResponse>
CertificateAuthorityServiceLogging::ListCertificates(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::ListCertificatesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::security::privateca::v1::ListCertificatesRequest const&
              request) {
        return child_->ListCertificates(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceLogging::RevokeCertificate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::RevokeCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 RevokeCertificateRequest const& request) {
        return child_->RevokeCertificate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceLogging::UpdateCertificate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::UpdateCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 UpdateCertificateRequest const& request) {
        return child_->UpdateCertificate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncActivateCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        ActivateCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 ActivateCertificateAuthorityRequest const& request) {
        return child_->AsyncActivateCertificateAuthority(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::ActivateCertificateAuthority(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        ActivateCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 ActivateCertificateAuthorityRequest const& request) {
        return child_->ActivateCertificateAuthority(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncCreateCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        CreateCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 CreateCertificateAuthorityRequest const& request) {
        return child_->AsyncCreateCertificateAuthority(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::CreateCertificateAuthority(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        CreateCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 CreateCertificateAuthorityRequest const& request) {
        return child_->CreateCertificateAuthority(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncDisableCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        DisableCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 DisableCertificateAuthorityRequest const& request) {
        return child_->AsyncDisableCertificateAuthority(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::DisableCertificateAuthority(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        DisableCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 DisableCertificateAuthorityRequest const& request) {
        return child_->DisableCertificateAuthority(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncEnableCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        EnableCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 EnableCertificateAuthorityRequest const& request) {
        return child_->AsyncEnableCertificateAuthority(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::EnableCertificateAuthority(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        EnableCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 EnableCertificateAuthorityRequest const& request) {
        return child_->EnableCertificateAuthority(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::
             FetchCertificateAuthorityCsrResponse>
CertificateAuthorityServiceLogging::FetchCertificateAuthorityCsr(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::
        FetchCertificateAuthorityCsrRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 FetchCertificateAuthorityCsrRequest const& request) {
        return child_->FetchCertificateAuthorityCsr(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceLogging::GetCertificateAuthority(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::
        GetCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 GetCertificateAuthorityRequest const& request) {
        return child_->GetCertificateAuthority(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::security::privateca::v1::ListCertificateAuthoritiesResponse>
CertificateAuthorityServiceLogging::ListCertificateAuthorities(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::
        ListCertificateAuthoritiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 ListCertificateAuthoritiesRequest const& request) {
        return child_->ListCertificateAuthorities(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncUndeleteCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        UndeleteCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 UndeleteCertificateAuthorityRequest const& request) {
        return child_->AsyncUndeleteCertificateAuthority(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::UndeleteCertificateAuthority(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        UndeleteCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 UndeleteCertificateAuthorityRequest const& request) {
        return child_->UndeleteCertificateAuthority(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncDeleteCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        DeleteCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 DeleteCertificateAuthorityRequest const& request) {
        return child_->AsyncDeleteCertificateAuthority(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::DeleteCertificateAuthority(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        DeleteCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 DeleteCertificateAuthorityRequest const& request) {
        return child_->DeleteCertificateAuthority(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncUpdateCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        UpdateCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 UpdateCertificateAuthorityRequest const& request) {
        return child_->AsyncUpdateCertificateAuthority(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::UpdateCertificateAuthority(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        UpdateCertificateAuthorityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 UpdateCertificateAuthorityRequest const& request) {
        return child_->UpdateCertificateAuthority(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncCreateCaPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::CreateCaPoolRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::CreateCaPoolRequest const&
                 request) {
        return child_->AsyncCreateCaPool(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::CreateCaPool(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::CreateCaPoolRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::CreateCaPoolRequest const&
                 request) {
        return child_->CreateCaPool(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncUpdateCaPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
                 request) {
        return child_->AsyncUpdateCaPool(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::UpdateCaPool(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
                 request) {
        return child_->UpdateCaPool(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceLogging::GetCaPool(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::GetCaPoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::GetCaPoolRequest const&
                 request) {
        return child_->GetCaPool(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::ListCaPoolsResponse>
CertificateAuthorityServiceLogging::ListCaPools(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::ListCaPoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::ListCaPoolsRequest const&
                 request) {
        return child_->ListCaPools(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncDeleteCaPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
                 request) {
        return child_->AsyncDeleteCaPool(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::DeleteCaPool(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
                 request) {
        return child_->DeleteCaPool(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
CertificateAuthorityServiceLogging::FetchCaCerts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::FetchCaCertsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::FetchCaCertsRequest const&
                 request) {
        return child_->FetchCaCerts(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceLogging::GetCertificateRevocationList(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::
        GetCertificateRevocationListRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 GetCertificateRevocationListRequest const& request) {
        return child_->GetCertificateRevocationList(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::
             ListCertificateRevocationListsResponse>
CertificateAuthorityServiceLogging::ListCertificateRevocationLists(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::
        ListCertificateRevocationListsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 ListCertificateRevocationListsRequest const& request) {
        return child_->ListCertificateRevocationLists(context, options,
                                                      request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncUpdateCertificateRevocationList(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        UpdateCertificateRevocationListRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 UpdateCertificateRevocationListRequest const& request) {
        return child_->AsyncUpdateCertificateRevocationList(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::UpdateCertificateRevocationList(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        UpdateCertificateRevocationListRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 UpdateCertificateRevocationListRequest const& request) {
        return child_->UpdateCertificateRevocationList(context, options,
                                                       request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncCreateCertificateTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        CreateCertificateTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 CreateCertificateTemplateRequest const& request) {
        return child_->AsyncCreateCertificateTemplate(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::CreateCertificateTemplate(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        CreateCertificateTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 CreateCertificateTemplateRequest const& request) {
        return child_->CreateCertificateTemplate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncDeleteCertificateTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        DeleteCertificateTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 DeleteCertificateTemplateRequest const& request) {
        return child_->AsyncDeleteCertificateTemplate(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::DeleteCertificateTemplate(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        DeleteCertificateTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 DeleteCertificateTemplateRequest const& request) {
        return child_->DeleteCertificateTemplate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceLogging::GetCertificateTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::GetCertificateTemplateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 GetCertificateTemplateRequest const& request) {
        return child_->GetCertificateTemplate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::security::privateca::v1::ListCertificateTemplatesResponse>
CertificateAuthorityServiceLogging::ListCertificateTemplates(
    grpc::ClientContext& context, Options const& options,
    google::cloud::security::privateca::v1::
        ListCertificateTemplatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 ListCertificateTemplatesRequest const& request) {
        return child_->ListCertificateTemplates(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncUpdateCertificateTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::security::privateca::v1::
        UpdateCertificateTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::security::privateca::v1::
                 UpdateCertificateTemplateRequest const& request) {
        return child_->AsyncUpdateCertificateTemplate(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateAuthorityServiceLogging::UpdateCertificateTemplate(
    grpc::ClientContext& context, Options options,
    google::cloud::security::privateca::v1::
        UpdateCertificateTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::privateca::v1::
                 UpdateCertificateTemplateRequest const& request) {
        return child_->UpdateCertificateTemplate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceLogging::AsyncGetOperation(
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

future<Status> CertificateAuthorityServiceLogging::AsyncCancelOperation(
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
}  // namespace privateca_v1_internal
}  // namespace cloud
}  // namespace google
