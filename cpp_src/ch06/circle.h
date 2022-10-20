#ifndef __CIRCLE
#define __CIRCLE

class Circle
{
private:
    int radius;
    static int numObject;
public:
    Circle();
    Circle(int r);
    Circle(const Circle& c);
    ~Circle();
    double getArea();
    void setRadius(int r);
    int getRadius();
    static int getNumofCircles();
}; 
 


#endif