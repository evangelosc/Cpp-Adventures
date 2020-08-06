#ifndef POLYGON_H
#define POLYGON_H

class Polygon{
    protected:
        static int number;
        Pointarray points;
    public:
        Polygon(const Pointarray &pa);
        Polygon(const Point points[], const int number);
        virtual double area() const = 0;
        static int getNumPolygons() { return number; }
        int getNumSides() const { return points.getSize(); }
        const Pointarray *getPoints() const { return &points; }
        ~Polygon() { --number; }
};

class Rectangle : public Polygon {
    public:
        Rectangle(const Point &a, const Point &b);
        Rectangle(const int a, const int b, const int c, const int d);
        virtual double area() const;
};

#endif