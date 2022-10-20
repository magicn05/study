#include <iostream>

using namespace std;

int main()
{
    cout << "너비를 입력하세요 >>";
    int width, height;
    cin >> width;
    cout << "height ";
    cin >> height;
    int area = width * height;
    cout << "Area : "<< area << endl;
}