#ifndef CARPARK_PARK_H
#define CARPARK_PARK_H

#include "Car.h"
#include <vector>
#include <map>

class Park
{
public:
    void addCar(Car car);
    void modifyTicket(int id, bool m);
    void removeCar(int id);
    std::string getOldest();
    std::vector<Car> getPenalties();
    std::map<int, int> getPenaltiesByYear();
    std::vector<Car> getCars();


private:
    std::vector<Car> _cars;
};


#endif //CARPARK_PARK_H
