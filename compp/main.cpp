#include <iostream>
#include "point.h"

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


int main()
{
    //Point p;
    Point p(4,3);
    Point q(6,7);

    Point *ptr1=&p;
    Point *ptr2=&q;

    /*swap(&p,&q);

    (*ptr1).print(); //ptr1->print();
    (*ptr2).print();//ptr2->print();
*/
    swap(*ptr1,*ptr2);
    (*ptr1).print(); //ptr1->print();
    (*ptr2).print();//ptr2->print();

    Point *easy= new Point(4,4);//invoco al constructor argumento// easy es punt//cuando hago new tengo que hacer delete
    easy->print();
    easy->offset(10,10);
    easy->print();

    delete easy;
    return 0;


    //p.offset(4,4);
    //Point z=q;
    //p.print();
    //q.print();
    //z.print();

}
