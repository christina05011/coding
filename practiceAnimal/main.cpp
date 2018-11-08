#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
#include "Loro.h"

using namespace std;

int main()
{
    Perro car("oso",4);
    Animal *p=&car;

    Gato cat("lucy",4);
    Animal *c=&cat;

    Loro parrot("bird",2);
    Animal *pa=&parrot;

    c->hacerHablar();
    p->hacerHablar();
    car.hacerHablar();
    pa->hacerHablar();


    return 0;
}
