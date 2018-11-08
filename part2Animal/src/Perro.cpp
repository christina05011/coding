#include "Perro.h"
#include <iostream>

Perro::Perro(string n ,int p):Animal(n,p){}

void Perro:: habla(void)
{

    cout << nombre << " hace wauu wauu!!" << endl;
    cout << "Tiene " << nroPatas << " patas" << endl;
}
