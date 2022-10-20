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
    double getArea() const;
    void setRadius(int r);
    int getRadius() const;
    static int getNumofCircles();
    Circle operator+(Circle obj);
    Circle& operator+(int obj);
    bool operator==(Circle obj);
    Circle operator+=(Circle obj);
    Circle& operator++(); //전위 ++ 연산자
    Circle operator++(int obj); //후위 ++ 연산자
    friend istream& operator>> (istream& in, Circle& obj);
    friend ostream& operator<< (ostream& os, const Circle& obj);

}; 
 


#endif