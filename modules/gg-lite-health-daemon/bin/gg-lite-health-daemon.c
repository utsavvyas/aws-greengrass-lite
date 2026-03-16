// aws-greengrass-lite - AWS IoT Greengrass runtime for constrained devices
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#include "gg-lite-health-daemon/config.h"
#include "gg-lite-health-daemon/collectors/cpu.h"
#include "gg-lite-health-daemon/collectors/memory.h"
#include "gg-lite-health-daemon/collectors/disk.h"
#include "gg-lite-health-daemon/collectors/network.h"
#include "gg-lite-health-daemon/collectors/delta.h"
#include "gg-lite-health-daemon/emf/writer.h"

int main(int argc, char *argv[]) {
    (void)argc;
    (void)argv;

    // TODO: Parse arguments, load config, run collection loop
    HealthDaemonConfig config;
    config_init(&config);

    cpu_collector_init();
    memory_collector_init();
    disk_collector_init();
    network_collector_init();
    delta_tracker_init();
    emf_writer_init();

    return 0;
}
