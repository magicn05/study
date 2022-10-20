#include <iostream>
#include "circle.h"
using namespace std;

Circle::Circle()
{
    radius = 1;
    cout << "기본 생성자 함수 호출" << endl;
    numObject = numObject + 1;
}

Circle::~Circle()
{
    cout << "The end" << endl;
    numObject = numObject - 1;

}

Circle::Circle(int r)
{
    radius = r;
    numObject = numObject + 1;
} 

double Circle::getArea(){
    return 3.14 * radius * radius;
} 

void Circle::setRadius(int r)
{
    radius = r;
}

int Circle::getRadius()
{
    return radius;
}

int Circle::getNumofCircles() 
{
    //numObject = numObject + 1;
    return numObject;
}



Circle::Circle(const Circle& c)
{
    this->radius = c.radius;
    numObject = numObject + 1;
    cout << "복사 생성자 " << endl;
}
