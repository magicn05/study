#include <iostream>

using namespace std;

int main()
{
    cout << "num?:";
    int n(5);
    //cin >> n;
    //if(n<=0) return 0;
    int *p = new int [5]{1,2,3,4,5};
    if(!p){
        cout << "error";
        return 0;
    }


    // for (int i=0;i<n;i++)
    // {
    //     cout << i+1 << "번째 정수:";
    //     cin >> p[i];
    // }
    int sum =0;
    for (int i =0; i<n; i++)
    {
        sum = sum + p[i];
    }
    cout << "average" << sum/n << endl;
    delete [] p;
}