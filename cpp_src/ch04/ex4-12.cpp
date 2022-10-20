#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[5];
    for (int i=0; i<5 ; i++)
    {
        cout << "name : ";
        getline(cin, names[i], '\n');
    }
    
    
    
    
    string temp = names[0];
    for (int i=1; i<5; i++)
    {
        if (temp < names[i]){
            temp = names[i];
        }
    }
    cout << temp << endl;
}