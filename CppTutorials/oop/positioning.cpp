#include <iostream>

class Position{
    private:
        int x = 10;
        int y = 20;
    public:
        int getX() { return x; }
        int getY() { return y; }
        void setX(int newX){ x=newX; }
        void setY(int newY) { y=newY; }
        Position operator+(Position pos){
            Position newPos;
            newPos.x = x + pos.x;
            newPos.y = y + pos.y;
            return newPos;
        }
        bool operator==(Position pos){
            if (x==pos.x && y==pos.y){
                return true;
            } else{
                return false;
            }
        }
};

int main(){
    Position pos1, pos2;
    Position pos3 = pos1 + pos2;
    std::cout << "Pos3.x: " << pos3.getX() << " Pos3.y: " << pos3.getY() << std::endl;
    
    pos2.setX(2);
    if (pos1==pos2){
        std::cout << "They are the same!" << std::endl;
        std::cout << "Here!" << std::endl;
    }
    
    return 0;
}