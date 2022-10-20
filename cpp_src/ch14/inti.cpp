#include <iostream>
#include <vector>
using namespace std;

struct S{
  string name;
  float num;
  S(string s, float f) : name(s), num(f) {}
};

int main()
{
  vector<S> v {
    {"Norah", 2.7}, {"Frank", 3.5}, {"Jeri", 82.7}
  };
  // S s1("Norah", 2.7);
  // S s2("Frank", 3.5);
  // S s3("Jeri", 85.9);
  for(string name : v.name){
    cout << name << " ";
  }
  // v.push_back(s1);
  // v.push_back(s2);
  // v.push_back(s3);

  
  
}