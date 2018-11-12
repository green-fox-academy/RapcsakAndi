#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

void copyFile(std::ifstream theFile);

int main() {

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
        std::cout<< "Animal name is: " << name << " Species: " << species << " Ages: " << ages << std::endl;
    }

    std::ofstream myNewFile;
    myNewFile.open("../my-new-file.txt");

    copyFile(theFile);
    return 0;
}
void copyFile(std::ifstream theFile,std::ofstream myNewFile ){
    std::ofstream myNewFile;
    myNewFile.open("../my-new-file.txt");

    myNewFile<<theFile;
    myNewFile.close();
}