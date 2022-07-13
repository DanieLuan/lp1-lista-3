#include "Map.hpp"
#include <iostream>
#include <string>

int main(){
    Map game(5);


    game.printMap();
    std::cout << "(" << game.cX<< ", " << game.cY << ")\n";
    std::string enter;
    std::cin >> enter;
    while(enter != "-1"){
        if(enter == "u"){
            game.moveUP();
        }
        if(enter == "d"){
            game.moveDOWN();
        }
        if(enter == "l"){
            game.moveLEFT();
        }
        if(enter == "r"){
            game.moveRIGHT();
        }
        
        if(enter == "path"){
            int x, y;
            std::cin >> x;
            std::cin >> y;
            if(game.hasPath(x, y)){
                std::cout << "Exist Path!" << std::endl;
            } else {
                std::cout << "Don't exist Path!" << std::endl;
            }
            std::cin.ignore();
        }
        
        game.printMap();
        std::cout << "(" << game.cX<< ", " << game.cY << ")\n";
        std::cin >> enter;
    }
    return 0;
}