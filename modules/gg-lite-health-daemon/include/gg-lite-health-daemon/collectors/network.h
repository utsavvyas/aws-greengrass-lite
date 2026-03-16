// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#ifndef GG_LITE_HEALTH_DAEMON_COLLECTORS_NETWORK_H
#define GG_LITE_HEALTH_DAEMON_COLLECTORS_NETWORK_H

#include <stdint.h>

typedef struct {
    uint64_t rx_bytes;
    uint64_t tx_bytes;
    uint64_t rx_packets;
    uint64_t tx_packets;
} NetworkMetrics;

int network_collector_init(void);
int network_collector_collect(NetworkMetrics *metrics);

#endif
