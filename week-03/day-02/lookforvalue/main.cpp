#include <iostream>

int lookForIndex (int a [], int lenght, int findNumber);

int main() {

    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

   int myArray [4] = {3, 56, 87, 5};

   int result = lookForIndex(myArray, 4, 76);

   std::cout<< result<<std::endl;


    return 0;
}

int lookForIndex (int a [], int lenght, int findNumber)
{
  for ( int i = 0; i < lenght; i++){
      if (a[i] == findNumber){
          return i;
      }
  }

  return 0;

}

