#include "Car.h"

Car::Car(int id, std::string licensePlate, int manufactureYear, bool hasParkingTicket)
{
    _id = id;
    _licensePlate = licensePlate;
    _maufactureYear = manufactureYear;
    _hasParkingTicket = hasParkingTicket;

}
void Car::setHasParkingTicket(bool hasParkingTicket)
{
    _hasParkingTicket = hasParkingTicket;
}
int Car::getId(){
    return _id;
}
std::string Car::getLicensePlate(){
    return _licensePlate;
}
int Car::getManufactureYear(){
    return _maufactureYear;
}
bool Car::getHasParkingTicket(){
    return _hasParkingTicket;
}