#include <iostream>
#include "ex4-1.h"
using namespace std;

int main()
{
    Circle circleArray[3] =
     { Circle(10), Circle(20), Circle() };
 /*
    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);
*/
    for(int i=0; i<3; i++)
    {
        cout << circleArray[i].getArea() << endl;
    }

    return 0;
}