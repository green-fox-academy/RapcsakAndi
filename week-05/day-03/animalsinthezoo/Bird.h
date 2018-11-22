#ifndef ANIMALSINTHEZOO_BIRD_H
#define ANIMALSINTHEZOO_BIRD_H

#include "animal.h"


class Bird : public Animal{
public:
    std::string breed() override;
    std::string getName() override;
    Bird(std::string name);
};


#endif //ANIMALSINTHEZOO_BIRD_H
