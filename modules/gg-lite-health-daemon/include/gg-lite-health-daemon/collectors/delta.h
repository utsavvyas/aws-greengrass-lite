// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#ifndef GG_LITE_HEALTH_DAEMON_COLLECTORS_DELTA_H
#define GG_LITE_HEALTH_DAEMON_COLLECTORS_DELTA_H

#include <stdint.h>

int delta_tracker_init(void);
int delta_tracker_update(const char *key, uint64_t current, uint64_t *delta);
void delta_tracker_reset(void);

#endif
