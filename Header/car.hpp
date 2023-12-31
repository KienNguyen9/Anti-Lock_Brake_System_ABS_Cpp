#ifndef CAR_H
#define CAR_H

#include "C:\Users\ADMIN\Desktop\Anti_Lock_Brake_System_ABS_Cpp\Header\wheel.hpp"

class Car
{
private:
    Wheel carWheel; // Nên dùng cấp phát động hay tĩnh?
    //Wheel* carWheel;

    double carWeight;
    double customerWeight;
    double totalWeight;

public:
    Car();

    // Setter function: car weight, customer weight, car speed
    void setCarWeight(double car_weight);
    void addCustomer(double customer_weight);
    void setSpeed(int speed);

    // Getter function: total weight, car speed
    double getCarWeight();
    double getTotalWeight();
    int getSpeed();
};

#endif