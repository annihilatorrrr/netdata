// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef NETDATA_RRDSET_INDEX_NAME_H
#define NETDATA_RRDSET_INDEX_NAME_H

#include "rrdset.h"
#include "rrd.h"

void rrdset_index_byname_init(RRDHOST *host);

void rrdset_index_add_name(RRDHOST *host, RRDSET *st);
void rrdset_index_del_name(RRDHOST *host, RRDSET *st);

RRDSET *rrdset_index_find_name(RRDHOST *host, const char *name);

int rrdset_reset_name(RRDSET *st, const char *name);
STRING *rrdset_fix_name(RRDHOST *host, const char *chart_full_id, const char *type, const char *current_name, const char *name);

#endif //NETDATA_RRDSET_INDEX_NAME_H