#include "Base.h"
#include "Vehicle.h"
#include "Truck.h"
#include "Bus.h"
#include <iostream>

using namespace std;

int main() 
{
    Base militaryBase;
    militaryBase.Print();

    Vehicle* vehicle = nullptr;

    int choice = 0;
    cout << "Choose a vehicle to create (1: Truck, 2: Bus): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        vehicle = new Truck(10.0, 20.0, 30.0, 100.0);
        break;
    case 2:
        vehicle = new Bus(5, 10, 40.0, 80.0);
        break;
    default:
        cout << "Invalid choice." << endl;
        return 1;
    }

    int action = 0;
    cout << "Choose an action (1: Arrive, 2: Leave): ";
    cin >> action;

    if (action == 1)
    {
        vehicle->Arrive();
    }
    else if (action == 2) 
    {
        vehicle->Leave();
    }
    else 
    {
        cout << "Invalid action." << endl;
    }

    militaryBase.Print();

    delete vehicle;

    return 0;
}
