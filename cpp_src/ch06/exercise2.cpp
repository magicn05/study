// screen size를최대 1024x768로 설정하고  
// Point 객체가x,y 좌표를 설정할 때(setXY()함수) 
// 그 크기를 초과하지않도록 설정하시오.  

#include <iostream>
using namespace std;

class Point 
{
private:
    static int base_x, base_y;
    int m_x, m_y;

public:
    Point();
    Point(int x, int y);
    ~Point();
    void show();
    void setXY(int x, int y);
    bool isEqual(const Point& p);

};

Point::Point(){
    m_x = 0;
    m_y = 0;
}


Point::Point(int x, int y)
{
    m_x = x;
    m_y = y;
}

void Point::show()
{
    cout << "(" << m_x << ", " << m_y << ")" <<endl;
}

Point::~Point()
{
    cout << "destroyer" << endl;
}

void Point::setXY(int x, int y)
{
    if (x>base_x)
        m_x = base_x;
    else m_x = x;

    if (y>base_y)
        m_y = base_y;
    else m_y = y;
}

bool Point::isEqual(const Point& p)
{
    return (m_x == p.m_x && m_y == p.m_y);
}

int Point::base_x = 1024;
int Point::base_y = 768;

int main()
{
// static 멤버함수이용하여  최대 스크린 크기를 1024x768로 설정 
    Point p1(100, 100);
    p1.show();

    p1.setXY(2000, 1000);
    p1.show();

    Point p;
    p.setXY(512, 1000);
    p.show();

    return 0;
}
