#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle 
{
private:
    double load;
    double max_load;

public:
    Truck(double load, double max_load, double petrol, double tank_volume);

    double GetCurrentLoad() const;
    double GetMaxLoad() const;

    void Arrive() override;
    bool Leave() override;
};