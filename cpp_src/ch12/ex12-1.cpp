#include <fstream>
#include <iostream>

using namespace std;

int main() {
  char name[10], dept[20];
  int sid;

  cout << "Name : ";
  cin >> name;

  cout << "학번(숫자로)>>";
  cin >> sid;

  cout << "학과";
  cin >> dept;

  ofstream fout("c:\\temp\\student.txt");
  if (!fout) {
    cout << "c:\\temp\\student.txt 파일을 열수 없습니다.";
    return 0;
  }

  fout << name << endl;
  fout << sid << endl;
  fout << dept << endl;

  fout.close();
}
