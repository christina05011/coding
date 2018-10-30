#include <iostream>
#include "PointArray.h"

using namespace std;

int main() // función de esta clase: implementar un arreglo dinámico.
{
    Point p(1,3);
    Point q(3,3);
    Point r(3,1);
    Point arr[]={p,q,r};
    int size=sizeof(arr)/sizeof(arr[0]);

    PointArray pa2(arr,size);
    pa2.print();
    cout << endl;
    pa2.push_back(p);
    pa2.print();
    cout << endl;
    pa2.insert(1,q);//como ya aumentas 1 en el anterior, ahora tienes 5 posiciones
    pa2.print();
    cout << endl;
    pa2.remove(3);
    pa2.print();


    return 0;

}
