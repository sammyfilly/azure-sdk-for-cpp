// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "azure/storage/queues/queue_options.hpp"

namespace Azure { namespace Storage { namespace Queues {

  const ServiceVersion ServiceVersion::V2018_03_28(std::string("2018-03-28"));
  const std::chrono::seconds EnqueueMessageOptions::MessageNeverExpires{-1};

}}} // namespace Azure::Storage::Queues
