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
// source: google/cloud/dialogflow/v2/context.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONTEXTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONTEXTS_CONNECTION_H

#include "google/cloud/dialogflow_es/contexts_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_es_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ContextsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ContextsClient`. To do so,
 * construct an object of type `ContextsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with
 * GoogleTest. While the example showcases types from the BigQuery library, the
 * underlying principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockContextsConnection : public dialogflow_es::ContextsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::dialogflow::v2::Context>, ListContexts,
              (google::cloud::dialogflow::v2::ListContextsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dialogflow::v2::Context>, GetContext,
              (google::cloud::dialogflow::v2::GetContextRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::Context>, CreateContext,
      (google::cloud::dialogflow::v2::CreateContextRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::Context>, UpdateContext,
      (google::cloud::dialogflow::v2::UpdateContextRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteContext,
      (google::cloud::dialogflow::v2::DeleteContextRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteAllContexts,
      (google::cloud::dialogflow::v2::DeleteAllContextsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONTEXTS_CONNECTION_H
