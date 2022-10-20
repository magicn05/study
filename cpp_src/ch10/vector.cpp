#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int a[] = {1,2,3,4,5};

  vector<int> v(a, a+5);
  for(int i =0; i<5; i++){
    cout << v[i] << endl;
  }
  v.push_back(6);
  v.push_back(7);
  v.push_back(8);
  v.push_back(9);
  v.push_back(10);
  for (int i=0; i<v.size(); i++)
  {
    cout << v[i] << endl;
  }
  vector<int>::iterator it;
  cout << v.front() << endl;
  cout << *v.begin() << endl;
  for(it=v.begin(); it!=v.end();it++){
    cout << *it << endl;
  }

}