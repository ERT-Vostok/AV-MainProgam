#if !defined(MPU6050_H)
#define MPU6050_H

/*
extends sensor
A class that represents the mpu6050 aboard the rocket

*/

#include "sensor.h"
#include <Arduino.h>

const int LED_PIN = 13;

class Mpu6050 : public Sensor {

public:
    Mpu6050();

    int begin();

    double getRotA();
    double getRotX();
    double getRotY();
    double getRotZ();
    double getAccelX();
    double getAccelY();
    double getAccelZ();
    
    virtual void measure() override;
    
private:
    // 16 bit et en [m/s]
    double accelX, accelY, accelZ; //acceleration
    double rotA, rotX, rotY, rotZ; //rotation
    
    void quatToAngle();
};

#endif // MPU6050_H
