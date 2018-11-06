#ifndef GATO_H
#define GATO_H


class Gato::public Animal
{
    public:
        Gato(string);
        Animal(string , int);
        virtual const void habla(void);
        void hacerHablar();
        ~Animal();
        ~Gato();

        string nombre;
        int nroPatas;

    private:
        string g= "gato";
        int u=4;
        string ga="miauu, miauu!!";

};

#endif // GATO_H
