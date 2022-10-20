
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

void showWidth()
{
  cout.width(10);
  cout <<"Hello" << endl;
  cout.width(5);
  cout << 12 << endl;

}

int main()
{
  // showWidth();
  // cout.fill(' ');
  // showWidth();

  cout << showbase;
  cout << setw(15) << "decimal";
  cout << setw(15) << "octial";
  cout << setw(15) << "heximal" << endl;
  for (int i=0; i<50; i=i+5){
    cout <<setw(15) << setfill(' ') << dec << i;
    cout <<setw(15) << setfill(' ') << oct << i;
    cout <<setw(15) << setfill(' ') << hex << i << endl;
  }
}
