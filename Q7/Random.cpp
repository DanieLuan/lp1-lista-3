#include <iostream>
#include "Random.hpp"

Random::Random(){
    srand(time(NULL));
    num = rand();
}

void Random::randRange(int min, int max){
    srand(time(NULL));
    num = min + rand() % ((max+1)-min);
}

void Random::randInVector(std::vector<int> vec){
    int randIndex;
    srand(time(NULL));

    randIndex = rand() % vec.size();
    num = vec[randIndex];
}

void Random::shakeVector(std::vector<int> &vec){
    std::vector<int> vecCopy;
    size_t size = vec.size(); //pode trocar o "size_t" para int, ou para "long unsigned int"
    int randIndex;

    while(vecCopy.size() != size){ 
        srand(time(NULL));
        randIndex = rand() % vec.size();
        vecCopy.push_back(vec[randIndex]);
        vec.erase(vec.begin()+randIndex);
    }

    for(size_t i = 0; i < vecCopy.size(); i++){
        vec.push_back(vecCopy[i]);
    }
}

void printVec(std::vector<int> vec){
    std::cout << "{ ";
    for(size_t i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }
    std::cout << "}" << std::endl;
}