#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"
//#include "src/Polygon.cpp"
#include <iostream>

template<class U>
class Rectangle : public Polygon<U>
{
    public:
        Rectangle(U,U);
        int area();
    protected:

    private:
};

#endif // RECTANGLE_H
