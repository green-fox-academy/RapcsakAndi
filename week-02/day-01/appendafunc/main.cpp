#include <iostream>

std::string appendAFunc (std::string name);

int main() {

     // - Create a string variable named `typo` and assign the value `Chinchill` to it
    // - Write a function called `appendAFunc` that gets a string as an input,
    //   appends an 'a' character to its end and returns with a string
    //
    // - Print the result of `appendAFunc(typo)`

    std::string typo = "Chinchill";
    appendAFunc (typo);
    return 0;
}

std::string appendAFunc (std::string name){
     /*std::cout << name << "a " << std::endl;*/
     name.append("a");
     std::cout<<name<<std::endl;
}