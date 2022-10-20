#include <iostream>
#include "ex4-1.h"
using namespace std;

int main()
{
    int *p = new int;
    * p = 10;
    cout << p << endl;
    cout << *p << endl;

    Circle *pCircle = new Circle(10);
    cout << pCircle->getArea() << endl;
    cout << (*pCircle).getArea() << endl; // ok
    //cout << *pCircle.getArea() << endl; // ng

    Circle *pCircle_arr = new Circle[3];
    pCircle_arr[0].setRadius(10);
    pCircle_arr[0].setRadius(20);
    pCircle_arr[0].setRadius(30);

    for (int i=0; i<3; i++)
    {
        cout << pCircle_arr[i].getArea() << endl;
        cout << (pCircle_arr+i)->getArea() << endl;
        cout << (*(pCircle_arr+i)).getArea() << endl;
        //cout << *(pCircle_arr+i).getArea() << endl; . 보다 * 이 더 쎔
    }

    

    delete p;
    delete pCircle;
    delete [] pCircle_arr;
}