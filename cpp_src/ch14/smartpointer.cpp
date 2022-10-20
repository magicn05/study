#include <iostream>
#include <memory>
using namespace std;

class temp{
  int count;
  int q_count;
  public:
  temp(int r, int q){
    this->count = r;
    this->q_count = q;
    cout << "생성자" << endl;
  }
  void showCount(){
    cout << this->count << endl;
    cout << this->q_count << endl;
  }
  void setCount(int r){
    this->count = r;
    
  }
};


int main() {
  //unique_ptr<int> ptr = make_unique<int>(10);

  unique_ptr<temp> ptr = make_unique<temp>(10, 25);
  ptr->showCount();
  ptr->setCount(20);
  ptr->showCount();
  cout << &ptr << endl;
  cout << ptr.get() << endl;
  
  //cout << "*ptr : " << *ptr << endl;
  //*ptr = 20;
  //cout << "*ptr : " << *ptr << endl;
  //delete ptr ;
  //auto ptr1 = ptr;
  //auto ptr1(ptr.release());
  //cout << "*ptr1 : " << *ptr1 << endl;
  //cout << "*ptr1 : " << ptr1.get() << endl;
  //unique_ptr<int> ptr2 = make_unique<int>(10);
  //cout << ptr2.get() << endl;

}