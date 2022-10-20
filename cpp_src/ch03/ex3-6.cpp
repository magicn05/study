#include <iostream>

using namespace std;

class Rectangle
{

    int width;
    int height;
public:
    Rectangle();
    Rectangle(int a);
    Rectangle(int a, int b);    
    double getArea();
    bool isSquare();

};

bool Rectangle::isSquare()
{
    if (width == height)
        return true;
    else return false;
}

Rectangle::Rectangle(int a, int b)
{
    width = a;
    height = b;
}

Rectangle::Rectangle(int a)
{
    width = a;
    height = a;
}

Rectangle::Rectangle():Rectangle(1) {}

double Rectangle::getArea()
{
    return width * height;
}

int main()
{
        
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "Rect1은 정사각형이다." << endl;
    if(rect2.isSquare()) cout << "Rect2은 정사각형이다." << endl;
    if(rect3.isSquare()) cout << "Rect3은 정사각형이다." << endl;
    // rect.width = 3;
    // rect.height = 5;
    // cout << "사각형의 면적은 " << rect.getArea() << endl;
}