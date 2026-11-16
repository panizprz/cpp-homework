#pragma once

#include <iostream>
#include <string>

class NetworkDevice
{
private:
    std::string SSID;

public:
    NetworkDevice(const std::string&);
    ~NetworkDevice();

    void showNetwork() const;
};

