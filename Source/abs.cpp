#include "C:\Users\ADMIN\Desktop\Anti-Lock_Brake_System_ABS_Cpp\header\abs.hpp"
#include <cassert>

ABS::ABS(Car* car)
{
    ABS_Car = car;
}

bool ABS::isSpeedWheelUnderLimit()
{
    return ((*ABS_Car).getSpeed() < WHEEL_LIMIT_SPEED); // Lưu ý
}

void ABS::brake()
{
    assert(!isSpeedWheelUnderLimit() && "Wheel are in danger of locking up");

}



