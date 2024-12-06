#ifndef BATTERY_H
#define BATTERY_H

/* Class Purpose: 
 * The Battery class is used to simulate the battery of the RaDoTech device. 
 * The battery can be depleted and charged. 
 * The battery level can be checked and the low battery status can be checked. 
 * 
 * Class Functions:
 * Battery() - Constructor for the Battery class. Initializes the battery level to 100.
 * deplete() - Decreases the battery level by 5. If the battery level is less than 0, it is set to 0.
 * charge() - Increases the battery level by 5. If the battery level is greater than or equal to 100, it is set to 100.
 * getBatteryLevel() - Returns the battery level.
 * isLow() - Returns true if the battery level is less than or equal to 20, otherwise returns false.
 * 
 * Class Attributes:
 * batteryLevel - An integer representing the battery level of the device.
*/

class Battery
{
    public:
        Battery();
        void deplete();
        void charge();
        int getBatteryLevel() const;
        bool isLow() const;
    private:
        int batteryLevel;
};

#endif // BATTERY_H
