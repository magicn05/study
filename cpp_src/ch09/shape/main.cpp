#include <iostream>
#include "shape.h"
#include "circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;

int main()
{
    Shape *pStart = NULL;
    Shape *pLast;

    pStart = new Circle;
    pLast = pStart;
    pLast = pLast->add(new Rect());
    pLast = pLast->add(new Circle());
    pLast = pLast->add(new Line());
    pLast = pLast->add(new Rect());
    
    Shape*p = pStart;
    while(p!=NULL)
    {
        p->paint();
        p = p->getNext();
    }

    p = pStart;
    while(p!=NULL)
    {
        Shape* q = p->getNext();
        delete p;
        p = q;
    }
}