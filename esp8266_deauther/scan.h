/*
   Copyright (c) 2020 Stefan Kremser (@Spacehuhn)
   This software is licensed under the MIT License. See the license file for details.
   Source: github.com/spacehuhn/esp8266_deauther
 */

#pragma once

#include "AccessPoint.h"
#include "Station.h"
#include "scan_filter.h"

namespace scan {
    void clearAPresults();
    void clearSTresults();

    void start(bool ap, bool st, unsigned long timeout, uint16_t channels, unsigned long ch_time, bool silent, bool retain);
    void startAuth(uint8_t* mac, unsigned long timeout, bool silent);
    void stop();

    void printAPs(const scan_filter_t* filter = NULL);
    void printSTs(const scan_filter_t* filter = NULL);

    void update();

    AccessPointList& getAccessPoints();
    StationList    & getStations();
}