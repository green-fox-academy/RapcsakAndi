#include <iostream>
int main(){

    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;

    for (int i=1; i<=n; i++){
        if (i==1 || i==n){
            for (int j=1; j<=n; j++){
                std::cout<<"%";
            }
        }else{
            for (int k=1; k<=n; k++){
                if(k==1 || k==i || k==n){
                    std::cout<<"%";
                }else{
                    std::cout<<" ";
                }
            }
        }
        std::cout<<std::endl;
    }

    return 0;

}