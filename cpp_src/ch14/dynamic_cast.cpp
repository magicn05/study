#include <iostream>

using namespace std;

class Shape{};

class Rectangle : public Shape{

};


int main()
{
  // Shape* pShape = NULL;
  // int choice;
  // cin >> choice;
  // switch(choice){
  //   case 1: pShape = new Shape; break;
  //   case 2: pShape = new Rectangle; break;
  // }
  Rectangle r1;
  Shape* p = dynamic_cast<Shape *> (&r1); //upcasting
  if (p==NULL){
    cout << "casting fail" << endl;
  }
  // Rectangle* p1 = dynamic_cast<Rectangle*> (p); //downcasting
  // if (p1==NULL){
  //   cout << "downcasting fail" << endl;
  // }


  // Rectangle* r1;
  // Rectangle *pRect = new Rectangle;
  // Shape *pShape = pRect;
  // Shape *ppShape
  // //Shape* p = static_cast<Shape *> (&r1); //Up casting
  // Rectangle* p1 = dynamic_cast<Rectangle *>(ppShape); //Down casting 불가능
  // Shape* pppShape = dynamic_cast<Shape *>(r1); //up casting 가능

  // cout << typeid(pShape).name() << endl;
  // cout << typeid(*pShape).name() << endl;
  // cout << typeid(pRect).name() << endl;
  // cout << typeid(*pRect).name() << endl;
  // delete pRect;
}