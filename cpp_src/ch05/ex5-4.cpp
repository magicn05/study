#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}



int main()
{
    int m = 2, n = 9;
    swap(m,n);
    cout << m << ' ' << n << endl;
}









// int main(){
//     int num = 10, num2 = 20;
//     int& rnum = num;

//     cout << "rnum : " << rnum << endl;
//     cout << "num : " << num << endl;
//     cout << "&rnum : " << &rnum << endl;
//     cout << "&num : " << &num << endl;

//     cout << endl;

//     rnum = num2;

//     cout << "&rnum : " << &rnum << endl;
//     cout << "&num : " << &num << endl;
//     cout << "&num2 : " << &num2 << endl;
//     cout << endl;
//     cout << "rnum : " << rnum << endl;
//     cout << "num : " << num << endl;
//     cout << "num2 : " << num2 << endl;

//     rnum = 30;

//     cout << "&rnum : " << &rnum << endl;
//     cout << "&num : " << &num << endl;
//     cout << "&num2 : " << &num2 << endl;
//     cout << endl;
//     cout << "rnum : " << rnum << endl;
//     cout << "num : " << num << endl;
//     cout << "num2 : " << num2 << endl;
// }