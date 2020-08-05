#include "geometry.h"
#include <iostream>

Point::Point(int x=0,int y=0){
    this->x = x;
    this->y = y;
};

const int Point::getX() const{ return x; }
const int Point::getY() const{ return y; }
void Point::setX(const int newX) { x=newX; }
void Point::setY(const int newY) { y=newY; }

int main(){
    Point p;
    Point pp(1,2);
    std::cout << p.getX() << std::endl;
    std::cout << pp.getX() << std::endl;
    std::cout << p.getY() << std::endl;
    std::cout << pp.getY() << std::endl;

    pp.setX(5);
    std::cout << pp.getX() << std::endl;
    return 0;
}