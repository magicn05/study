#include <iostream>
#include <stdlib.h>
#include "stack.h"
#include <cstring>
using namespace std;

stack::stack() //생성자
{
    size = 10;
    top = 0;
    pStack = new int[size];
}

stack::stack(const stack& c)
{
    this->size = c.size;
    this->top = c.top;
    this->pStack = new int[c.size];
    memcpy(this->pStack, c.pStack, sizeof(int)*c.size);
    //memcpy(this->pStack, c.pStack, sizeof(c.pStack));
}

stack::~stack()
{
    delete [] pStack;
    cout << "소멸자" << endl;
}



bool stack::push(int n)
{
    
    if (checkSize())
    {    
        
        pStack[top] = n;
        top = top + 1;
        return true;
    }
    else
    {
        setSize(n); // 증가하여 재할당.
        stack::push(n);
        return false;
    }
}

bool stack::pop(int& n)
{
    if (top != 0)
    {
        n = pStack[top-1];
        top = top - 1;
        return true;
    }
    else if (top == 0)
    {
        cout << "No-data" << endl;
        return false;
    }
    return true;
}

bool stack::checkSize()
{
    if (size > top)
        return true;
    else if (top == size)
        return false;
    return true;
}

void stack::setSize(int n)
{
    
    int *temp_pStack = new int[size];
    size = size + 10;
    temp_pStack = pStack;
    delete [] pStack;
    pStack = new int[size];
    for (int i=0; i<size-10; i++)
    {
        pStack[i] = temp_pStack[i];
    } 
    delete []temp_pStack;

}

int stack::showTop()
{
    return top;
}

void stack::getData(int idx, int& data)
{
    data = pStack[idx];
}

