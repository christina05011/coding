#include <iostream>
#include "point.h"

Point::Point(int xh, int yh)
{
    x=xh;
    y=yh;
}

Point::Point()
{
    x=0;
    y=0;
}
Point::Point(Point &o)
{
    x=o.x; //está llamando a la posición
    y=o.y;
}
void Point::print()
{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}

void Point::offset(int nx, int ny)
{
    x+=nx;
    y+=ny;
    //std::cout<<x;
}

