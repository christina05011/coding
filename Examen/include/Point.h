#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(int, int);
        Point(Point &p);
        void resize(int newSize, const Point &p);
        void insert(const int a, int b);
        void insertFinal(int);
        void remove(int);
        ~Point();

    private:
        double x, y;
        int size;
        int *points;
};

#endif // POINT_H
