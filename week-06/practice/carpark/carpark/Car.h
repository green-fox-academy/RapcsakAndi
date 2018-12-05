#ifndef CARPARK_CAR_H
#define CARPARK_CAR_H

#include <iostream>

class Car
{
private:
    int _id;
    std::string _licensePlate;
    int _maufactureYear;
    bool _hasParkingTicket;
public:
    Car(int id, std::string &licensePlate, int manufactureYear, bool hasParkingTicket);
    void setHasParkingTicket(bool hasParkingTicket);
    int getId();
    std::string getLicensePlate();
    int getManufactureYear();
    bool getHasParkingTicket();

};


#endif //CARPARK_CAR_H
