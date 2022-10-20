#include <iostream>
#include "employee.h"
#include <iomanip>

Employee::Employee(string name)
{
    this->name = name;
}

string Employee::getName() const{
  return this->name;
}

