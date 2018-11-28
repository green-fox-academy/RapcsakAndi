#include <iostream>

int josephus(int n, int k);

int main() {

    /*Write a function to solve Josephus Problem. The program should ask for a number,
    this number represents how many people are in the "game".
    The return value should be the number of the "winning" seat.*/

    int number;
    std::cout<<"How many person are in the game?"<<std::endl;
    std::cin>>number;

    std::cout<<josephus(number,2)<<std::endl;

    return 0;
}
/*int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else

        return (josephus(n - 1, k) + k-1) % n + 1;
}*/
int josephus(int n,int k) {
    int a=1;
    for(int i=1;i<=n;i++) {
        a=(a+k-1)%i+1;
    }
    return a;
}
