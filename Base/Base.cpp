#include "Base.h"
#include <iostream>
using namespace std;

int Base::people_on_base = 100;
int Base::vehicles_on_base = 20;
double Base::petrol_on_base = 5000.0;
double Base::goods_on_base = 50.0;


Base::Base() {}

Base::Base(int people, int vehicles, double petrol, double goods)
{
    people_on_base = people;
    vehicles_on_base = vehicles;
    petrol_on_base = petrol;
    goods_on_base = goods;
}

void Base::Print() 
{
    cout << "People on base: " << people_on_base << std::endl;
    cout << "Vehicles on base: " << vehicles_on_base << std::endl;
    cout << "Petrol on base: " << petrol_on_base << " liters" << std::endl;
    cout << "Goods on base: " << goods_on_base << " tons" << std::endl;
}
