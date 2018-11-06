#include "Perro.h"
#include <iostream>

virtual const void Perro::habla(void)=0
{
    nombre=p;
    nroPatas=c;
    this->pe=pe;
    std::cout << nombre;
    std::endl;
    std::cout << pe;
    std::endl;
}

Perro::~Perro()
{
    delete p;
    delete c;
    delete pe;
}







