#include "Animal.h"
#include <iostream>

Animal::Animal(string n, int p)
{
    nombre=n;
    nroPatas=p;
}

void Animal::hacerHablar()
{
    this->habla();
}
