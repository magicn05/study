#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


int main()
{
  const char* srcFile = "dog.jpg";
  const char* destFile = "dog_copy.jpg";
  
  ifstream fsrc(srcFile, ios::in | ios::binary);
  if(!fsrc){
    cout << srcFile << "Open error" << endl;
  }

  ofstream fdest(destFile, ios::out | ios::binary);
  if(!fdest){
    cout << destFile << "open error" << endl;
  }

  int c;

  while((c=fsrc.get())!=EOF){
    fdest.put(c);


  }
  fsrc.close();
  fdest.close();
}