#include <fstream>
#include <iostream>
using namespace std;
int main() {
  const char *file = "/home/mobis/.bashrc";
  const char *file2 = "mybashrc";
  ifstream fin(file);
  ofstream fout(file2);
  if (!fin) {
    cout << file << "open error" << endl;
    return 0;
  }
  int count = 0;
  int c;
  while ((c = fin.get()) != EOF) {
    cout << (char)c;
    fout.put(char(c));
    count++;
  }

  cout << "읽은 바이트 수 " << count << endl;
  fin.close();
  fout.close();
}