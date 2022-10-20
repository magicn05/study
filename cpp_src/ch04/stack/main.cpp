#include <iostream>
#include "stack.h"
using namespace std;

void showData(stack s)
{
    if (s.showTop() == -1)
        cout << "no" << endl;
    else
    {
        int data;
        for (int i = 0; i < s.showTop(); i++)
        {
            s.getData(i, data);
            cout << data << " ";
        }
        cout << endl;
    }
}

int main()
{
    stack s;
    

    for (int i = 0; i < 5; i++)
    {
        s.push(i);
    }

    s.push(123);
    s.push(456);

    cout <<"s ==> " ;
    showData(s);
    
    int data;
    stack s2 = s; //초기값으로는 설정가능.
    while( s.pop(data) )
    {
        cout << data << " ";
    }
    cout << "\n";
    
    showData(s2);
    while( s2.pop(data) )
    {
        cout << data << " ";
    }
    cout << "\n";
    //stack s2(s);
    //s2 = s; //연산자 함수로 구현해야함.

    return 0;
}