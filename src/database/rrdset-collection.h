// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef NETDATA_RRDSET_COLLECTION_H
#define NETDATA_RRDSET_COLLECTION_H

#include "rrd.h"

extern __thread size_t rrdset_done_statistics_points_stored_per_tier[RRD_STORAGE_TIERS];

void rrdset_finalize_collection(RRDSET *st, bool dimensions_too);
time_t rrdset_set_update_every_s(RRDSET *st, time_t update_every_s);

#endif //NETDATA_RRDSET_COLLECTION_H