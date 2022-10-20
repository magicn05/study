#include <iostream>

using namespace std;

int main()
{
  int n = 10;
  const int* p1 = &n;
  cout << *p1 << endl;

  int* p2 = const_cast<int *>(p1);
  
  *p2 = 20;
  cout << *p2 << endl;
}