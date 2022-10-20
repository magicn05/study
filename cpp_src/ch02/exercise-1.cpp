#include <iostream>

using namespace std;

int main()
{
    cout << "Input values : ";
    int arr[10];
    int sum = 0;
    for (int i =0; i<10; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Sum : " << sum << endl;
    cout << "Avg : " << double(sum) / 10 << endl;
}