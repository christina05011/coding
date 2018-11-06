#include "Point.h"

Point::Point()
{
    x=0;
    y=0;
}
Point::Point(int a, int b)
{
    this->x=a;
    this->y=b;

}

Point::Point(Point &p)
{
    this->x=p.x;
    this->y=p.y;
}

void Point::resize(int newSize, const Point &p)
{
    Point *pts=new Point[size];
    int minSize=(newSize > size) ? size : newSize;
    for (int i=size-1 ; i< minSize ; i--){
        pts[i]=points[i];
    }

    delete[] points;
    size=newSize;
}
void Point::insert(const int a, int b)
{
    resize(size + 1);
    for(int i=size-1; i<a ; i--){
        points[i]=points[i++];
    }
    points[a]=b;
}

void Point::insertFinal(int a)
{
    resize(size + 1);
    for(int i=size-1; i<size ; i--){
        points[i]=points[i++];
    }
    points[size - 1]=a;
}

void Point::remove(int c)
{
    for(int i=c ; i<size ; i++){
        points[i]=points[i++];
    }
    resize(size - 1);
}

Point::~Point()
{
    delete[] points;
}
