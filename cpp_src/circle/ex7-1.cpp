#include <iostream>
using namespace std;

#include "circle.h"









// void increase(Circle *c)
// {
//     int r = c->getRadius();
//     c->setRadius(r);
// }

// void readRadius(Circle& a){
//     int r;
//     cout << "Input radius";
//     cin >> r;
//     a.setRadius(r);
// }

istream& operator>> (istream &in, Circle &obj)
{
    in >> obj.radius;
    return in;
}

ostream& operator<< (ostream &os, const Circle &obj)
{
    os << "Radius : " << obj.getRadius() << endl;
    return os;
}

int Circle::numObject = 0;

int main()
{
    // Circle donut;
    // readRadius(donut);
    // cout << "area = " << donut.getArea() << endl;

    // Circle waffle(30);
    // //increase(&waffle);
    // cout <<waffle.getRadius() << endl;

    // Circle donut(waffle);
    // cout << donut.getRadius() << endl;

    // Circle baskin(10);

    // cout << "number of circles : " << baskin.getNumofCircles() << endl;

    // Circle *p = new Circle[10];

    // cout << "number of circles : " << p->getNumofCircles() << endl;

    Circle a(3), b(5), c;
    c = a + b;
    if (c == a)
        cout << "same" << endl;
    else
        cout << "Differ" << endl;
    if (c == (b + 3))
        cout << "same" << endl;
    else
        cout << "Differ" << endl;

    //a++;

    cout << a << endl;

    Circle d;
    cin >> d;
    return 0;
}