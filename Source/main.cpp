/**
 * @file main.cpp
 * @author Kevin Nguyen 
 * @brief Anti-Lock Brake System in cars
 * @version 0.1
 * @date 2023-12-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "C:\Users\ADMIN\Desktop\Anti-Lock_Brake_System_ABS_Cpp\header\abs.hpp"
#include "C:\Users\ADMIN\Desktop\Anti-Lock_Brake_System_ABS_Cpp\header\car.hpp"
#include "C:\Users\ADMIN\Desktop\Anti-Lock_Brake_System_ABS_Cpp\header\wheel.hpp"

int main()
{
    Car car;
    ABS abs_system(&car);

    // set up
    int wheel_speed;
    std::cout << "Set wheel speed: " << '\n';
    std::cin >> wheel_speed;
    car.setSpeed(wheel_speed);

    abs_system.brake();

    double customer_weight;
    std::cout << "Enter customer weight to add to car: " << '\n';
    std::cin >> customer_weight;

    car.addCustomer(customer_weight);

    // The looping
    while (1)
    {
        std::cout << "Set wheel speed: " << '\n';
        std::cin >> wheel_speed;
        car.setSpeed(wheel_speed);
        
        abs_system.brake();
    }
    

    return 0;
}