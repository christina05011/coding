#ifndef POINT_H
#define POINT_H

template<class T>
class Point
{
    public:
        Point();
        Point(Point<T> &o);
        Point(T,T);
        void offset(T,T);
        void print();

    private:
        T x,y;
};

#endif // POINT_H
