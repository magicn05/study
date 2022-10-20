#include <iostream>
using namespace std;

int main()
{
  int num =0;
  auto func = [&num](int x, int y) {
    num++; cout << "num = " << num << "합은" << x + y << endl;};
  func(3,3);
  func(2,2);


}