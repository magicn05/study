#include <iostream>
#include <string>
#include <stdlib.h>
#include "stack.h"
using namespace std;

template <class T>
stack<T>::stack() {
  size = 10;
  top = 0;
  pStack = new T[size];
}

// template <class T>
// stack<T>::stack(stack &c) {
//   this->size = c.size;
//   this->top = c.top;
//   this->pStack = new int[c.size];
//   memcpy(this->pStack, c.pStack, sizeof(int) * c.size);
//   // memcpy(this->pStack, c.pStack, sizeof(c.pStack));
// }

template <class T>
stack<T>::~stack() {
  delete[] pStack;
  cout << "소멸자" << endl;
}

template <class T>
bool stack<T>::push(T n) {

  if (checkSize()) {
    pStack[top] = n;
    top = top + 1;
    return true;
   } 
else {
    setSize(n); // 증가하여 재할당.
    stack::push(n);
    return false;
  }
}

template <class T>
bool stack<T>::pop(T &n) {
  if (top != 0) {
    n = pStack[top - 1];
    top = top - 1;
    return true;
  } else if (top == 0) {
    cout << "No-data" << endl;
    return false;
  }
  return true;
}

template <class T>
bool stack<T>::checkSize() {
  if (size > top)
    return true;
  else if (top == size)
    return false;
  return true;
}

template <class T>
void stack<T>::setSize(int n) {
  int *temp_pStack = new int[size];
  size = size + 10;
  temp_pStack = pStack;
  delete[] pStack;
  pStack = new int[size];
  for (int i = 0; i < size - 10; i++) {
    pStack[i] = temp_pStack[i];
  }
  delete[] temp_pStack;
}

template <class T>
int stack<T>::showTop() { return top; }

template <class T>
void stack<T>::getData(int idx, T &data) {
  data = pStack[idx];
}

//template class stack<int>;
//template class stack<double>;