#include <iostream>
#include <string>
#include <exception>
#include <fstream>

int lineNumber(std::string theFile);

int main() {

    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::string fileName("../my-file.txt");
    int lines = lineNumber(fileName);
    std::cout<<lines<<std::endl;
    return 0;
}

int lineNumber (std::string fileName){

    std::ifstream theFile;
    theFile.open(fileName);

    if (theFile.is_open()) {
         std::cout << ":-)" <<std::endl;
    } else{
        return 0;
    }

    int counter = 0;
    std::string line;
    while (std::getline(theFile, line)){
      ++counter;
    }
        return counter;
}

