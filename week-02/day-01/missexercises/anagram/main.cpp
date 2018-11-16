#include <iostream>
#include <algorithm>

bool isAnagram (std::string a, std::string b);

int main() {

    /* Create a function named is anagram following your current language's style guide.
     * It should take two strings and return a boolean value depending on whether its an anagram or not.*/
    std::string a = "remek";
    std::string b = "mezek";
    isAnagram(a,b);
    std::cout<<"remek az merek is: "<<isAnagram<<std::endl;
    return 0;
}

bool isAnagram (std::string a, std::string b){
    int n1, n2, i;
    n1 = a.length();
    n2 = b.length();
    if(n1 != n2){
        std::cout<<"not same lenght"<<std::endl;
        return false;}
    sort(a.begin(),a.end());
    sort (b.begin(),b.end());

    for (i = 0; i <n1; i++) {
        if (a[i] != b[i]){
            std::cout<<"not same letters"<<std::endl;
        return false;}
    }
    return true;
}