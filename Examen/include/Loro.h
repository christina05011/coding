#ifndef LORO_H
#define LORO_H


class Loro:public Animal
{
    public:
        Loro(string , int);
        void habla();
        ~Loro();

    private:
        string l;
        int d;
        string lo;


};

#endif // LORO_H
