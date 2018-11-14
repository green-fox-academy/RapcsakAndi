#include "counter.h"

Counter::Counter(int field)
{
    _field = field;
    _initualValue = _field;


}

Counter::Counter(){
    _field = 0;
    _initualValue = 0;
}

int Counter::get() {
    return _field;
}
void Counter::add(int x){
    _field += x;
}
void Counter::add(){
    _field++;
}
void Counter::reset(){
    _field = _initualValue;
}
