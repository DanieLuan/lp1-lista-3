#include <vector>

class Position{
    public:
        bool busy;
        bool current;
        Position();
};

class Map{
    public:
        std::vector<std::vector<Position>> map;
        int mapSize;
        int startX;
        int startY;
        int cX;
        int cY;
        Map(int size_);

        void printMap();

        void moveUP();
        void moveDOWN();
        void moveLEFT();
        void moveRIGHT();
        
        void setStartPos();
        bool verifyBusyPos(int x, int y);

        bool hasPath(int xCol, int yRow);
        
        bool verifyWay();
};