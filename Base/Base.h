#pragma once
class Base 
{
public:
    static int people_on_base;
    static int vehicles_on_base;
    static double petrol_on_base;
    static double goods_on_base;

    Base(); 
    Base(int people, int vehicles, double petrol, double goods); 

    static void Print();
};


