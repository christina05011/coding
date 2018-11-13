#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

Circle::Circle(int a)
{
    radio=a;
}

int Circle::area()
{
    cout<<"area CIR: "<< 3.1415*radio*radio <<endl;
}
