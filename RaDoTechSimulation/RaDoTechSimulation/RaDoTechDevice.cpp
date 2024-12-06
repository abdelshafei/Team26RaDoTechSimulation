#include "RaDoTechDevice.h"
#include <cstdlib>

RaDoTechDevice::RaDoTechDevice() : isPaired(false) {}

bool RaDoTechDevice::startScan()
{
    if (battery.getBatteryLevel() <= 0) {
        return false;
    }

    return true;
}

std::vector<float> RaDoTechDevice::collectData()
{
    std::vector<float> rawData(24);
    for (float &value : rawData) {
        value = static_cast<float>(rand() % 91);
    }
    return rawData;
}

void RaDoTechDevice::depleteBattery()
{
    battery.deplete();
}

void RaDoTechDevice::chargeBattery()
{
    battery.charge();
}

bool RaDoTechDevice::getIsPaired() const
{
    return isPaired;
}

int RaDoTechDevice::getBatteryLevel() const
{
    return battery.getBatteryLevel();
}

bool RaDoTechDevice::isBatteryLow() const
{
    return battery.isLow();
}

void RaDoTechDevice::PairUp()
{
    this->isPaired = true;
}
