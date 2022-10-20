#include <iostream>

using namespace std;

int main()
{
    cout << "address : ";
    char address[100];
    cin.getline(address, 100, '\n');
    cout << "address : " << address << "입니다." << endl;
}