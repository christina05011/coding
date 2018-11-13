#include "Triangle.h"
#include "Polygon.h"
#include <iostream>

using namespace std;

Triangle::Triangle(int a, int b):Polygon(a,b){}

int Triangle::area()
{
    cout<<"area TRI: "<< (width*height)/2 <<endl;
}
