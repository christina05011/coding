#include "PointArray.h"
#include "Point.h"

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

PointArray::PointArray(PointArray &o)
{
    this->size=o.size;
    this->points=new Point[o.size];
    for(int i=0; i<size ; ++i)
        points[i]=o.points[i];
}

void PointArray::resize(int newSize){//redimensionar
    Point *pts = new Point[newSize];
    int minsize = (newSize > size) ? size : newSize;
    for(int i=0; i<minsize ; i++)
        pts[i] = points[i];
    delete[] points;
    size = newSize;
    points = pts;
}
void PointArray::push_back(const Point &p){
    resize(size + 1);
    points[size - 1] = p;
}

void PointArray::insert(const int pos, const Point &p){ //posición que quieres insert
    resize(size + 1);
    for(int i=size-1; i>pos ; i--)
        points[i]=points[i-1];
    points[pos]=p;
}
void PointArray::remove(const int pos){//posición que quieres eliminar
    for(int i=pos; i<size-1 ; i++)
        points[i]=points[i+1];
    resize(size-1);


}

int PointArray::getSize()
{
    return size;
}

void PointArray::print(){
    for(int i=0; i<size; i++)
        points[i].print();
}
PointArray::~PointArray()
{
    delete[] points;
}
