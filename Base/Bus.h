#include "Vehicle.h"
using namespace std;

class Bus : public Vehicle 
{
private:
    int people;
    int max_people;

public:
    Bus(int people, int max_people, double petrol, double tank_volume);

    int GetPeopleCount() const;
    int GetMaxPeople() const;

    void Arrive() override;
    bool Leave() override;
};
