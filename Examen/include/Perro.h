#ifndef PERRO_H
#define PERRO_H


class Perro::public Animal
{
    public:
        Perro(string , int);
        void habla();
        ~Perro();

    private:
        string p= "perro";
        int c=4;
        string pe="wau, wau!!";


};

#endif // PERRO_H
