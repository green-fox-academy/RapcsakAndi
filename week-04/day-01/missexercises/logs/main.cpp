#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

std::vector<std::string> uniqueIPAdresses(float &ratio);

int main()
{
    float r = 1.0;
    try{
        std::vector<std::string> ip = uniqueIPAdresses(r);
    }catch(int e){
        if(e == 2){
            std::cout<<"File is not open"<<std::endl;
            return e;
        }
    }
    return 0;
}

std::vector<std::string> uniqueIPAdresses(float &ratio)
{
    std::ifstream logFile;
    logFile.open("../logs.txt");
    if (logFile.is_open()) {
        std::cout << ":-)" << std::endl;
    } else {
        std::cout << ":-(" << std::endl;
        throw 2;
    }
    std::string data;
    std::string IPAdress;
    std::string getPost;
    float get = 0;
    float post = 0;
    std::vector<std::string> IPAdresses;


    while (logFile >> data >> data >> data >> data >> data >> IPAdress >> getPost >> data) {

        if (getPost == "GET") {
            get++;
        } else if (getPost == "POST") {
            post++;
        }
        if (std::find(IPAdresses.begin(), IPAdresses.end(), IPAdress) == IPAdresses.end()) {
            IPAdresses.push_back(IPAdress);
            std::cout << IPAdress << std::endl;
        }
    }
    ratio = get / post;
    std::cout << ratio << std::endl;
    logFile.close();
    return IPAdresses;
}