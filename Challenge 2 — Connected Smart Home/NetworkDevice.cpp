#include "NetworkDevice.h"

NetworkDevice::NetworkDevice(const std::string& SSID) : SSID(SSID) {

}
NetworkDevice::~NetworkDevice() {
}

void NetworkDevice::showNetwork() const {
	std::cout << "WiFi Network: " << SSID << std::endl;
}