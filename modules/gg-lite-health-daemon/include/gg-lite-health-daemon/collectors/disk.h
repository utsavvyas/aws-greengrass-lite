// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#ifndef GG_LITE_HEALTH_DAEMON_COLLECTORS_DISK_H
#define GG_LITE_HEALTH_DAEMON_COLLECTORS_DISK_H

#include <stdint.h>

typedef struct {
    uint64_t total_bytes;
    uint64_t used_bytes;
    uint64_t free_bytes;
    double usage_percent;
} DiskMetrics;

int disk_collector_init(void);
int disk_collector_collect(DiskMetrics *metrics);

#endif
