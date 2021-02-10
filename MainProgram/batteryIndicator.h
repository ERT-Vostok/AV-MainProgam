#if !defined(BATTERY_INDICATOR_H)
#define BATTERY_INDICATOR_H

/*
extends sensor
A class that represents the battery indicator aboard the rocket

*/

#include "sensor.h"

class BatteryIndicator : public Sensor {
public:
    BatteryIndicator();

    virtual void measure() override;
    unsigned getBatteryLevel() const;

private:
    unsigned batteryLevel; // ranges from 0 to 100 %
};



#endif // BATTERY_INDICATOR_H