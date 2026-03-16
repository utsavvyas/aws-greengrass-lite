// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#include "gg-lite-health-daemon/config.h"

int config_init(HealthDaemonConfig *config) {
    // TODO: Set default configuration values
    config->collection_interval_sec = 60;
    config->collect_cpu = true;
    config->collect_memory = true;
    config->collect_disk = true;
    config->collect_network = true;
    return 0;
}

int config_load(HealthDaemonConfig *config, const char *path) {
    // TODO: Load configuration from file using cJSON
    (void)config;
    (void)path;
    return 0;
}
