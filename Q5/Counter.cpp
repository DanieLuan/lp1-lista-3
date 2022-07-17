#include "Counter.hpp"

Counter::Counter(){
    countVar = 0;
}

void Counter::count(){
    countVar++;
}
void Counter::restart(){
    countVar = 0;
}
int Counter::current(){
    return countVar;
}