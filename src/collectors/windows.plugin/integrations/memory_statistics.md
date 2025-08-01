<!--startmeta
custom_edit_url: "https://github.com/netdata/netdata/edit/master/src/collectors/windows.plugin/integrations/memory_statistics.md"
meta_yaml: "https://github.com/netdata/netdata/edit/master/src/collectors/windows.plugin/metadata.yaml"
sidebar_label: "Memory statistics"
learn_status: "Published"
learn_rel_path: "Collecting Metrics/Windows Systems"
most_popular: False
message: "DO NOT EDIT THIS FILE DIRECTLY, IT IS GENERATED BY THE COLLECTOR'S metadata.yaml FILE"
endmeta-->

# Memory statistics


<img src="https://netdata.cloud/img/windows.svg" width="150"/>


Plugin: windows.plugin
Module: PerflibMemory

<img src="https://img.shields.io/badge/maintained%20by-Netdata-%2300ab44" />

## Overview

This collector monitors swap and memory pool statistics on Windows systems.


It queries for the 'Memory' object from Perflib in order to gather the metrics.


This collector is only supported on the following platforms:

- windows

This collector only supports collecting metrics from a single instance of this integration.


### Default Behavior

#### Auto-Detection

The collector automatically detects all of the metrics, no further configuration is required.


#### Limits

The default configuration for this integration does not impose any limits on data collection.

#### Performance Impact

The default configuration for this integration is not expected to impose a significant performance impact on the system.


## Metrics

Metrics grouped by *scope*.

The scope defines the instance that the metric belongs to. An instance is uniquely identified by a set of labels.



### Per System

These metrics refer to the entire system.

This scope has no labels.

Metrics:

| Metric | Dimensions | Unit |
|:------|:----------|:----|
| mem.swap_iops | read, write | operations/s |
| mem.swap_pages_io | read, write | pages/s |
| mem.system_pool_size | paged, pool-paged | bytes |
| mem.system_page_table_entries | free | pages |



## Alerts

There are no alerts configured by default for this integration.


## Setup

### Prerequisites

No action required.

### Configuration

#### File

The configuration file name for this integration is `netdata.conf`.
Configuration for this specific integration is located in the `[plugin:windows:PerflibMemory]` section within that file.

The file format is a modified INI syntax. The general structure is:

```ini
[section1]
    option1 = some value
    option2 = some other value

[section2]
    option3 = some third value
```
You can edit the configuration file using the [`edit-config`](https://github.com/netdata/netdata/blob/master/docs/netdata-agent/configuration/README.md#edit-a-configuration-file-using-edit-config) script from the
Netdata [config directory](https://github.com/netdata/netdata/blob/master/docs/netdata-agent/configuration/README.md#the-netdata-config-directory).

```bash
cd /etc/netdata 2>/dev/null || cd /opt/netdata/etc/netdata
sudo ./edit-config netdata.conf
```
#### Options



| Name | Description | Default | Required |
|:----|:-----------|:-------|:--------:|
| update every | Data collection frequency. | 1 | no |

#### Examples
There are no configuration examples.


