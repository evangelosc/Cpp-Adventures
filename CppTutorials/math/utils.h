#ifndef UTILS
#define UTILS

struct Rectangle{
    double length;
    double width;
};

namespace mathsutils{
    double area(double length, double width);

    double area(double length);

    double area(Rectangle r);

    double pow(double base, int pow=2);
}

#endif