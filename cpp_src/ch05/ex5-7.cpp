#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("hello");

    cout << s.at(2) << endl;
    s.at(2) = 'L';
    cout << s[2] << endl;
}