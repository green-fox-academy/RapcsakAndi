#include <iostream>
#include <string>
#include <vector>

std::vector<int> subStrList(std::string list, std::vector<std::string> searchArr);

int main(int argc, char *args[])
{
    //  Create a function that takes a string and a vector of string as a parameter
    //  Returns the index of the string in the vector where the first string is part of
    //  Only need to find the first occurence and return the index of that
    //  Returns `-1` if the string is not part any of the strings in the vector

    //  Example:
    std::vector<std::string> searchArr = {"this", "is", "teaching", "what", "I'm", "searching"};
    std::string list = "ching";
    subStrList("ching", searchArr);

    for (int j = 0; j < subStrList(list, searchArr).size(); ++j) {
        std::cout << subStrList(list, searchArr)[j] << " ";
    }
    std::cout << "\n";
    //  should print: `4`
    list = "not";
    subStrList("not", searchArr);
    for (int k = 0; k < subStrList(list, searchArr).size(); ++k) {
        std::cout << subStrList(list, searchArr)[k] << std::endl;
    }
    //  should print: `-1`

    return 0;
}

std::vector<int> subStrList(std::string list, std::vector<std::string> searchArr)
{
    std::vector<int> index;
    for (int i = 0; i < searchArr.size(); ++i) {
        if (searchArr[i].find(list) != std::string::npos) {
            index.push_back(i);
        }
    }
    if (index.size() == 0) {
        index.push_back(-1);
    }
    return index;
}