#ifndef PERRO_H
#define PERRO_H
#include <iostream>
#include "Animal.h"

using namespace std;

class Perro : public Animal
{
    public:
        Perro(string ,int );
        void habla(void);

    protected:

    private:

};

#endif // PERRO_H
