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
// source: google/cloud/gaming/v1/game_server_configs_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_GAME_SERVER_CONFIGS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_GAME_SERVER_CONFIGS_CLIENT_H

#include "google/cloud/gameservices/v1/game_server_configs_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The game server config configures the game servers in an Agones fleet.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class GameServerConfigsServiceClient {
 public:
  explicit GameServerConfigsServiceClient(
      std::shared_ptr<GameServerConfigsServiceConnection> connection,
      Options opts = {});
  ~GameServerConfigsServiceClient();

  ///@{
  /// @name Copy and move support
  GameServerConfigsServiceClient(GameServerConfigsServiceClient const&) =
      default;
  GameServerConfigsServiceClient& operator=(
      GameServerConfigsServiceClient const&) = default;
  GameServerConfigsServiceClient(GameServerConfigsServiceClient&&) = default;
  GameServerConfigsServiceClient& operator=(GameServerConfigsServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(GameServerConfigsServiceClient const& a,
                         GameServerConfigsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GameServerConfigsServiceClient const& a,
                         GameServerConfigsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists game server configs in a given project, location, and game server
  /// deployment.
  ///
  /// @param parent  Required. The parent resource name, in the following form:
  ///  `projects/{project}/locations/{location}/gameServerDeployments/{deployment}/configs/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerConfig,google/cloud/gaming/v1/game_server_configs.proto#L141}
  ///
  /// [google.cloud.gaming.v1.GameServerConfig]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  /// [google.cloud.gaming.v1.ListGameServerConfigsRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L29}
  ///
  StreamRange<google::cloud::gaming::v1::GameServerConfig>
  ListGameServerConfigs(std::string const& parent, Options opts = {});

  ///
  /// Lists game server configs in a given project, location, and game server
  /// deployment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::ListGameServerConfigsRequest,google/cloud/gaming/v1/game_server_configs.proto#L29}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerConfig,google/cloud/gaming/v1/game_server_configs.proto#L141}
  ///
  /// [google.cloud.gaming.v1.GameServerConfig]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  /// [google.cloud.gaming.v1.ListGameServerConfigsRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L29}
  ///
  StreamRange<google::cloud::gaming::v1::GameServerConfig>
  ListGameServerConfigs(
      google::cloud::gaming::v1::ListGameServerConfigsRequest request,
      Options opts = {});

  ///
  /// Gets details of a single game server config.
  ///
  /// @param name  Required. The name of the game server config to retrieve, in
  /// the following form:
  ///  `projects/{project}/locations/{location}/gameServerDeployments/{deployment}/configs/{config}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerConfig,google/cloud/gaming/v1/game_server_configs.proto#L141}
  ///
  /// [google.cloud.gaming.v1.GameServerConfig]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  /// [google.cloud.gaming.v1.GetGameServerConfigRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L71}
  ///
  StatusOr<google::cloud::gaming::v1::GameServerConfig> GetGameServerConfig(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single game server config.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::GetGameServerConfigRequest,google/cloud/gaming/v1/game_server_configs.proto#L71}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerConfig,google/cloud/gaming/v1/game_server_configs.proto#L141}
  ///
  /// [google.cloud.gaming.v1.GameServerConfig]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  /// [google.cloud.gaming.v1.GetGameServerConfigRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L71}
  ///
  StatusOr<google::cloud::gaming::v1::GameServerConfig> GetGameServerConfig(
      google::cloud::gaming::v1::GetGameServerConfigRequest const& request,
      Options opts = {});

  ///
  /// Creates a new game server config in a given project, location, and game
  /// server deployment. Game server configs are immutable, and are not applied
  /// until referenced in the game server deployment rollout resource.
  ///
  /// @param parent  Required. The parent resource name, in the following form:
  ///  `projects/{project}/locations/{location}/gameServerDeployments/{deployment}/`.
  /// @param game_server_config  Required. The game server config resource to be
  /// created.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerConfig,google/cloud/gaming/v1/game_server_configs.proto#L141}
  ///
  /// [google.cloud.gaming.v1.CreateGameServerConfigRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L83}
  /// [google.cloud.gaming.v1.GameServerConfig]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  ///
  future<StatusOr<google::cloud::gaming::v1::GameServerConfig>>
  CreateGameServerConfig(
      std::string const& parent,
      google::cloud::gaming::v1::GameServerConfig const& game_server_config,
      Options opts = {});

  ///
  /// Creates a new game server config in a given project, location, and game
  /// server deployment. Game server configs are immutable, and are not applied
  /// until referenced in the game server deployment rollout resource.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::CreateGameServerConfigRequest,google/cloud/gaming/v1/game_server_configs.proto#L83}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerConfig,google/cloud/gaming/v1/game_server_configs.proto#L141}
  ///
  /// [google.cloud.gaming.v1.CreateGameServerConfigRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L83}
  /// [google.cloud.gaming.v1.GameServerConfig]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  ///
  future<StatusOr<google::cloud::gaming::v1::GameServerConfig>>
  CreateGameServerConfig(
      google::cloud::gaming::v1::CreateGameServerConfigRequest const& request,
      Options opts = {});

  ///
  /// Deletes a single game server config. The deletion will fail if the game
  /// server config is referenced in a game server deployment rollout.
  ///
  /// @param name  Required. The name of the game server config to delete, in
  /// the following form:
  ///  `projects/{project}/locations/{location}/gameServerDeployments/{deployment}/configs/{config}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::OperationMetadata,google/cloud/gaming/v1/common.proto#L28}
  ///
  /// [google.cloud.gaming.v1.DeleteGameServerConfigRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L101}
  /// [google.cloud.gaming.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/common.proto#L28}
  ///
  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
  DeleteGameServerConfig(std::string const& name, Options opts = {});

  ///
  /// Deletes a single game server config. The deletion will fail if the game
  /// server config is referenced in a game server deployment rollout.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::DeleteGameServerConfigRequest,google/cloud/gaming/v1/game_server_configs.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::OperationMetadata,google/cloud/gaming/v1/common.proto#L28}
  ///
  /// [google.cloud.gaming.v1.DeleteGameServerConfigRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L101}
  /// [google.cloud.gaming.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/common.proto#L28}
  ///
  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
  DeleteGameServerConfig(
      google::cloud::gaming::v1::DeleteGameServerConfigRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<GameServerConfigsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_GAME_SERVER_CONFIGS_CLIENT_H
