#include "Loro.h"
#include <iostream>

Loro::Loro(string h)
{
    g=h;
}

Animal::Animal(string l , int d)
{
    nombre=l;
    nroPatas=d;
}

virtual const void Animal::habla(void)
{
    nombre=l;
    nroPatas=d;
    lo=lo;
    std::cout << nombre;
    std::endl;
    std::cout << lo;
    std::endl;
}

void Animal::hacerHablar()
{
    this->habla();
}

Loro::~Loro()
{
    delete l;
    delete d;
    delete lo;
}
