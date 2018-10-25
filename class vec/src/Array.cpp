#include "PointArray.h"

PointArray::PointArray()
{
    this->size=0;
    this->points=new Point[size];
}
PointArray::PointArray(const Point pts[], const int size)
{
    this->size=size;
    this->points=new Point[size];
    for(int i=0; i<size; i++)
        points[i]=pts[i];

}

//PointArray::PointArray(PointArray &o);

int PointArray::getSize(){
    return this->size;
}
PointArray::~PointArray()
{
    delete[] points;
}
