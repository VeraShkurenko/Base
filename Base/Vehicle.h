#pragma once
#include "Base.h"
#include <string>

class Vehicle 
{
protected:
    double petrol_amount;
    double tank_volume;

public:
    Vehicle(double petrol_amount, double tank_volume);

    double GetTankVolume() const;
    double GetPetrolAmount() const;

    virtual void Arrive() = 0; 
    virtual bool Leave() = 0;
};
