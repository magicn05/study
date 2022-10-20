#include <iostream>
#include "employee.h"
using namespace std;

int main()
{
    Temp_Employee emp1("kim", 1, 30);
    emp1.showSalary();
    emp1.modSalary(2,30);
    emp1.showSalary();

    Perm_Employee emp2("park", 45);
    emp2.showSalary();

    Cont_Employee emp3("lee", 25, 100, 10);
    emp3.showSalary();
    emp3.modSalary(35,100,5);
    emp3.showSalary();
    emp3.showDetails();
}