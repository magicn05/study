#include <iostream>

using namespace std;

#include "ex4-1.h"

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

int main()
{
    // Circle donut;
    // readRadius(donut);
    // cout << "area = " << donut.getArea() << endl;


    Circle waffle(30);
    increase(&waffle);
    cout <<waffle.getRadius() << endl;

    Circle donut(waffle);
    cout << donut.getRadius() << endl;
    
    return 0;

}