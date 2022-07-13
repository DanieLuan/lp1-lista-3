#include <iostream>
#include "Img.hpp"

int main(){
    Img image(10, 15);

    image.print();
    std::cout << "\n";

    std::cout << "Draw line (1,0) to (7,13):\n";
    image.drawLine(1,1,8,14,7);

    image.print();

    return 0;
}
