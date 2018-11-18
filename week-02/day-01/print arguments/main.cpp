#include <iostream>

void printParams (std::string first);
void printParams (std::string first, std::string second);
void printParams (std::string first, std::string second, std::string third);
void printParams (std::string first, std::string second, std::string third, std::string fourth);


int main() {
    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")
    // ...
    std::string first = "first";

    printParams(first);
    printParams("first", "second");
    printParams("first", "second", "third");
    printParams("first", "second", "third", "fourth");

    return 0;
}

void printParams (std::string& first){
    std::cout << first << std::endl;
}
void printParams (std::string& first, std::string& second){
    std::cout << first << " , " << second << std::endl;
}
void printParams (std::string& first, std::string& second, std::string& third){
    std::cout << first << " , " << second << " , " << third << std::endl;
}
void printParams (std::string& first, std::string& second, std::string& third, std::string& fourth){
    std::cout << first << " , " << second << " , " << third << " , " << fourth << std::endl;
}

