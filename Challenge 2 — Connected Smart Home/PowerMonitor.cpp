#include "PowerMonitor.h"

PowerMonitor::PowerMonitor(int powerWatts) : powerWatts(powerWatts) {

}
PowerMonitor::~PowerMonitor() {
}

void PowerMonitor::showPowerUsage() const {
	std::cout << "Power: " << powerWatts << std::endl;
}