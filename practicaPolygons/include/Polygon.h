#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>

using namespace std;

class Polygon
{
    public:
        Polygon(int, int);
        virtual int area(void)=0;
        void printArea();

    protected:
        int width,height;

    private:
};

#endif // POLYGON_H
