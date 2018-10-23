#include <iostream>
#include"Vector.h"

using namespace std;

void swap(Point &p,Point &q)
{
    Point temp= p;
    p=q;
    q=temp;
}
void swap(Point *p,Point *q)
{
    Point temp=*p;
    *p=*q;
    *q=temp;
}
float moduloV(const Vector &v)
{
    int x_= v.fin.x - v.inicio.x;
    int y_=v.fin.y - v.inicio.y;
    return sqrt(x_*x_ +  y_*y_);
}
float moduloV(const Vector *v)
{
    int x_= v->fin.x - v->inicio.x;
    int y_=v->fin.y - v->inicio.y;
    return sqrt(x_*x_ +  y_*y_);
}
int main()
{
    Point p(8,9);
    Point q(4,2);

    Point *ptr=&p;
    Point *pt=&q;

    swap(*ptr,*pt);
    (*ptr).print();
    (*pt).print();

    Vector *easy= new Vector(6,1);
    easy->print();
    easy->offset(10,10);
    easy->print();

    delete easy;

    cout<<moduloV(&p);
    cout<< moduloV(*pt);
    return 0;

}
