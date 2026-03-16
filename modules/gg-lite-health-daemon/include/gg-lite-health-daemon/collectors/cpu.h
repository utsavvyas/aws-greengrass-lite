// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#ifndef GG_LITE_HEALTH_DAEMON_COLLECTORS_CPU_H
#define GG_LITE_HEALTH_DAEMON_COLLECTORS_CPU_H

#include <stdint.h>

typedef struct {
    double usage_percent;
    uint64_t user_time;
    uint64_t system_time;
    uint64_t idle_time;
} CpuMetrics;

int cpu_collector_init(void);
int cpu_collector_collect(CpuMetrics *metrics);

#endif
