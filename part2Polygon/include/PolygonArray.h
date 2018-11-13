#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H
#include "Polygon.h"

#include <iostream>

using namespace std;

class PolygonArray
{
    public:
        PolygonArray();
        PolygonArray(const Polygon pts[], int size);
        PolygonArray(PolygonArray &p);
        ~PolygonArray();

        void area();
        int getSize();
        void push_back(const Polygon &p);
        void insert(const int, const Polygon &p);
        void remove(const int);

    private:
        int size;
        Polygon *polygons;
        void resize(int resize);
};

#endif // POLYGONARRAY_H
