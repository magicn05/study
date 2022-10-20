// Circle::Circle()
// {
//     radius = 1;
//     cout << "기본 생성자 함수 호출" << endl;
//     cout << "반지름" << radius << "원생성" << endl;
// }

#include "circle.h"

#include <iostream>

using namespace std;

Circle::~Circle(){
    cout << "소멸자" << endl;
}

Circle::Circle() : Circle(1){}

Circle::Circle(int r)
{
    radius = r;
    cout << "매개변수 있는 생성자 함수 호출" << endl;
    cout << "반지름" << radius << "원생성" << endl;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}
