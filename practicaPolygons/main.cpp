#include <iostream>
#include <math.h>
#include "Polygon.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Rectangle cua(4,5);
    Polygon *a=&cua;

    Triangle tri(3,2);
    Polygon *b=&tri;

    Circle cir(4);
    Circle *c=&cir;

    a->printArea();
    b->printArea();
    c->area();//circle no es herencia, tiene su propia función
    cua.area();
    cua.printArea();
    a->area();

    return 0;
}
