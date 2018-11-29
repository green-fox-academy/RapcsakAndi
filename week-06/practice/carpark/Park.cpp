#include "Park.h"

void Park::addCar(Car car)
{
    _cars.push_back(car);
}
void Park::modifyTicket(int id, bool m)
{
    for (int i = 0; i < _cars.size(); ++i) {
        if(id == _cars[i].getId()){
            _cars[i].setHasParkingTicket(m);
        }

    }
}
void Park::removeCar(int id)
{
    for (int i = 0; i <_cars.size() ; ++i) {
        if(id == _cars[i].getId()){
            _cars.erase(_cars.begin() + i);
        } 
    }
}
std::string Park::getOldest()
{
    int oldest = _cars[0].getManufactureYear();
    int index = 0;
    for (int i = 0; i < _cars.size(); ++i) {
        if(_cars[i].getManufactureYear()<oldest){
            oldest = _cars[i].getManufactureYear();
            index = i;
        }
    }
    return _cars[index].getLicensePlate();
}
std::vector<Car> Park::getPenalties()
{
    std::vector<Car> cars;
    for (int i = 0; i < _cars.size(); ++i) {
        if(!_cars[i].getHasParkingTicket()){
            cars.push_back(_cars[i]);
        }
    }
    return cars;
}
std::map<int, int> Park::getPenaltiesByYear()
{
    std::map<int, int> penaltiesByYear;
    for (int i = 0; i < _cars.size(); ++i) {
        if(!_cars[i].getHasParkingTicket()){
            if(penaltiesByYear.find(_cars[i].getManufactureYear())== penaltiesByYear.end()){
                penaltiesByYear.insert(std::pair<int, int> (_cars[i].getManufactureYear(), 1));
            }else{
                penaltiesByYear[_cars[i].getManufactureYear()]++;
            }
        }
    }return penaltiesByYear;
}
std::vector<Car> Park::getCars(){
    return _cars;
}