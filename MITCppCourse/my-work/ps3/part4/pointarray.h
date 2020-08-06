#ifndef POINTARRAY_H
#define POINTARRAY_H

class Pointarray{
    private:
        int size;
        Point *points;
        void resize(int size);

    public:
        Pointarray();
        Pointarray(const Point points[], const int size);
        Pointarray(const Pointarray &pv);
        ~Pointarray();

        void clear();
        int getSize() const { return size; }
        void push_back(const Point &p);
        void insert(const int pos, const Point &p);
        void remove(const int pos);
        Point *get(const int pos);
        const Point *get(const int pos) const;
}

#endif