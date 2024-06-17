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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#include "google/cloud/certificatemanager/v1/internal/certificate_manager_auth_decorator.h"
#include <google/cloud/certificatemanager/v1/certificate_manager.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace certificatemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateManagerAuth::CertificateManagerAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CertificateManagerStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::certificatemanager::v1::ListCertificatesResponse>
CertificateManagerAuth::ListCertificates(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::ListCertificatesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCertificates(context, options, request);
}

StatusOr<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerAuth::GetCertificate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::GetCertificateRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCertificate(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncCreateCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::CreateCertificateRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateCertificate(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::CreateCertificate(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::CreateCertificateRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCertificate(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncUpdateCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateCertificate(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::UpdateCertificate(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCertificate(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncDeleteCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteCertificate(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::DeleteCertificate(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCertificate(context, options, request);
}

StatusOr<google::cloud::certificatemanager::v1::ListCertificateMapsResponse>
CertificateManagerAuth::ListCertificateMaps(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::ListCertificateMapsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCertificateMaps(context, options, request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerAuth::GetCertificateMap(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCertificateMap(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncCreateCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateCertificateMap(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::CreateCertificateMap(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCertificateMap(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncUpdateCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateCertificateMap(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::UpdateCertificateMap(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCertificateMap(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncDeleteCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteCertificateMap(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::DeleteCertificateMap(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCertificateMap(context, options, request);
}

StatusOr<
    google::cloud::certificatemanager::v1::ListCertificateMapEntriesResponse>
CertificateManagerAuth::ListCertificateMapEntries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::
        ListCertificateMapEntriesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCertificateMapEntries(context, options, request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerAuth::GetCertificateMapEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::GetCertificateMapEntryRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCertificateMapEntry(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncCreateCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::
        CreateCertificateMapEntryRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateCertificateMapEntry(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::CreateCertificateMapEntry(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::
        CreateCertificateMapEntryRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCertificateMapEntry(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncUpdateCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::
        UpdateCertificateMapEntryRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateCertificateMapEntry(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::UpdateCertificateMapEntry(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::
        UpdateCertificateMapEntryRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCertificateMapEntry(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncDeleteCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::
        DeleteCertificateMapEntryRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteCertificateMapEntry(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::DeleteCertificateMapEntry(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::
        DeleteCertificateMapEntryRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCertificateMapEntry(context, options, request);
}

StatusOr<google::cloud::certificatemanager::v1::ListDnsAuthorizationsResponse>
CertificateManagerAuth::ListDnsAuthorizations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDnsAuthorizations(context, options, request);
}

StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerAuth::GetDnsAuthorization(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDnsAuthorization(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncCreateDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateDnsAuthorization(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::CreateDnsAuthorization(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDnsAuthorization(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncUpdateDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateDnsAuthorization(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::UpdateDnsAuthorization(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateDnsAuthorization(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncDeleteDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteDnsAuthorization(cq, *std::move(context),
                                                  std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::DeleteDnsAuthorization(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDnsAuthorization(context, options, request);
}

StatusOr<google::cloud::certificatemanager::v1::
             ListCertificateIssuanceConfigsResponse>
CertificateManagerAuth::ListCertificateIssuanceConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::
        ListCertificateIssuanceConfigsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCertificateIssuanceConfigs(context, options, request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerAuth::GetCertificateIssuanceConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::
        GetCertificateIssuanceConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCertificateIssuanceConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncCreateCertificateIssuanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::
        CreateCertificateIssuanceConfigRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateCertificateIssuanceConfig(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::CreateCertificateIssuanceConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::
        CreateCertificateIssuanceConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCertificateIssuanceConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncDeleteCertificateIssuanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::
        DeleteCertificateIssuanceConfigRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteCertificateIssuanceConfig(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::DeleteCertificateIssuanceConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::
        DeleteCertificateIssuanceConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCertificateIssuanceConfig(context, options, request);
}

StatusOr<google::cloud::certificatemanager::v1::ListTrustConfigsResponse>
CertificateManagerAuth::ListTrustConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::ListTrustConfigsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTrustConfigs(context, options, request);
}

StatusOr<google::cloud::certificatemanager::v1::TrustConfig>
CertificateManagerAuth::GetTrustConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::GetTrustConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTrustConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncCreateTrustConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::CreateTrustConfigRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateTrustConfig(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::CreateTrustConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::CreateTrustConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTrustConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncUpdateTrustConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::UpdateTrustConfigRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateTrustConfig(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::UpdateTrustConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::UpdateTrustConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateTrustConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncDeleteTrustConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::DeleteTrustConfigRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteTrustConfig(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CertificateManagerAuth::DeleteTrustConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::DeleteTrustConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTrustConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> CertificateManagerAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager_v1_internal
}  // namespace cloud
}  // namespace google
