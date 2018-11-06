#include "Gato.h"
#include <iostream>

Gato::Gato(string a)
{
    g=a;
}

Animal::Animal(string g , int u)
{
    nombre=g;
    nroPatas=u;
}

virtual const void Animal::habla(void)
{
    nombre=g;
    nroPatas=u;
    ga=ga;
    std::cout << nombre;
    std::endl;
    std::cout << ga;
    std::endl;
}

void Animal::hacerHablar()
{
    this->habla();
}

Gato::~Gato()
{
    delete g;
    delete u;
    delete ga;
}
