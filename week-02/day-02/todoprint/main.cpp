#include <iostream>
#include <string>

int main() {

    std::string todoText = " - Buy milk\n";
    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indention

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    todoText.insert((0), "My todo:\n ");
    todoText.append ("  - Download game\n");
    todoText.append (" \t- Diablo");

    std::cout << todoText << std::endl;

    return 0;
}