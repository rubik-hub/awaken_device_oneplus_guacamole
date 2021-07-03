/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

#define PRJN "18821"
#define DESCRIPTION "OnePlus7Pro-user 11 RKQ1.201022.002 2205261816 release-keys"
#define FINGERPRINT "OnePlus/OnePlus7Pro/OnePlus7Pro:11/RKQ1.201022.002/2205261816:user/release-keys"

static const variant_info_t guacamole_china_info = {
    .prjn_value = PRJN,
    .rf_value = "1",

    .model = "GM1910",
    .name = "OnePlus7Pro_CH",
    .build_description = DESCRIPTION,
    .build_fingerprint = FINGERPRINT,
};

static const variant_info_t guacamole_india_info = {
    .prjn_value = PRJN,
    .rf_value = "3",

    .model = "GM1911",
    .name = "OnePlus7Pro_IN",
    .build_description = DESCRIPTION,
    .build_fingerprint = FINGERPRINT,
};

static const variant_info_t guacamole_europe_info = {
    .prjn_value = PRJN,
    .rf_value = "4",

    .model = "GM1913",
    .name = "OnePlus7Pro_EEA",
    .build_description = DESCRIPTION,
    .build_fingerprint = FINGERPRINT,
};

static const variant_info_t guacamole_global_info = {
    .prjn_value = PRJN,
    .rf_value = "5",

    .name = "OnePlus7Pro_GLO",
    .model = "GM1917",
    .build_description = DESCRIPTION,
    .build_fingerprint = FINGERPRINT,
};

static const std::vector<variant_info_t> variants = {
    guacamole_china_info,
    guacamole_india_info,
    guacamole_europe_info,
    guacamole_global_info,
};

void vendor_load_properties() {
    set_dalvik_heap();
    search_variant(variants);
}
