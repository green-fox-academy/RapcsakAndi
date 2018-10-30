#include <iostream>
#include <string>

int main() {
    std::string example("In a dishwasher far far away");
    /*std::string from = "dishwasher";

    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
    // Please fix it for me!
    // Expected output: In a galaxy far far away
    int start_pos = example.find(from);
    if(start_pos == std::string::npos) //does the sentence contain cat?
        std::cout << "Cannot replace" << std::endl;
    else
        example.replace(start_pos, from.length(), "galaxy");
    std::cout << example << std::endl; */

    std::string Example = "In a dishwasher far far away.";
    std::string Old = "dishwasher";
    std::string New = "galaxy";
    Example.replace(Example.find(Old),Old.size(),New);
    std::cout << Example << std::endl;

    return 0;
}