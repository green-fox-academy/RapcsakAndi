#include <iostream>
#include <string>

using namespace std;

int main() {
    // Write a program that asks for a number.
    // It would ask this many times to enter an integer,
    // if all the integers are entered, it should print the sum and average of these
    // integers like:
    //
    // Sum: 22, Average: 4.4


    int n;
    std::cout << "Enter how many number will you type: ";
    std::cin >> n;
    int sum = 0;
    int ave = 0;

    for(int i=0; i<n; i++){
        int z;
        std::cout<< "Enter the numbers: "<<std::endl;
        std::cin >>z;
        sum +=z;
        ave = sum/n;

        }
    std::cout<< "Sum: "<< sum << "Average: "<< ave <<std::endl;






    return 0;
}