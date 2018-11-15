#include "Rectangle.h"
#include "Polygon.h"
#include <iostream>

using namespace std;

template<class U>
Rectangle<U>::Rectangle(U a, U b) :Polygon( a, b){}

template<class U>
int Rectangle<U>::area()
{
    return width*height;
}
