#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int computeRec( int x, int y);

int main() {
    int x;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>x;
    int y;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>y;


    std::cout<<computeRec(x, y)<<std::endl;
    return 0;
}

int computeRec(int x, int y){
    if(x<=0 || y<=0){
        return 1;
    }else {
        return x * computeRec(x, y - 1);
    }
}