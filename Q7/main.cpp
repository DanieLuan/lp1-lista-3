#include <iostream>
#include "Random.hpp"
int main(){
    Random a;
    
    a.randRange(10, 15);
    std::cout << "Random number in [10;15] range: "<< a.num << std::endl;

    std::vector<int> vec = {10,12,15,17,13,89};

    a.randInVector(vec);
    std::cout << "Vector: "<< std::endl;
    printVec(vec);
    std::cout << "Random number in vector: "<< a.num << std::endl;
    
    std::cout << "New shaked vector: " << std::endl;
    a.shakeVector(vec);
    printVec(vec);
    
    return 0;
}