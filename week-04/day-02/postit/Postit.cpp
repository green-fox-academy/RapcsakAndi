#include "Postit.h"

Postit::Postit(std::string backgroundColor, std::string text, std::string textColor)
{
    _backgroundColor = backgroundColor;
    _text= text;
    _textColor = textColor;

}

std::string Postit::getBackgroundColor() {
    return _backgroundColor;
}
std::string Postit::getText() {
    return _text;
}
std::string Postit::getTextColor() {
    return _textColor;
}