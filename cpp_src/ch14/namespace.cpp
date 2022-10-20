#include <iostream>
using namespace std;

#include "ui.h"
#include "cm.h"

// int data = 10;

// void Func(){
//   cout << "global func" << endl;
// }


int main()
{
using UI::count;
using namespace CM;
data = 40;

UI::showMenu();
CM::recvData();
cout << UI::count << endl;

cout << "data= " << CM::data << "\n";
cout << "data= " << UI::data << "\n";
cout << "data= " << data << "\n";

//cout << "data= " << ::data << endl;
//::Func();
}