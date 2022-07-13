#include <vector>
#include <cstdlib>
#include <ctime>

class Random{
public:
    int num;

    Random();
    void randRange(int min, int max);
    void randInVector(std::vector<int> vec);
    void shakeVector(std::vector<int> &vec);
    
};

void printVec(std::vector<int> vec);