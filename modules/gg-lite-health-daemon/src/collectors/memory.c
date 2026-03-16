// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#include "gg-lite-health-daemon/collectors/memory.h"

int memory_collector_init(void) {
    // TODO: Initialize memory collector state
    return 0;
}

int memory_collector_collect(MemoryMetrics *metrics) {
    // TODO: Read /proc/meminfo and compute memory metrics
    (void)metrics;
    return 0;
}
