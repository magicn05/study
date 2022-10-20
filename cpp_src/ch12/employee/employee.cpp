#include <iostream>
#include "employee.h"
#include <iomanip>
#include <string>

Employee::Employee(string name, string type)
{
    this->name = name;
    this->type = type;
}

string Employee::getName(){
  return this->name;
}

string Employee::getType(){
  return this->type;
}
