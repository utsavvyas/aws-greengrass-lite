// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#ifndef GG_LITE_HEALTH_DAEMON_COLLECTORS_MEMORY_H
#define GG_LITE_HEALTH_DAEMON_COLLECTORS_MEMORY_H

#include <stdint.h>

typedef struct {
    uint64_t total_bytes;
    uint64_t used_bytes;
    uint64_t free_bytes;
    double usage_percent;
} MemoryMetrics;

int memory_collector_init(void);
int memory_collector_collect(MemoryMetrics *metrics);

#endif
