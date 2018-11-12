#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line


    std::ofstream practiceFile;
    practiceFile.open("practice.txt");
    practiceFile<<"I dont understand what Im doing\n";
    practiceFile.close();
    return 0;
}