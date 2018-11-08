#include "Gato.h"
#include <iostream>

Gato::Gato(string n, int p) : Animal(n,p){}

void Gato:: habla(void)
{
    cout << nombre << " hace miauu miauu !!" << endl;
    cout << "Tiene " << nroPatas << " patas" << endl;
}
