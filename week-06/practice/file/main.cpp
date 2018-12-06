#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

std::map<std::string, int> wordsWithNumber(std::vector<std::string> allWords);
std::string mostWordInTheText(std::map<std::string, int> wordsInTheText);
int findY(std::vector<std::string> allWords);
int findFirstH(std::vector<std::string> allWords);

int main()
{
    std::ifstream file;
    file.open("../sometext.txt");

    if(!file.is_open()){
        std::cout << "could not open file" << std::endl;
        return 2;
    }

    std::vector<std::string> allWords;
    std::string date;
    //int counter = 0;
    while(file >> date){
        /*if(date[date.size()-1] == "y")
         * counter ++;*/

        allWords.push_back(date);

    }
    file.close();

    std::map<std::string, int> fuck = wordsWithNumber(allWords);
    std::cout << mostWordInTheText(fuck)<< std::endl;
    std::cout <<findY(allWords) <<std::endl;
    std::cout <<findFirstH(allWords) <<std::endl;


    return 0;
}
std::map<std::string, int> wordsWithNumber(std::vector<std::string> allWords)
{
    std::map<std::string, int> wordsInTheText;

    for (int i = 0; i < allWords.size(); ++i){
        if (wordsInTheText.find(allWords[i]) == wordsInTheText.end()) {
            wordsInTheText.insert({allWords[i], 1});
        } else {
            wordsInTheText[allWords[i]] += 1;
            }
        }
        return wordsInTheText;
}
std::string mostWordInTheText(std::map<std::string, int> wordsInTheText)
{
    int mostWord = 0;
    std::string resultOfTheWord = "";

    for (auto i : wordsInTheText) {
        if (i.second >= mostWord) {
            mostWord = i.second;
            resultOfTheWord = i.first;
        }
    }
    return resultOfTheWord;
}
int findY(std::vector<std::string> allWords){
    int y = 0;
    for (int i = 0; i <allWords.size() ; ++i) {
        if (allWords[i].back() == 'y'){
            y ++;
        }
    }
    return y;
}
int findFirstH(std::vector<std::string> allWords){
    int h = 0;
    for (int i = 0; i <allWords.size() ; ++i) {
        if (allWords[i].at(0) == 'h'){
            h ++;
        }
    }
    return h;
}