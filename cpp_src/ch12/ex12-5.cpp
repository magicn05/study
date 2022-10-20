#include <fstream>
#include <iostream>
using namespace std;
int main() {
  const char *file = "/home/mobis/.bashrc";
  const char *file2 = "mybashrc";
  char buf[81];
  ifstream fin(file);
  ofstream fout(file2);
  if (!fin) {
    cout << file << "open error" << endl;
    return 0;
  }
  int count = 0;
  int c;
  while (fin.getline(buf, 81)) {
    cout << buf << endl;
  }
  fin.close();
}