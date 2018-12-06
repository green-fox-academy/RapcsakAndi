#include <iostream>
#include <vector>
/*matrixos: Irj egy fuggvenyt aminek van 2 matrix bemenete es egy matrix visszateresi erteke.
A matrixok integereket tartalmaznak.
A fuggveny feladata, hogy add ossze a 2 matrixot ugy hogy az ugyanazokon levo elemeket add ossze.
Irj ra 2 tesztet*/

std::vector<std::vector<int>> returnMatrix(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b);

int main()
{
    std::vector<std::vector<int>> a = {{4,5,7},{3,8,9}, {1,4,6}};
    std::vector<std::vector<int>> b = {{4,8,12},{5,2,1}, {14,4,2}};

    std::vector<std::vector<int>> result = returnMatrix(a,b);

    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result.size(); ++j) {
            std::cout << result[i][j] <<",";
        }

    }

    return 0;
}

std::vector<std::vector<int>> returnMatrix(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b){
    std::vector<std::vector<int>> newMatrix;

    for (int i = 0; i < a.size(); ++i) {
        std::vector<int> innerVector;
        for (int j = 0; j < a.size(); ++j) {
            innerVector.push_back((a[i][j] + b[i][j]));
        }
        newMatrix.push_back(innerVector);
    }
    return newMatrix;
}