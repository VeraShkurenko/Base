#include "Vehicle.h"
#include "Base.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(double petrol_amount, double tank_volume)
    : petrol_amount(petrol_amount), tank_volume(tank_volume) {}

double Vehicle::GetTankVolume() const 
{
    return tank_volume;
}

double Vehicle::GetPetrolAmount() const
{
    return petrol_amount;
}

