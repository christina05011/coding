#include "PolygonArray.h"
#include "Polygon.h"

#include <iostream>

using namespace std;

int main()
{
    Polygon circle(5,4);
    Polygon cua(6,4);
    Polygon bb(8,2);
    Polygon arr[]={circle,cua,bb};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout << "construyendo con argumentos"<<endl;
    for(int i=0; i<size ; i++){
        arr[i].area();
    }

    PolygonArray pa(arr,size);
    cout <<"usando constructor copia"<<endl;
    PolygonArray pp=pa;
    pp.push_back(cua);
    pp.area();
    cout<<"insertar elemento" <<endl;
    pp.insert(2,cua);
    pp.area();
    cout << endl;

    return 0;
}
