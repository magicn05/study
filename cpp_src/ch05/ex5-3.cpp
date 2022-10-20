#include <iostream>

using namespace std;

#include "ex4-1.h"

void increase(Circle c)
{
    int r = c.getRadius();
    c.setRadius(r);
}

Circle getCircle(){
    Circle tmp(30);
    return tmp;
}

int main()
{
    Circle c;

    cout << c.getArea() << endl;
    
    c = getCircle();
    cout << c.getArea() << endl;

    

}