#include "utils.h"


double area(double length, double width){
    return length*width;
}

double area(double length){
    return length*length;
}

double area(Rectangle r){
    return r.length*r.width;
}

double pow(double base, int pow){
    int total = 1;
    for (int i=0; i<pow; i++){
        total *= base;
    }
    return total;
}