#include <iostream>
#include <string>
#include <exception>
#include <fstream>

int main() {

    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory


    std::ifstream theFile;
    theFile.open("../my-file.txt");
    std::string name;
    std::string species;
    float ages;

    if (theFile.is_open()) {
        std::cout << ":-)" << std::endl;
    } else {
        std::cout << ":-(" << std::endl;
    }
    while(theFile>>name>>species>>ages){
            std::cout<< "Animal name is: " << name << " Species: " << species << " Ages: " << ages << std::endl; }


    return 0;
}