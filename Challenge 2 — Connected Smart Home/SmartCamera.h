#pragma once

#include "NetworkDevice.h"
#include "PowerMonitor.h"

class SmartCamera : public NetworkDevice , public PowerMonitor
{
private:
	std::string resolution;
public:
	SmartCamera(const std::string&,int, const std::string&);
	~SmartCamera();

	void showCameraDetails() const;

};

