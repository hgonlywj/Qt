// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_GEOFENCING_STATUS_H_
#define CONTENT_COMMON_GEOFENCING_STATUS_H_

namespace content {

enum GeofencingStatus {
  // Everything is ok.
  GEOFENCING_STATUS_OK,

  // Operation failed because there is no Service Worker.
  GEOFENCING_STATUS_OPERATION_FAILED_NO_SERVICE_WORKER,

  // Operation failed because geofencing is not available.
  GEOFENCING_STATUS_OPERATION_FAILED_SERVICE_NOT_AVAILABLE,

  // Unregistering failed because region was not registered.
  GEOFENCING_STATUS_UNREGISTRATION_FAILED_NOT_REGISTERED,

  // Generic error.
  GEOFENCING_STATUS_ERROR,

  // Used for IPC message range checks.
  GEOFENCING_STATUS_LAST = GEOFENCING_STATUS_ERROR
};

const char* GeofencingStatusToString(GeofencingStatus status);

}  // namespace content

#endif  // CONTENT_COMMON_GEOFENCING_STATUS_H_
