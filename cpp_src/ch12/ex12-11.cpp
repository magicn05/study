#include <iostream>
#include <fstream>

using namespace std;

void showStreamStatus(ios& stream){
  cout << "eof()" << stream.eof() << endl;
  cout << "fail()" << stream.fail() << endl;
  cout << "bad()" << stream.bad() << endl;
  cout << "good()" << stream.good() << endl;
}

int main()
{
  const char* noExistFile = "noexist.txt";
  const char* ExistFile = "words.txt";

  ifstream fin(noExistFile);
  if(!fin){
    cout << noExistFile << "open error" << endl;
    showStreamStatus(fin);

    cout << ExistFile << "open file" << endl;
    fin.open(ExistFile);
    showStreamStatus(fin);
  }

  int c;
  while((c=fin.get()) != EOF)
    cout.put((char)c);
  cout << endl;
  showStreamStatus(fin);
  fin.close();

}