#include "Point.h"
#include <iostream>

using namespace std;

template<class T>
Point<T>::Point(T xh, T yh)
{
    x=xh;
    y=yh;
}

template<class T>
Point<T>::Point()
{
    x=0;
    y=0;
}

template<class T>
Point<T>::Point(Point<T> &o)
{
    x=o.x;
    y=o.y;
}

template<class T>
void Point<T>::print()
{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}

template<class T>
void Point<T>::offset(T nx, T ny)
{
    x+=nx;
    y+=ny;
}
