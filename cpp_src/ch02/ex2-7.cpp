#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name;
    string last_name;
    cout << "Last name : ";
    cin >> last_name;
    cout << "First name : ";
    cin >> first_name;

    cout << "My name is " << first_name + " " + last_name << "." << endl;
}