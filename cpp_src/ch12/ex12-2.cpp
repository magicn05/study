#include <fstream>
#include <iostream>

using namespace std;

int main() {
  char name[10], dept[20];
  int sid;

  // cout << "Name : ";
  // cin >> name;

  // cout << "학번(숫자로)>>";
  // cin >> sid;

  // cout << "학과";
  // cin >> dept;

  ifstream fin("c:\\temp\\student.txt");
  if (!fin) {
    cout << "c:\\temp\\student.txt 파일을 열수 없습니다.";
    return 0;
  }

  fin >> name;
  fin >> sid;
  fin >> dept;
  fin.close();

  cout << name << endl;
  cout << sid << endl;
cout << dept << endl;
}
