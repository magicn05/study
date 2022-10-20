#include <iostream>
#include "circle.h"
using namespace std;


int main()
{
    Circle donut;
    //donut.radius = 1;
    double area = donut.getArea();
    cout << area << endl;
    
    Circle pizza(10);
    //cout << area << endl;
    area = pizza.getArea();
    cout << "pizza 면적은" << area << endl;
    return 0;
    //Circle pizza;
}