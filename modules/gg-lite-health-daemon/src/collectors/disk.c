// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#include "gg-lite-health-daemon/collectors/disk.h"

int disk_collector_init(void) {
    // TODO: Initialize disk collector state
    return 0;
}

int disk_collector_collect(DiskMetrics *metrics) {
    // TODO: Use statvfs to collect disk metrics
    (void)metrics;
    return 0;
}
