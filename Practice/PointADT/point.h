#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class point
{
    public:
        point();
        point(double);
        void setX(double);
        void setY(double);
        double getX();
        double getY();
        void print();
        ~point();
    private:
          double x;
        double y;
};
#endif // POINT_H_INCLUDED`
