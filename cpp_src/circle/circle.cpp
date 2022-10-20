#include <iostream>


using namespace std;
#include "circle.h"





Circle::Circle()
{
    radius = 1;
    // cout << "기본 생성자 함수 호출" << endl;
    numObject = numObject + 1;
}

Circle::~Circle()
{
    // cout << "The end" << endl;
    numObject = numObject - 1;
}

Circle::Circle(int r)
{
    radius = r;
    numObject = numObject + 1;
}

double Circle::getArea() const
{
    return 3.14 * radius * radius;
}

void Circle::setRadius(int r)
{
    radius = r;
}

int Circle::getRadius () const
{
    return radius;
}

int Circle::getNumofCircles()
{
    // numObject = numObject + 1;
    return numObject;
}

Circle::Circle(const Circle &c)
{
    this->radius = c.radius;
    numObject = numObject + 1;
    // cout << "복사 생성자 " << endl;
}

Circle Circle::operator+(Circle obj)
{
    Circle tmp;
    tmp.radius = this->radius + obj.radius;
    return tmp;
}

bool Circle::operator==(Circle obj)
{
    if (this->radius == obj.radius)
        return true;
    else
        return false;
}

Circle &Circle::operator+(int obj)
{
    this->radius = this->radius + obj;
    return *this;
}

Circle &Circle::operator++()
{
    this->radius = this->radius + 1;
    return *this;
}

Circle Circle::operator++(int obj)
{
    Circle tmp = *this;
    this->radius = this->radius + 1;
    return tmp;
}

