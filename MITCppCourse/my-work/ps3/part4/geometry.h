#ifndef GEOMETRY_H
#define GEOMETRY_H

class Point{
    private:
        int x, y;
    public:
        Point(int x, int y);
        const int getX() const;
        const int getY() const;
        void setX(const int newX);
        void setY(const int newY);
};

#endif