#ifndef GATO_H
#define GATO_H
#include <iostream>
#include "Animal.h"

using namespace std;


class Gato : public Animal
{
    public:
        Gato(string , int);
        void habla(void);

    protected:

    private:
};

#endif // GATO_H
