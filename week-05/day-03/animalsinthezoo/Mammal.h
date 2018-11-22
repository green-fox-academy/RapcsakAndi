#ifndef ANIMALSINTHEZOO_MAMMAL_H
#define ANIMALSINTHEZOO_MAMMAL_H

#include "animal.h"


class Mammal : public Animal {
public:
    std::string breed() override;
    std::string getName() override;
    Mammal(std::string name);
};


#endif //ANIMALSINTHEZOO_MAMMAL_H
