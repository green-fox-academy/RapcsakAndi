#include <iostream>
#include <fstream>
#include <string>

  // Create a function that takes 3 parameters: a path, a word and a number,
  // than it should write to a file.
  // The path parameter should describes the location of the file.
  // The word parameter should be a string, that will be written to the file as lines
  // The number paramter should describe how many lines the file should have.
  // So if the word is "apple" and the number is 5, than it should write 5 lines
  // to the file and each line should be "apple"

void newFile(std::string path, std::string word, int number);

int main() {

    std::string path("../fruitsFile.txt");
    int number;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>number;
    std::string word;
    std::cout<<"Enter a fruit: "<<std::endl;
    std::cin>>word;

    newFile(path, word, number);

    return 0;
}

void newFile(std::string path, std::string word, int number){
    std::ofstream fruitsFile;
    fruitsFile.open(path);

    for(int i = 0; i<number; i++){

    fruitsFile<<word<<std::endl;
    }
    fruitsFile.close();

}