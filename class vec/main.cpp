#include <iostream>
#include "Vector.h"
#include "PointArray.h"

using namespace std;

int main()
{
    Point p(1,3);
    Point q(3,3);
    Point r(3,1);
    Point arr[]={p,q,r};
    int size=sizeof(arr)/sizeof(arr[0]); //instanciar un objeto de tipo ARRAY utilizando un constructor
    PointArray pa(arr,size);

    if(true)//con while es infinito
        PointArray pa2=pa;//acá se crea adentro y no existe cuando sale.

    cout << pa.getSize() << endl;


    return 0;

}
