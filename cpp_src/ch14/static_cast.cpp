#include <iostream>

using namespace std;

class Shape{

};

class Rect : public Shape{

};



int main()
{
  Rect r1;
  Shape* p = static_cast<Shape *> (&r1); //Up casting
  Rect* p1 = static_cast<Rect *>(p); //Down casting
  
  // const int num = 1;
  // int* p1 = static_cast<int *>(&num);
  // *p1 = 100;
  // cout << *p1 << endl;
  // cout << num << endl;
}