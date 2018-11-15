#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"
#include <iostream>

template<class U>
class Triangle : public Polygon<U>
{
    public:
        Triangle(U,U);
        int area();

    protected:

    private:
};

#endif // TRIANGLE_H
