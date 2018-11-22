#ifndef ANIMALSINTHEZOO_REPTILE_H
#define ANIMALSINTHEZOO_REPTILE_H

#include "animal.h"

class Reptile : public Animal {
public:
    std::string breed() override;
    std::string getName() override;
    Reptile(std::string name);
};


#endif //ANIMALSINTHEZOO_REPTILE_H
