#include <iostream>

using namespace std;

class A{
    public:
    A()
    {
        cout << "매개변수 없는 생성자 A" << endl;
    }
    A(int x){
        cout << "매개 변수 생성자 A" << endl;
    }
    ~A(){
        cout << "소멸자 A" << endl;
    }
};

class B : public A{
    public:
    B(){
        cout << "생성자 B" << endl;
    }
    B(int x) {
        cout << "매개변수 생성자 B" <<  endl;
    }
    ~B(){
        cout << "소멸자 B" << endl;
    }
};

class C : public B{
    public:
    C(){
        cout << "생성자 c" << endl;
    }
    ~C(){
        cout << "소멸자 C" << endl;
    }
};

class D : public C{
    public:
    D(){
        cout << "생성자 D" << endl;
    }
    ~D(){
        cout << "소멸자 D" << endl;
    }
};

int main()
{
    B b(0);
    // C c;
    // D d;
    return 0;
}