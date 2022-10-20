
#include <iostream>
#include "stack.h"
using namespace std;


//template <class T> stack<double>;
template <class T>
void showData(stack<T>& s) {
  T data;
  if (s.showTop() == -1)
    cout << "no" << endl;
  else {
    
    for (int i = 0; i < s.showTop(); i++) {
      data = s.getData(i, data);
      cout << "data : " << data << " ";
    }
    cout << endl;
  }
}


int main() {
  stack<int> int_s;
  //stack<double> double_s;
  //stack<string> string_s;
  //stack<int>* int_s = new int
  //stack<double> double_s();
  //stack<string> string_s();

   for (int i = 0; i < 5; i++) {
     int_s.push(i);
   }

   int_s.push(123);
   int_s.push(456);

  // double j = 1.5;
  // for (int i = 0; i < 5; i++) {

  //   double_s.push(j);
  //   j = j + 1.1;
  // }

  // double_s.push(12.3);
  // double_s.push(45.6);
  // string_s.push("hello");
  // string_s.push("world");
  showData(int_s);
  // showData(double_s);
  // showData(string_s);

//   int data;
//   while (int_s.pop(data)) {
//     cout << data << " ";
//   }
//   cout << "\n";

//   double data_d;
//   while (double_s.pop(data_d)) {
//     cout << data_d << " ";
//   }
//   cout << "\n";

//   showData(s2);
//   while (s2.pop(data)) {
//     cout << data << " ";
//   }
//   cout << "\n";
//   // stack s2(s);
//   // s2 = s; //연산자 함수로 구현해야함.

  return 0;
}