// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#ifndef GG_LITE_HEALTH_DAEMON_EMF_WRITER_H
#define GG_LITE_HEALTH_DAEMON_EMF_WRITER_H

#include <stddef.h>

int emf_writer_init(void);
int emf_writer_add_metric(const char *name, double value, const char *unit);
int emf_writer_flush(char *buf, size_t buf_size);
void emf_writer_reset(void);

#endif
