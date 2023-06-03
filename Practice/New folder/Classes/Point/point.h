#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class point
{
    private:
        double x;
        double y;

    public:
        point();
        point(double);
        void setX(double);
        void setY(double);
        double getX();
        double getY();
        void print();
        ~point();
};

#endif // POINT_H_INCLUDED
