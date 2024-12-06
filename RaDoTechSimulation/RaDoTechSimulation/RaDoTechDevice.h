#ifndef RADOTECHDEVICE_H
#define RADOTECHDEVICE_H

#include <vector>
#include <string>

#include "Battery.h"

/* Class Purpose:
 * The RaDoTechDevice class simulates a device that can pair, scan, collect data, and manage its battery.
 *
 * Class Attributes:
 * isPaired - Indicates whether the device is paired.
 * battery - Represents the battery of the device.
 *
 * Class Functions:
 * startScan() - Starts scanning for data.
 * collectData() - Collects data from the device.
 * depleteBattery() - Depletes the battery of the device.
 * chargeBattery() - Charges the battery of the device.
 * getIsPaired() - Returns whether the device is paired.
 * getBatteryLevel() - Returns the current battery level.
 * isBatteryLow() - Checks if the battery level is low.
 * PairUp() - Pairs the device.
 */

class RaDoTechDevice
{
private:
    bool isPaired;
    Battery battery;

public:
    RaDoTechDevice();

    // Functions
    bool startScan();
    std::vector<float> collectData();
    void depleteBattery();
    void chargeBattery();
    bool getIsPaired() const;
    int getBatteryLevel() const;
    bool isBatteryLow() const;
    void PairUp();

};

#endif // RADOTECHDEVICE_H
