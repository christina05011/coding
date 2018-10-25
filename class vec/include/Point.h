#ifndef POINT_H
#define POINT_H


class Point{
    public:
        Point();
        Point(Point &o);
        Point(int,int);

        void offset(int,int);//modifica al vector
        void print();
        double getX();
        double getY();
        void setX(double x);
        void setY(double y);

    private:
        double x,y;
};
#endif // POINT_H
