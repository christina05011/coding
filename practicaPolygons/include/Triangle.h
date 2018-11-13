#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"
#include <iostream>

using namespace std;

class Triangle : public Polygon
{
    public:
        Triangle(int, int);
        int area();

    protected:

    private:
};

#endif // TRIANGLE_H
