#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool copyFile(std::string src, std::string cel);

int main() {

    /*std::ifstream theFile;
    theFile.open("../my-file.txt");
    std::string name;
    std::string species;
    float ages;

    if (theFile.is_open()) {
        std::cout << ":-)" << std::endl;
    } else {
        std::cout << ":-(" << std::endl;
        return 2;
    }
    while(theFile>>name>>species>>ages){
        std::cout<< "Animal name is: " << name << " Species: " << species << " Ages: " << ages << std::endl;
    }*/

    if(!copyFile("../my-file.txt", "../my-new-file.txt")){
        return 2;
    }


    return 0;
}

bool copyFile(std::string src, std::string cel) {

    std::ifstream theFile;
    std::ofstream myNewFile;
    std::string line;
    theFile.open(src);
    myNewFile.open(cel);

    if (theFile.is_open()) {
        std::cout << ":-)" << std::endl;
    } else {
        std::cout << ":-(" << std::endl;
        return false;
    }
    while (std::getline(theFile, line)) {

        myNewFile << line << std::endl;
    }

    theFile.close();
    myNewFile.close();

    return true;
}

