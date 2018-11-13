#include "PolygonArray.h"
#include "Polygon.h"

#include <iostream>

using namespace std;

PolygonArray::PolygonArray()
{
    this->size=0;
    this->polygons=new Polygon[size];
}

PolygonArray::PolygonArray(const Polygon pts[], int size)
{
    this->size=size;
    this->polygons=new Polygon[size];
    for(int i=0; i<size ; i++){
        polygons[i]=pts[i];
    }
}

PolygonArray::PolygonArray(PolygonArray &p)
{
    this->size=p.size;
    this->polygons=new Polygon[p.size];
    for(int i=0; i<size ; i++){
        polygons[i]=p.polygons[i];
    }
}

void PolygonArray::area()
{
    for(int i=0; i<size ; i++){
        polygons[i].area();
    }
}

int PolygonArray::getSize()
{
    return size;
}

void PolygonArray::resize(int newSize)
{
    Polygon *pts = new Polygon[newSize];
    int minsize = (newSize > size) ? size : newSize;
    for(int i=0; i<minsize ; i++)
        pts[i] = polygons[i];

    delete[] polygons;

    size = newSize;
    polygons = pts;

}

void PolygonArray::insert(const int pos, const Polygon &p)
{
    resize(size+1);
    for(int i= size-1; i>pos ; i--){
        polygons[i]=polygons[i-1];
    }
    polygons[pos]=p;

}

void PolygonArray::push_back(const Polygon &p)
{
    resize(size+1);
    polygons[size-1]=p;
}

void PolygonArray::remove(const int pos)
{
    for(int i=pos; i<size-1 ; i++)
        polygons[i]=polygons[i++];
    resize(size-1);
}

PolygonArray::~PolygonArray()
{
    delete[] polygons;
}
