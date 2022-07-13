#include <iostream>
#include "Img.hpp"

Img::Img(int colY_, int rowX_){
    rowX = rowX_;
    colY = colY_;

    imgMat.resize(colY, std::vector<int>(rowX));
    for(int i = 0; i < colY; i++){
        for(int j = 0; j < rowX; j++){
            imgMat[i][j] = 0;
        }
    }
}

void Img::print(){
    for(int i = 0; i < colY; i++){
        for(int j = 0; j < rowX; j++){
            std::cout << imgMat[i][j];
        }
        std::cout << std::endl;
    }
}

//pseudo codigo do site https://www.geeksforgeeks.org/bresenhams-line-generation-algorithm/
void Img::drawLine(int y1, int x1, int y2, int x2, int newColor){
    double m_new = (y2-y1)*2;
    int slope_error_new = m_new - (x2-x1);

    for(int x = x1, y = y1; x <= x2; x++){
        imgMat[y][x] = newColor;
        slope_error_new += m_new;
        
        if(slope_error_new >= 0){
            y++;
            slope_error_new -= 2*(x2-x1);
        }
    }
}

Img Img::select(int y1, int x1, int y2, int x2){
    int newX, newY;
    newX = abs(x1-x2)+1;
    newY = abs(y1-y2)+1;

    Img newImg(newY, newX);
    int i2 = 0, j2 = 0;
    for(int i = y1; i <= y2; i++){
        for(int j = x1; j <= x2; j++){
            newImg.imgMat[i2][j2] = imgMat[i][j];
            j2++;
        }
        j2 = 0;
        i2++;
    }
    return newImg;
}

void Img::paintPixel(int y, int x, int newColor){
    imgMat[y][x] = newColor;
}

void Img::fill(int y, int x, int newColor){
    int oldColor = imgMat[y][x];

    fillAdjacent(imgMat, y, x, oldColor, newColor);
}

void fillAdjacent(std::vector<std::vector<int>> &imgMat, int y, int x, int oldColor, int newColor){
    //casos base
    if (x < 0 || x >= imgMat[y].size() || y < 0 || y >= imgMat.size()) 
        return; 
    if (imgMat[y][x] != oldColor) 
        return; 
    if (imgMat[y][x] == newColor) 
        return; 

    imgMat[y][x] = newColor;
    fillAdjacent(imgMat, y+1, x, oldColor, newColor);
    fillAdjacent(imgMat, y-1, x, oldColor, newColor);
    fillAdjacent(imgMat, y, x+1, oldColor, newColor);
    fillAdjacent(imgMat, y, x-1, oldColor, newColor);
}
