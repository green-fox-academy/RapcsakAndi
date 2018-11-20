#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> quoteSwap(std::vector<std::string> quote){
    swap(quote[2],quote[5]);
    for(int i=0; i<quote.size(); ++i)
        std::cout << quote[i] << ' ';
    return quote;
}

int main(int argc, char* args[])
{
    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};
    quoteSwap(quote);
    // Accidentally I messed up this quote from Richard Feynman.
    // Two words are out of place
    // Your task is to fix it by swapping the right words with code
    // Create a method called quoteSwap().

    // Also, print the sentence to the output with spaces in between.

    return 0;
}

