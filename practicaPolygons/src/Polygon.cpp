#include "Polygon.h"
#include <iostream>

using namespace std;

Polygon::Polygon(int a, int b)
{
    width=a;
    height=b;
}
void Polygon::printArea()
{
    this->area();
}
