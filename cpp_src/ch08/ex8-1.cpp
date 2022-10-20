#include <iostream>

using namespace std;

class Point
{
protected:


public:
    int x, y;
    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void showPoint()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

class ColorPoint : public Point
{
    string color;

public:
    void setColor(string color)
    {
        this->color = color;
    }
    void showColorPoint()
    {
        cout << color << ":";
        showPoint();
    }
    bool equals(ColorPoint p){
        if(x==p.x && y==p.y && color == p.color)
        {
            return true;
        }
        else
            return false;
    }
};


int main()
{
    Point p;
    p.set(2,3);
    p.x = 5; // 외부접근은 에러 발생
    p.y = 5; // 외부접근은 에러 발생
    p.showPoint();
    
    ColorPoint cp;
    //cp.x = 10;
    //cp.y= 10;
    cp.set(3,4);
    cp.setColor("Red");
    // ColorPoint* pDer = &cp;
    // Point* pBase = pDer;
    // pDer = (ColorPoint*)pBase;
    
    // pBase->set(3, 4);
    // pDer->set(3,4);
    // pDer->setColor("Red");
    // pDer->showColorPoint();
    //pBase->setColor("Red");
    //pBase->showColorPoint();
}