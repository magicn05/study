#include <iostream>

using namespace std;

#include "circle.h"

void increase(Circle *c)
{
    int r = c->getRadius();
    c->setRadius(r);
}

void readRadius(Circle& a){
    int r;
    cout << "Input radius";
    cin >> r;
    a.setRadius(r);
}

int Circle::numObject = 0;

int main() 
{
    // Circle donut;
    // readRadius(donut);
    // cout << "area = " << donut.getArea() << endl;
 

    Circle waffle(30);
    //increase(&waffle);
    cout <<waffle.getRadius() << endl;

    Circle donut(waffle);
    cout << donut.getRadius() << endl;
    
    Circle baskin(10);

    cout << "number of circles : " << baskin.getNumofCircles() << endl;

    Circle *p = new Circle[10];

    cout << "number of circles : " << p->getNumofCircles() << endl;

    return 0;

}