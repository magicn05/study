#include <iostream>

using namespace std;

int big(int a, int b){
    if(a>b)
        return a;
    else   
        return b;
}

int big(int a[], int b){
    int res = a[0];
    for(int i=0; i<b; i++)
    {
        if (res < a[i])
            res = a[i];
    }
    return res;
}

double big(double a, double b){
    if (a>b)
        return a;
    else return b;
}



int main(){
    int array[5] = {1,9,-2,8,6};
    cout << big(2,3) << endl;
    cout << big(array, 5) << endl;
    cout << big(3.4, 5.9) << endl;
}