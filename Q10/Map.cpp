#include "Map.hpp"
#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>

Position::Position(){
    busy = false;
    current = false;
}

Map::Map(int size_){
    //Inicializa o tamanho do mapa, sendo o menor tamanho possível 2x2
    if(size_ < 2){
        size_ = 2;
    }
    mapSize = size_;
    map.resize(mapSize, std::vector<Position>(mapSize));

    //Aleatoriamente sorteia posições para serem ocupadas
    int busyPos = (mapSize*mapSize)*0.3;
    srand(time(NULL));
    while(busyPos != 0){
        int x = rand()%mapSize;
        int y = rand()%mapSize;

        if(!verifyBusyPos(x, y)){
            map[y][x].busy = true;
            busyPos--;
        }
    }
    //Seleciona aleatoriamente uma posicao inicial
    setStartPos();
}

void Map::printMap(){
    for(size_t y = 0; y < map.size(); y++){
        for(size_t x = 0; x < map.size(); x++){
            if(map[y][x].busy == true){
                std::cout << "▢ ";
            } else if(map[y][x].current == true){
                std::cout << "ɵ ";
            } else{
                std::cout << "_ ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

void Map::setStartPos(){
    srand(time(NULL));
    int x = rand()%mapSize;
    int y = rand()%mapSize;
    while(verifyBusyPos(y, x)){
        x = rand()%mapSize;
        y = rand()%mapSize;
    }
    map[y][x].current = true;
    cX = x;
    cY = y;
}

bool Map::verifyBusyPos(int x, int y){
    return map[x][y].busy;
}

void Map::moveUP(){
    if(cY-1 < 0){
        return;
    }
    if(!verifyBusyPos(cY-1, cX)){
        map[cY][cX].current = false;
        cY--;
        map[cY][cX].current = true;
    }
}
void Map::moveDOWN(){
    if(cY+1 >= mapSize){
        return;
    }
    if(!verifyBusyPos(cY+1, cX)){
        map[cY][cX].current = false;
        cY++;
        map[cY][cX].current = true;
    }
}
void Map::moveLEFT(){
    if(cX-1 < 0){
        return;
    }
    if(!verifyBusyPos(cY, cX-1)){
        map[cY][cX].current = false;
        cX--;
        map[cY][cX].current = true;
    }
}
void Map::moveRIGHT(){
    if(cX+1 >= mapSize){
        return;
    }
    if(!verifyBusyPos(cY, cX+1)){
        map[cY][cX].current = false;
        cX++;
        map[cY][cX].current = true;
    }
}

bool Map::hasPath(int xCol, int yRow){
    if(verifyBusyPos(xCol, yRow))
        return false;
    //falta fazer o algoritmo para detectar um caminho porem... sei nao sou burro
    return true;

    
}
