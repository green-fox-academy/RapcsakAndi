#include <iostream>
int factor(int numbers);

int main() {
    // - Create a function called `factorio`
    //   that returns it's input's factorial

    int numbers;
    std::cout<< "Enter an integer: " << std::endl;
    std::cin>> numbers;

    std::cout << factor(numbers)<< std::endl;

    return 0;
}
int factor (int numbers) {
    int y = 1;
    for (int x = 1; x <= numbers; x++) {
        y = y * x;

    }

    return y;
}