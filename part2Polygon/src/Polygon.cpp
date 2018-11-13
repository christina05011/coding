#include "Polygon.h"
#include <iostream>

using namespace std;

Polygon::Polygon()
{
    width=0;
    height=0;
}

Polygon::Polygon(int a, int b)
{
    width=a;
    height=b;
}

void Polygon::area()
{
    cout <<"area: " << (width*height) << endl;
}
