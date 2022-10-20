#include <iostream>
#include <iomanip>
#include "tempworker.h"
#include "employee.h"


TempWorker::TempWorker(string name, int perday, int day):Employee(name)
{
    this->workDay = day;
    this->perday = perday;
}

int TempWorker::getPay( ) const {
    return perday*workDay; 
}

void TempWorker::showSalary() const{
    cout << "Name : " << name << endl; 
    cout << "Salary : " << getPay() << endl;
}