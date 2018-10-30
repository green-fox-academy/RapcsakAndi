#include <iostream>
#include <string>


int main() {

    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    /*quote.insert(21, "always takes longer than ");*/


    std::string Quote = "Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.";
    std::string Old = "It";
    std::string New = "It always takes longer than";
    Quote.replace(Quote.find(Old),Old.size(),New);

    std::cout << Quote << std::endl;

    /*std::cout << quote << std::endl;*/

    return 0;
}