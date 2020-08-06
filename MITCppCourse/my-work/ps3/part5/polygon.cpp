#include "polygon.h"
#include <cmath>

int Polygon::n = 0;
Polygon::Polygon(const Pointarray &pa) : points(pa){
    ++number;
}

Polygon::Polygon(const Point pointArray[], const int number) : points(pointArray, number) {
    ++number;
}

Point cP[4];
Point *updateCP(const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0,0)){
    cP[0] = p1;
    cP[1] = p2;
    cP[2] = p3;
    cP[3] = p4;
    return cP;
}

Rectangle::Rectangle(const Point &l1, const Point &ur) : Polygon(updateCP(l1, Point(l1.getX(), ur.getY()), ur, Point(ur.getX(), l1.getY()), 4) {}

Rectangle :: Rectangle(const int llx, const int lly, const int urx, const int ury) : Polygon(updateCP(Point(llx, lly), Point(llx, ury), Point(urx, ury), Point(urx, lly)),4){}

double Rectangle::area() const{
    int length = points.get(1)->getY() - points.get(0)->getY();
    int width = points.get(2)->getX() - points.get(1)->getX();
    return std::abs((double)length * width);
}

