#include <iostream>
#include <vector>
/*visszafele összeadni*/
std::string returnMatrix(std::vector<std::vector<std::string>> a, std::vector<std::vector<std::string>> b);

int main()
{
    std::vector<std::vector<std::string>> a = {{"a","b","c"},{"d","e","f"}, {"g","h","i"}};
    std::vector<std::vector<std::string>> b = {{"j","k","l"},{"m","n","o"}, {"p","q","r"}};

    std::string result = returnMatrix(a,b);

    std::cout<<result;

    return 0;
}

std::string returnMatrix(std::vector<std::vector<std::string>> a, std::vector<std::vector<std::string>> b){
    std::string newMatrix = "";

    for (int i = 0; i < a.size(); ++i) {
        std::string innerVector = "";
        for (int j = 0; j < a.size(); ++j) {
            innerVector += (a[i][j] + b[b.size()-1-i][b.size()-1-j]+ ",");
        }
        newMatrix += innerVector;
    }
    return newMatrix;
}