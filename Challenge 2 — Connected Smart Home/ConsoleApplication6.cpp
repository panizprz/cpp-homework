//Challenge 2 — Connected Smart Home
//Focus: Multiple inheritance  |  15 points

#include <iostream>
#include "SmartCamera.h"

int main()
{
    SmartCamera camera1("Home_WiFi", 25, "4K");

    camera1.showCameraDetails();

    return 0;
}
