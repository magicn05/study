#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class myclass{
  public:
  bool operator() (int i, int j){
    return (i>j);
  }
};

int main() {
  vector<int> v;
  vector<int> v2;
  cout << "5개의 정수를 입력하세요" << endl;
  for (int i = 0; i < 5; i++) {
    int n;
    cin >> n;
    v.push_back(n);
  }
  v2 = v;
  myclass a;
  sort(v.begin(), v.end(), a);

  vector<int>::iterator it;
  for(it=v.begin(); it!=v.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
  //vector<int>::iterator it;
  for(it=v2.begin(); it!=v2.end(); it++){
    cout << *it << " ";
  }
}