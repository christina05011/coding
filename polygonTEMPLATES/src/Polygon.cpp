#include "Polygon.h"
#include <iostream>

using namespace std;

template<class U>
Polygon<U>::Polygon(U a, U b)
{
    width=a;
    height=b;
}

template<class U>
int Polygon<U>::area()
{
    return width*height;
}
