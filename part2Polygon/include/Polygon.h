#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>

using namespace std;

class Polygon
{
    public:
        Polygon(int, int);
        void area();
        Polygon();

    protected:
        int width;
        int height;

};

#endif // POLYGON_H
