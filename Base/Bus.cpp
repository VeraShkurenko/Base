#include "Bus.h"
#include "Base.h"
#include <iostream>

using namespace std;

Bus::Bus(int people, int max_people, double petrol, double tank_volume)
    : Vehicle(petrol, tank_volume), people(people), max_people(max_people) {}

int Bus::GetPeopleCount() const
{
    return people;
}

int Bus::GetMaxPeople() const
{
    return max_people;
}

void Bus::Arrive() 
{
    Base::vehicles_on_base += 1;
    Base::people_on_base += people + 1; 
    cout << "Bus arrived with " << people << " passengers.\n";
}

bool Bus::Leave()
{
    int people_to_leave;

    if (Base::people_on_base - 1 < max_people)
    {
        people_to_leave = Base::people_on_base - 1;
    }
    else
    {
        people_to_leave = max_people;
    }

    double petrol_needed = tank_volume - petrol_amount;

    if (Base::petrol_on_base >= petrol_needed && people_to_leave > 0)
    {
        Base::vehicles_on_base -= 1;
        Base::people_on_base -= people_to_leave + 1;
        Base::petrol_on_base -= petrol_needed;
        cout << "Bus left with " << people_to_leave << " passengers.\n";
        return true;
    }
    else
    {
        cout << "Not enough petrol or people to leave.\n";
        return false;
    }
}
