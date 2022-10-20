#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Customer {
  string name;
  int id;
public:

  Customer(string name, int i) {
    this->name = name;
    this->id = i;
  }
  int getId(){
    return id;
  }
  string getName(){
    return name;
  }

};

class myclass {
public:
  bool operator()(Customer &x, Customer &y) {
     return (x.getId() < y.getId()); }
};

class Isname{
  string name;
  public:
    Isname(string name){
      this->name = name;
    }
    bool operator()(Customer &x){
      if (x.getName()==this->name)
        return true;
      else return false;
    }
    string getName(){
      return this->name;
    }
};

int main() {
  vector<Customer> v;
  string name;
  
  bool b;
  auto res = [&b](Customer &x, Customer &y){
    if (x.getId()>y.getId())
      return true;
      else return false;
  };
  
  int id;
  while (1) {
    cout << "name : ";
    cin >> name;
    if (name == "end") break;
    cout << "id : ";
    cin >> id;
    v.push_back(Customer(name,id));
  }
  myclass a;
  sort(v.begin(), v.end(), res);
  //vector<Customer>::iterator it;
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << (*it).getName() << "\t" << (*it).getId() << endl;
  }
  cout << endl;
  cout << "search name : ";
  string name_search;
  cin >> name_search;
  Isname base(name_search);
  
  auto res_find = [name_search](Customer &x){
    if (x.getName() == name_search)
      return true;
    else false;
  };

  //it = find_if(v.begin(), v.end(),Isname_function);
  //auto it = find_if(v.begin(), v.end(),res_find);
  auto it = find_if(v.begin(), v.end(),[name_search] (Customer C){return C.getName() == name_search;});
  cout << (*it).getId() << endl;
}