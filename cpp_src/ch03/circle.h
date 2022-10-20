#ifndef _CIRCLE_H
#define _CIRCLE_H


class Circle
{
public:
    
    Circle(); //기본 생성자 --> 매개변수 없는 생성
    Circle (int r); //매개 변수 있는 생성자
    int radius;
    double getArea();
    ~Circle(); //소멸자
};

#endif