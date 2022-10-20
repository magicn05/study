#include <iostream>
#include <string>
#include "permworker.h"

permWorker::permWorker(string name, string type, int monthly_salary):Employee(name, type){
  this->monthly_salary = monthly_salary;
}

int permWorker::getPay() {
  return monthly_salary;
}

void permWorker::showSalary() {
  cout << "Name : " << name << endl; 
  cout << "Salary : " << getPay() << endl;
}