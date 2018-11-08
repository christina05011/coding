#include "Animal.h"
#include <iostream>

Animal::Animal(string n, int p)
{
    nombre=n;
    nroPatas=p;
}

void Animal::habla(void)
{
    std::cout<< nombre << " " <<nroPatas<<endl;
}

Animal::Animal()
{
    nombre="nombre";
    nroPatas=4;
}
