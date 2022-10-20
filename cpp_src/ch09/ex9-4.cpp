#include <iostream>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout << " --- shape --- " << endl;;
    }
    virtual ~Shape(){
        cout << "shape 소멸자" << endl;
    }
};
class Circle : public Shape{
    public:
    virtual void draw()    {
        Shape::draw();
        cout << "Circle" << endl;
    }
    virtual ~Circle(){
        cout << "circle 소멸자" << endl;
    }
};
int main(){
    Shape *s = new Circle();
    s->draw();
    s->Shape::draw();
    delete s;
}