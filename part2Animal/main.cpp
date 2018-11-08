#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
#include "Loro.h"
#include "animalArray.h"

using namespace std;

int main()
{
    Animal car("oso",4);
    Animal cat("lucy",4);
    Animal parrot("bird",2);
    Animal arr[]={car,cat,parrot};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout << "construyendo con argumentos"<<endl;
    for(int i=0; i<size ; i++){
        arr[i].habla();
    }

    animalArray pa2(arr,size);
    cout <<"usando constructor copia"<<endl;
    animalArray pp=pa2;
    pp.push_back(cat);
    pp.habla();
    cout<<"insertar elemento" <<endl;
    pp.insert(1,cat);
    pp.habla();
    cout << endl;

    return 0;
}
