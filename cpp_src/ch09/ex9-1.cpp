#include <iostream>

using namespace std;

class Base{
    public:
    virtual void f(){
        cout << "base :: f() called" << endl;
    }
};

class Derived : public Base{
    public:
    void f() {
        cout << "Derived ::f() called" << endl;
    }
};

int main()
{
    Derived d, * pDer;
    pDer = &d;
    pDer->f();

    Base p, *pBase;
    pBase = pDer;
    pBase->f();


}