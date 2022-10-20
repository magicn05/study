#include <iostream>
#include "ex4-1.h"
using namespace std;

Circle::Circle(){
    radius = 1;
    cout << "기본 생성자 함수 호출" << endl;
}

Circle::~Circle()
{
    cout << "The end" << endl;
}

Circle::Circle(int r)
{
    radius = r;
    cout << "매개변수가 있는 생성자 함수 호출" << endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

void Circle::setRadius(int r)
{
    radius = r;
}

int Circle::getRadius(){
    return radius;
}

Circle::Circle(const Circle& c)
{
    this->radius = c.radius;
    cout << "복사 생성자 " << endl;
}

