// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#include "gg-lite-health-daemon/collectors/network.h"

int network_collector_init(void) {
    // TODO: Initialize network collector state
    return 0;
}

int network_collector_collect(NetworkMetrics *metrics) {
    // TODO: Read /proc/net/dev and compute network metrics
    (void)metrics;
    return 0;
}
