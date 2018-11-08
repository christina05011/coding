#include "Loro.h"
#include <iostream>

Loro::Loro(string n ,int p):Animal(n,p){}

void Loro:: habla(void)
{
    cout << nombre << " hace imitaciones!!" << endl;
    cout << "Tiene " << nroPatas << " patas" << endl;
}
