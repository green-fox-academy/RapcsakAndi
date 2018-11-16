/*Create a function named search palindrome following your current language's style guide.
It should take a string, search for palindromes that at least 3 characters long
 and return a list with the found palindromes.*/

#include <iostream>

std::string palindromeSearcher(std::string text);

int main() {
    std::string word = "";
    std::string text = "English texts for beginners to practice reading and comprehension online and for free. Practicing your comprehension of written English will both improve your vocabulary and understanding of grammar and word order. The texts below are designed to help you develop while giving you an instant evaluation of your progress.";

    std::string palindromeSearcher(text);
    return 0;
}

std::string palindromeSearcher(std::string text, std::string word) {

    if (text == std::string(text.rbegin(), text.rend()) && word.length()>= text.length() / text[0] * 3) {
        std::cout<<word;
    }
}