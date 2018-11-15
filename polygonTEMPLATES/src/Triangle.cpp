#include "Triangle.h"
#include "Polygon.h"
#include <iostream>

using namespace std;

template<class U>
Triangle<U>::Triangle(U a, U b) :Polygon(a,b){}

template<class U>
int Triangle<U>::area()
{
    return (width*height)/2;
}
