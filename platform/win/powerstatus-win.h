#ifndef BATTERYSTATUS_H
#define BATTERYSTATUS_H

/*
 * Windows : Utilize SYSTEM_POWER_STATUS and GetSystemPowerStatus API
 * macOS   : Sadly, I don't have Apple device to implement and test, please contribute!
 * Linux   : Utilize UPower, using D-Bus System Bus
 */

#include <cstdint>

class PowerStatus
{
public:
    bool m_BatteryExist; // Is this system has battery?
    int m_BatteryLevel; // 0 - 100
    bool m_BatteryCharging; // Is battery is being charged?
    bool m_BatteryFull; // Is battery full?
    bool m_ACLineStatus; // Is this system is charging with AC Line?

    PowerStatus();
    ~PowerStatus();
    void Update();
};

#endif // BATTERYSTATUS_H
