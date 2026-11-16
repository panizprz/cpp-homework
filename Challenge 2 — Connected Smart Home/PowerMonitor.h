#pragma once
#include <iostream>

class PowerMonitor {
private:
    int powerWatts;

public:
    PowerMonitor(int);
    ~PowerMonitor();

    void showPowerUsage() const;
};