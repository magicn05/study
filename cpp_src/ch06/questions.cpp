#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int refn;
    refn = n;
    refn ++;
    int &m = refn;
}