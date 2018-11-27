#include <iostream>
#include <fstream>
#include <string>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.


int main() {
    std::ifstream logFile;
    logFile.open("../logs.txt");
    std::string data;
    std::string IPAdress;
    std::string getPost;
    float get;
    float post;

    if (logFile.is_open()) {
        std::cout << ":-)" << std::endl;
    } else {
        std::cout << ":-(" << std::endl;
        return 2;
    }
    while (std::getline(logFile, data)) {
        logFile >> data >> data >> data >> data >> data >> IPAdress >> getPost;
    }

    if (logFile.is_open()) {
        while (getline(logFile, data)) {
            logFile >> data >> data >> data >> data >> data >> IPAdress >> getPost;
            if (getPost == "GET") {
                get++;
            } else if (getPost == "POST") {
                post++;
            }

            return 0;
        }
    }
}