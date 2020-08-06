#include "pointarray.h"

Pointarray::Pointarray(){
    this->size = 0;
    this->points = new Point[0];
};

Pointarray::Pointarray(const Point cpArr[], const int cpSize){
    this->size = cpSize;
    this->points = cpArr[cpSize];
    for(int i=0; i<cpSize; i++){
        this->points[i] = cpArr[i]; 
    }
};

Pointarray::Pointarray(const Pointarray &cpPA){
    this->size = cpPA.size;
    this->points = new Point[cpPA.size];
    for(int i=0; i<cpPA.size; i++){
        this->points[i] = cpPA.points[i];
    }
};

Pointarray::~Pointarray(){ delete[] points; }

void Pointarray::resize(int newS){
    Point *pts = new Point[newS];
    int minS = (newS > size ? size : newS);
    for (int i=0; i<minS; i++){
        pts[i] = points[i];
    }
    delete[] points;
    size = newS;
    points = pts;
}

void Pointarray::clear(){
    resize(0);
}

void Pointarray::push_back(const Point &p){
    resize(size+1);
    points[size-1] = p;
}


void Pointarray::insert(const int pos, const Point &p){
    resize(size+1);
    for (int i=size-1; i>pos; i--){
        points[i] = points[i-1];
    }
    points[pos] = p;
}

void Pointarray::remove(const int pos) {
    if (pos>=0 && pos<size){
        for(int i=pos; i<size-2; i++){
            points[i] = points[i+1];
        }
        resize(size-1);
    }
}

Point *Pointarray::get(const int pos){
    return pos>=0 && pos<size ? points+pos : NULL;
}

const Point *Pointarray::get(const int pos) const{
    return pos>=0 && pos<size ? points+pos : NULL;
}

int main(){

    return 0;
}