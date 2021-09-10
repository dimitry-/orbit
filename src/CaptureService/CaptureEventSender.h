// Copyright (c) 2020 The Orbit Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CAPTURE_SERVICE_CAPTURE_EVENT_SENDER_H_
#define CAPTURE_SERVICE_CAPTURE_EVENT_SENDER_H_

#include "capture.pb.h"

namespace orbit_capture_service {

// Interface used to process at once multiple CaptureEvents that were previously buffered
// (e.g., to group all those CaptureEvents into a single CaptureResponse).
class CaptureEventSender {
 public:
  virtual ~CaptureEventSender() = default;
  virtual void SendEvents(std::vector<orbit_grpc_protos::ClientCaptureEvent>* events) = 0;
};

}  // namespace orbit_capture_service

#endif  // CAPTURE_SERVICE_CAPTURE_EVENT_SENDER_H_