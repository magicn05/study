#include <iostream>

using namespace std;

class A{
  int data;
  public:
  A(int d){
    this->data = d;
    cout << this->data << " 생성자" << endl;
  }
  ~A(){
    cout << this->data << "소멸자" << endl;
  }
};

void f2(){
  A a(20);
  throw "Error";
  cout << "f2 실행 중 " << endl;
}


void f1(){
  A a(10);
  f2();
  cout << "f1 실행중" << endl;
}

int main() throw(const char*)
{
  try{
    f1();
  }
  catch (const char * errstr){
    cout << errstr << endl;
  }
}