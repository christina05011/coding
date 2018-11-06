#include "Animal.h"
#include <iostream>

Animal::Animal(string n , int p)
{
    this->nombre=n;
    this->nroPatas=p;
}

virtual const void Animal::habla(void)
{
    this->nombre=nombre;
    this->nroPatas=nroPatas;
    std::cout << nombre;
    std::endl;

}

void Animal::hacerHablar()
{
    this->habla();
}

Animal::~Animal()
{
    delete nombre;
    delete nroPatas;
}
