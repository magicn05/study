#ifndef __CIRCLE
#define __CIRCLE

class Circle
{
private:
    int radius;

public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
    void setRadius(int r);
};

#endif