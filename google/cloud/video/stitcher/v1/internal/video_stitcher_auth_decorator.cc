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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#include "google/cloud/video/stitcher/v1/internal/video_stitcher_auth_decorator.h"
#include <google/cloud/video/stitcher/v1/video_stitcher_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace video_stitcher_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VideoStitcherServiceAuth::VideoStitcherServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<VideoStitcherServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncCreateCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateCdnKey(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> VideoStitcherServiceAuth::CreateCdnKey(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCdnKey(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListCdnKeysResponse>
VideoStitcherServiceAuth::ListCdnKeys(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListCdnKeysRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCdnKeys(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceAuth::GetCdnKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCdnKey(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncDeleteCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteCdnKey(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> VideoStitcherServiceAuth::DeleteCdnKey(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCdnKey(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncUpdateCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateCdnKey(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> VideoStitcherServiceAuth::UpdateCdnKey(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCdnKey(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceAuth::CreateVodSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateVodSession(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceAuth::GetVodSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetVodSessionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVodSession(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListVodStitchDetailsResponse>
VideoStitcherServiceAuth::ListVodStitchDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListVodStitchDetails(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceAuth::GetVodStitchDetail(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVodStitchDetail(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListVodAdTagDetailsResponse>
VideoStitcherServiceAuth::ListVodAdTagDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListVodAdTagDetails(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceAuth::GetVodAdTagDetail(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVodAdTagDetail(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListLiveAdTagDetailsResponse>
VideoStitcherServiceAuth::ListLiveAdTagDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLiveAdTagDetails(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceAuth::GetLiveAdTagDetail(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLiveAdTagDetail(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncCreateSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateSlate(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> VideoStitcherServiceAuth::CreateSlate(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateSlate(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListSlatesResponse>
VideoStitcherServiceAuth::ListSlates(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListSlatesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSlates(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceAuth::GetSlate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetSlateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSlate(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncUpdateSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateSlate(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> VideoStitcherServiceAuth::UpdateSlate(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSlate(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncDeleteSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteSlate(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> VideoStitcherServiceAuth::DeleteSlate(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteSlate(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceAuth::CreateLiveSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateLiveSession(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceAuth::GetLiveSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLiveSession(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncCreateLiveConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
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
        return child->AsyncCreateLiveConfig(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
VideoStitcherServiceAuth::CreateLiveConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateLiveConfig(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListLiveConfigsResponse>
VideoStitcherServiceAuth::ListLiveConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListLiveConfigsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLiveConfigs(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceAuth::GetLiveConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetLiveConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLiveConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncDeleteLiveConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
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
        return child->AsyncDeleteLiveConfig(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
VideoStitcherServiceAuth::DeleteLiveConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteLiveConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncUpdateLiveConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
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
        return child->AsyncUpdateLiveConfig(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
VideoStitcherServiceAuth::UpdateLiveConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateLiveConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncCreateVodConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::CreateVodConfigRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateVodConfig(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
VideoStitcherServiceAuth::CreateVodConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::CreateVodConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateVodConfig(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListVodConfigsResponse>
VideoStitcherServiceAuth::ListVodConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListVodConfigsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListVodConfigs(context, options, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodConfig>
VideoStitcherServiceAuth::GetVodConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetVodConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVodConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncDeleteVodConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::DeleteVodConfigRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteVodConfig(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
VideoStitcherServiceAuth::DeleteVodConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::DeleteVodConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteVodConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncUpdateVodConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::UpdateVodConfigRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateVodConfig(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
VideoStitcherServiceAuth::UpdateVodConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::video::stitcher::v1::UpdateVodConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateVodConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceAuth::AsyncGetOperation(
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

future<Status> VideoStitcherServiceAuth::AsyncCancelOperation(
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
}  // namespace video_stitcher_v1_internal
}  // namespace cloud
}  // namespace google
