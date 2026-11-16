#include "SmartCamera.h"

SmartCamera::SmartCamera(const std::string& SSID,int powerWatts,const std::string& resolution) : NetworkDevice(SSID) ,PowerMonitor(powerWatts) , resolution(resolution) {

}
SmartCamera::~SmartCamera() {

}
void SmartCamera::showCameraDetails() const {
	showNetwork();
	showPowerUsage();
	std::cout << "Camera Detail: " << resolution << std::endl;
}
