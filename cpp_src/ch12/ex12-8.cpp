#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


int main()
{
  const char* srcFile = "dog.jpg";
  const char* destFile = "dog_copy.jpg";
  
  ifstream fin;
  fin.open(srcFile, ios::in | ios::binary);
  if(!fin){
    cout << srcFile << "Open error" << endl;
  }

  int count=0;
  char s[32];
  int c;

  while(!fin.eof()){
    fin.read(s,32);
    int n = fin.gcount();
    cout.write(s,n);
    count = count + n;

  }
  cout << endl;
  cout << " 읽은 바이트수는 " << count << endl;
  fin.close();
}