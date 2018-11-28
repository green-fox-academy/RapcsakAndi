#include <iostream>
#include <string>
#include <vector>

std::vector<int> subStrList(std::string list,std::vector<std::string> searchArr );

int main(int argc, char* args[])
{
    //  Create a function that takes a string and a vector of string as a parameter
    //  Returns the index of the string in the vector where the first string is part of
    //  Only need to find the first occurence and return the index of that
    //  Returns `-1` if the string is not part any of the strings in the vector

    //  Example:
    std::vector<std::string> searchArr = {"this", "is", "teaching", "what", "I'm", "searching"};

    subStrList("ching", searchArr);

    for (int j = 0; j < index.size(); ++j) {
        std::cout<<index[j]<<std::endl;
    }
    //  should print: `4`
    subStrList("not", searchArr);
    //  should print: `-1`

    return 0;
}
std::vector<int> subStrList(std::string list,std::vector<std::string> searchArr ){
    std::vector<int> index;
    for (int i = 0; i <searchArr.size() ; ++i) {
        if(searchArr[i].find(list) != std::string::npos){
            index.push_back(i);
        }
    }
    if(index.size()==0){
        index.push_back(-1);
    }
    return index;
}