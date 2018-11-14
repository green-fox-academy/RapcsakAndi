#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <iostream>

class Counter {

private:
    int _field;
    int _initualValue;

public:
    Counter();
    Counter(int field);

    int get();

    void add(int x);

    void add();

    void reset();


};


#endif //COUNTER_COUNTER_H
