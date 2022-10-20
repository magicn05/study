#include <iostream>
#include <memory>
using namespace std;

int main()
{
shared_ptr<int> ptr1 = make_shared<int>(1);
weak_ptr<int> ptr2 = ptr1;
cout << "ptr1/ptr2 use_count " << endl;
cout << ptr1.use_count() << endl;
cout << ptr2.use_count() << endl;
*ptr1=100;
*(ptr2.lock())=200;
cout << "*ptr1 = " << *ptr1 << endl;
cout << "*ptr2 = " << *(ptr2.lock()) << endl; 
//weakpointer 의 lock() : sharedpinter 의 주소 반환
}