#ifndef POSTIT_POSTIT_H
#define POSTIT_POSTIT_H

#include <iostream>

class Postit {

private:
        std::string _backgroundColor;
        std::string _text;
        std::string _textColor;

public:
    Postit (std::string backgroundColor, std::string text, std::string textColor);

    std::string getBackgroundColor();

    std::string getText();

    std::string getTextColor();
};


#endif //POSTIT_POSTIT_H
