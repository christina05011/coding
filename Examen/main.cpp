#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
#include "Loro.h"

using namespace std;

int main()
{
    Animal pet("animal",4);
    hacerHablar(pet);

    Perro oso("oso");

    return 0;
}
