#include <iostream>
#include <iomanip>
#include <string>
#include "tempworker.h"
#include "employee.h"


TempWorker::TempWorker(string name, string type, int perday, int day):Employee(name, type)
{
    this->workDay = day;
    this->perday = perday;
}

int TempWorker::getPay( ) {
    return (perday*workDay); 
}

void TempWorker::showSalary(){
    cout << "Name : " << name << endl; 
    cout << "Salary : " << getPay() << endl;
}