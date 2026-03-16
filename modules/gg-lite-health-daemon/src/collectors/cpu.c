// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#include "gg-lite-health-daemon/collectors/cpu.h"

int cpu_collector_init(void) {
    // TODO: Initialize CPU collector state
    return 0;
}

int cpu_collector_collect(CpuMetrics *metrics) {
    // TODO: Read /proc/stat and compute CPU metrics
    (void)metrics;
    return 0;
}
