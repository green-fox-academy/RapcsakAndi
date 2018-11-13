/*Create a PostIt class that has
a backgroundColor
a text on it
a textColor
Create a few example post-it objects:
an orange with blue text: "Idea 1"
a pink with black text: "Awesome"
a yellow with green text: "Superb!"*/

#include <iostream>
#include <vector>
#include "Postit.h"

class Postit;
int main() {

    Postit postit("orange", "Idea 1", "blue");
    Postit postit1("pink", "Awesome", "black");
    Postit postit2("yellow", "Superb!", "green");

    std::cout <<postit.getBackgroundColor() << " " << postit.getText() <<" " << postit.getTextColor() << std::endl;
    std::cout <<postit1.getBackgroundColor() << " " << postit1.getText() <<" " << postit1.getTextColor() << std::endl;
    std::cout <<postit2.getBackgroundColor() << " " << postit2.getText() <<" " << postit2.getTextColor() << std::endl;

    return 0;
}