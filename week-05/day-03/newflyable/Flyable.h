#ifndef NEWFLYABLE_FLYABLE_H
#define NEWFLYABLE_FLYABLE_H


class Flyable
{
public:
    Flyable(){}
    ~Flyable(){}
    virtual void land() = 0;
    virtual void takeOff() = 0;
    virtual void fly() = 0;
};


#endif //NEWFLYABLE_FLYABLE_H
