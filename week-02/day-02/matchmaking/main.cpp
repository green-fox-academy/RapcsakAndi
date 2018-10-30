#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys)
{
    std::vector<std::string> couples(boys);
    int j = 1;
    for (int i = 0; i < girls.size(); ++i)
    {
        couples.insert((couples.begin()+j),girls[i]);
        j += 2;
    }
    return couples;

   /*
    std::vector<std::string> couples(girls);
    int j = 1;
    for (int i = 0; i < boys.size(); ++i)
    {
        couples.insert((couples.begin()+j),boys[i]);
        j += 2;
    }
    if (boys.size () > girls.size ()){
          couples.insert (boys.end)
    }

    return couples;
}
*/
int main(int argc, char* args[])
{
    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};

    // Write a method that joins the two lists by matching one girl with one boy into a new list
    // Exepected output: "Eve", "Joe", "Ashley", "Fred"...

    for(const auto& planet : makingMatches(girls, boys))
    {
        std::cout << planet << " ";
    }

    return 0;
}