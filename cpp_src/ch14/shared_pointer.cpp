#include <iostream>
#include <memory>
using namespace std;

int main() {
  
  shared_ptr<int> ptr = make_shared<int>(10);
  cout << *ptr << endl;
  cout << ptr.use_count() << endl;

  auto ptr1= ptr; //shared 포인터에서는 사용가능.
  cout << ptr1.use_count() << endl;

}