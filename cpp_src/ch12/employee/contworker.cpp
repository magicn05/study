#include <iostream>
#include <string>
#include "contworker.h"

contWorker::contWorker(string name, string type, int basic_salary, int bonus, int incentive_rate):Employee(name, type){
  this->basic_salary = basic_salary;
  this->bonus = bonus;
  this->incentive_rate = incentive_rate;
}

int contWorker::getPay() {
  return (this->basic_salary + this->bonus / this->incentive_rate);
}

void contWorker::showSalary() {
  cout << "Name : " << name << endl; 
  cout << "Salary : " << getPay() << endl;
}