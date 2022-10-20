#include <iostream>

using namespace std;

int Getmin(int a, int b){
    if (a>b)
        return b;
    else   
        return a;
}

double Getmin(double a, double b){
    if (a>b)
        return b;
    else   
        return a;
}

string Getmin(string a, string b)
{
    if (a>b)
        return b;
    else
        return a;
}

int Getmin(int arr[], int a){
    int tmp = arr[0];
    for (int i = 1; i < a; i++)
    {
        if (tmp > arr[i])
            tmp = arr[i];
    }
    return tmp;
}

int main(){
    int a,b;
    cout << "두개의 정수를 입력하세요 : ";
    cin >> a >> b;
    cout << "최소값은 " << Getmin(a,b) << "입니다.\n";

    double c,d;
    cout << "두개의 실수를 입력하세요 : ";
    cin >> c >> d;
    cout << "최소값은 " << Getmin(c,d) << "입니다.\n";

    char s1[20], s2[20];
    cout << "두개의 문자열을 입력하세요 : ";
    cin >> s1 >> s2;
    cout << "최소값은 " << Getmin(s1,s2) << "입니다.\n";

    int arr[] = {2,19, 34, 387, 1, 45, 78, 45, 11, 29};
    cout << "배열의 원소 : ";
    for (int i =0; i<10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n최소값은 " << Getmin(arr,10) << "입니다.\n";
}