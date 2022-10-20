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
    Circle(const Circle& c); //복사 생성자
    double getArea();
    void setRadius(int r);
    int getRadius();
    void readRadius(int r);
};

#endif