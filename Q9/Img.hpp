#include <vector>

class Img{
public:
    std::vector<std::vector<int>> imgMat;
    int rowX;
    int colY;

    Img(int colY_, int rowX_);

    void print();
    void paintPixel(int y, int x, int newColor);
    void drawLine(int y1, int x1, int y2, int x2, int newColor);
    void fill(int y, int x, int newColor);
    
    Img select(int y1, int x1, int y2, int x2);//ponto X1;Y1 é o Ponto Superior Esquerdo
};

void fillAdjacent(std::vector<std::vector<int>> &imgMat, int y, int x, int oldColor, int newColor);