#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<string> v;
  string input_string;
  for (int i =0; i<5; i++)
  {
    cout << "Input >> ";
    cin >> input_string;
    v.push_back(input_string);
  }
  int x[10] = {1,2,3,4,5,6,7,8,9,0};
  // cout << "Index for loop : " << endl;
  // for (int i =0; i<10; i++){
  //   cout << x[i] << " ";
  // }
  // cout << endl;

  cout << "Ranged-based for loop : " << endl;
  for (auto &y : v){
    //y = y + 1;
    cout << y << " ";
  }
  cout << endl;

  // for (auto y : x)
  //   cout << y << " ";
  // cout << endl;
}