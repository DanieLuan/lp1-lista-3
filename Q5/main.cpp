#include <iostream>
#include "Counter.hpp"

int main(){
    Counter var;

    var.count();
    var.count();

    std::cout << var.current() << std::endl;
    var.restart();
    std::cout << var.current() << std::endl;


    return 0;
}