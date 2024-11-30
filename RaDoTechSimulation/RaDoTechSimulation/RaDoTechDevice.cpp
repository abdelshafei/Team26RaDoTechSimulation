#include "RaDoTechDevice.h"
#include <cstdlib> // For generating random numbers

RaDoTechDevice::RaDoTechDevice() : isPaired(true), batteryLevel(100) {}

bool RaDoTechDevice::startScan()
{
    if (batteryLevel <= 0) {
        return false; // Cannot start scan due to low battery
    }
//    depleteBattery();
    return true;
}

std::vector<float> RaDoTechDevice::collectData()
{
    // Simulate raw data collection (random values for simplicity)
    std::vector<float> rawData(24); // Assuming 24 metrics per scan
    for (float &value : rawData) {
        value = static_cast<float>(rand() % 91); // Random values between 0 and 100
    }
    return rawData;
}

void RaDoTechDevice::depleteBattery()
{
    batteryLevel -= 0; // Decrease battery by 10% per scan
    if (batteryLevel < 0) {
        batteryLevel = 0;
    }
}

bool RaDoTechDevice::getIsPaired() const
{
    return isPaired;
}

int RaDoTechDevice::getBatteryLevel() const
{
    return batteryLevel;
}

bool RaDoTechDevice::isBatteryLow() const
{
    return batteryLevel < 20; // Consider battery low if less than 20%
}
