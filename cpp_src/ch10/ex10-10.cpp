#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<string> v;
  string name;
  cout << "names " << endl;
  for (int i=0; i<5; i++){
    getline(cin, name);
    v.push_back(name);
  }
  string temp;
  temp = v.at(0);
  for (int j=0; j<v.size(); j++){
    if (temp < v.at(j))
      temp = v.at(j);
    
  }
  cout << temp << endl;

}