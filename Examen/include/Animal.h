#ifndef ANIMAL_H
#define ANIMAL_H


class Animal
{
    public:
        Animal(string n, int p);
        virtual const void habla(void);
        void hacerHablar();
        ~Animal();


    protected:
        string nombre;
        int nroPatas;

};

#endif // ANIMAL_H
