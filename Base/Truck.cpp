#include "Truck.h"
#include "Base.h"
#include <iostream>

using namespace std;


Truck::Truck(double load, double max_load, double petrol, double tank_volume)
    : Vehicle(petrol, tank_volume), load(load), max_load(max_load) {}

double Truck::GetCurrentLoad() const 
{
    return load;
}

double Truck::GetMaxLoad() const 
{
    return max_load;
}

void Truck::Arrive() 
{
    Base::vehicles_on_base += 1;
    Base::goods_on_base += load;
    Base::people_on_base += 1; 
    cout << "Truck arrived with " << load << " tons of goods.\n";
}

bool Truck::Leave()
{
    double load_to_leave;

    if (Base::goods_on_base < max_load)
    {
        load_to_leave = Base::goods_on_base;
    }
    else
    {
        load_to_leave = max_load;
    }

    double petrol_needed = tank_volume - petrol_amount;

    if (Base::petrol_on_base >= petrol_needed && load_to_leave > 0)
    {
        Base::vehicles_on_base -= 1;
        Base::goods_on_base -= load_to_leave;
        Base::people_on_base -= 1;
        Base::petrol_on_base -= petrol_needed;
        cout << "Truck left with " << load_to_leave << " tons of goods.\n";
        return true;
    }
    else
    {
        cout << "Not enough petrol or goods to leave.\n";
        return false;
    }

}
