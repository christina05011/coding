#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"
#include <iostream>

using namespace std;

class Rectangle : public Polygon
{
    public:
        Rectangle(int, int);
        int area();

    protected:

    private:
};

#endif // RECTANGLE_H
