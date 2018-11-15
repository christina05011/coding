#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>

using namespace std;

template<class U>
class Polygon
{
    public:
        Polygon(U, U);
        int area();

    protected:
        U width,height;

    private:
};
#endif // POLYGON_H
