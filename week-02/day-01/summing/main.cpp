#include <iostream>

int sum(int numbers);

int main() {
    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer

    int numbers;
    std::cout<< "Enter an integer: " << std::endl;
    std::cin>> numbers;

    std::cout << sum(numbers)<< std::endl;

    return 0;
}
int sum (int numbers) {
    int y = 0;
    for (int x = 1; x <= numbers; x++) {
        y = y + x;

    }

    return y;
}