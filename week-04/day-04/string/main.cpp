#include <iostream>
#include <string>
#include <algorithm>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

int test(std::string s, char x);

int main ()
{
   std::string s = "jhtdrtnpoibrwssslknzssu";
    test("lets test for the letter s", "s" );

    std::cout<< s <<std::endl;
}

int test(std::string s, char x)
{
    if(s.length() == 0)
        return 0;
    else if (s[0] == x)
        return 1 + test(s.substr(1, s.length()), x);
    else
        return test(s.substr(1, s.length()), x);
}