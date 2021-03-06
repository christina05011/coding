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

PointArray::PointArray(PointArray &o)//pa es lo ...&o.
{
    this->size=o.size;//el de la izq viene de la class y el de la der es el que t� pones/igualas.
    this->points=new Point[o.size];//resevo dir.memo. con NEW.
    for(int i=0; i<size ; ++i)//O i++.
        points[i]=o.points[i];
}

int PointArray::getSize()
{
    return this->size;
}

PointArray::~PointArray()
{
    delete[] points;
}

