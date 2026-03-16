// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#ifndef GG_LITE_HEALTH_DAEMON_CONFIG_H
#define GG_LITE_HEALTH_DAEMON_CONFIG_H

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint32_t collection_interval_sec;
    bool collect_cpu;
    bool collect_memory;
    bool collect_disk;
    bool collect_network;
} HealthDaemonConfig;

int config_init(HealthDaemonConfig *config);
int config_load(HealthDaemonConfig *config, const char *path);

#endif
