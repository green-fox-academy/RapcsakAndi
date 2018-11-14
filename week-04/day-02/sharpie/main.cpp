/*Sharpie
- Create `Sharpie` class
- We should know about each sharpie their `color` (which should be a string), `width`
(which will be a floating point number), `inkAmount` (another floating point number)
- When creating one, we need to specify the `color` and the `width`
- Every sharpie is created with a default 100 as `inkAmount`
- We can `use()` the sharpie objects
- which decreases inkAmount*/

#include <iostream>
#include "sharpei.h"

class Sharpei;

int main() {


    Sharpei sharpei("brown", 5.9);

    std::cout<<"Ink amount is: " << sharpei.getInkAmount()<<" "<<sharpei.getWidth()<<" "<<sharpei.getColor()<<std::endl;
    sharpei.use();
    std::cout<<"Ink amount is: " << sharpei.getInkAmount()<<" "<<sharpei.getWidth()<<" "<<sharpei.getColor()<<std::endl;
    return 0;
}
