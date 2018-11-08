#include <iostream>

int main() {
    // - Create a two dimensional array
    //   which can contain the different shades of specified colors
    // - In `colors[0]` store the shades of green:
    //   `"lime", "forest green", "olive", "pale green", "spring green"`
    // - In `colors[1]` store the shades of red:
    //   `"orange red", "red", "tomato"`
    // - In `colors[2]` store the shades of pink:
    //   `"orchid", "violet", "pink", "hot pink"`

    /*std::string colors [5] = {"lime", "forest green", "olive", "pale green", "spring green" };
    std::string colors [3] = {"orange red", "red", "tomato"};
    std::string colors [4] = {"orchid", "violet", "pink", "hot pink"};*/

    std::string colors1 [3][5] = {{"lime", "forest green", "olive", "pale green", "spring green"}, {"orange red", "red", "tomato"}, {"orchid", "violet", "pink", "hot pink"}};

    for ( int i = 0; i < 3; i++ ) {
        for (int j = 0; j <5; j++) {

            std::cout << colors1[i][j]<< "   ";
        }
        std::cout << std::endl;
    }
        return 0;
}