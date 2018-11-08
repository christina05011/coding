#ifndef LORO_H
#define LORO_H
#include <iostream>
#include "Animal.h"

using namespace std;

class Loro : public Animal
{
    public:
        Loro(string, int);
        void habla();

    protected:

    private:
};

#endif // LORO_H
