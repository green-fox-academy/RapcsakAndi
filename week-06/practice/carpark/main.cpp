#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#include "park.h"

Park readFromFile(std::string fileName);
void writeToFile(std::string fileName, Park carpark);

int main()
{
    try{
        Park park = readFromFile("../cars.txt");

        std::cout << "Oldest: " << park.getOldest() << std::endl;
        std::map<int, int> penaltiesByYear = park.getPenaltiesByYear();
        for (std::pair<int, int> pair : penaltiesByYear) {
            std::cout << "Year: " << pair.first << " Number of cars without ticket: " << pair.second << std::endl;
        }

        park.removeCar(5);
        park.removeCar(3);

        park.modifyTicket(1, false);

        writeToFile("../newcars.txt", park);

    }catch(int e){
        if(e == 2){
            std::cout << "cars.txt could not be opened" << std::endl;
            return 2;
        }else if( e == 3){
            std::cout << "newcars.txt could not be opened" << std::endl;
            return 3;
        }
    }



    return 0;
}

Park readFromFile(std::string fileName)
{
    std::ifstream file(fileName);
    if(file.is_open()){
        std::cout << "Open" << std::endl;
    }else{
        std::cout << "Your file is closed" << std::endl;
        throw 2;
    }

    Park park;
    std::string line;
    int idCounter = 1;
    while(std::getline(file, line)){
        std::istringstream stream(line);
        std::string word;

        std::string licencePlate;
        int year;
        int hasTicket;

        std::getline(stream, word, ',');
        licencePlate = word;
        std::getline(stream, word, ',');
        year = std::stoi(word, nullptr, 10);
        std::getline(stream, word, ',');
        hasTicket = std::stoi(word, nullptr, 10);

        Car car(idCounter, licencePlate, year, hasTicket == 1);
        park.addCar(car);
        ++idCounter;
    }

    return park;
}

void writeToFile(std::string fileName, Park park)
{
    std::ofstream file;
    file.open(fileName);
    if(file.is_open()){
        std::vector<Car> cars = park.getCars();
        for (int i = 0; i < cars.size(); ++i) {
            int ticket = cars[i].getHasParkingTicket();
            file << cars[i].getLicensePlate() << "," << cars[i].getManufactureYear() << "," << ticket << std::endl;
        }
    }else{
        throw 3;
    }
}