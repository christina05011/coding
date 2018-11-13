#include "Rectangle.h"
#include "Polygon.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int a, int b):Polygon(a,b){}

int Rectangle::area()
{
    cout<<"area REC: "<< width*height <<endl;
}
