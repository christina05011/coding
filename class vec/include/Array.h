#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"

class PointArray
{
    public:
        PointArray();
        PointArray(const Point pts[], const int size);
        //PointArray(PointArray &o);
        ~PointArray();

        int getSize();

    private:
        int size;
        Point *points;
};

#endif // POINTARRAY_H
