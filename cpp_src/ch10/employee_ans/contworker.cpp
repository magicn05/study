#include <iostream>
#include "contworker.h"

contWorker::contWorker(string name, int basic_salary, int bonus, int incentive_rate):Employee(name){
  this->basic_salary = basic_salary;
  this->bonus = bonus;
  this->incentive_rate = incentive_rate;
}

int contWorker::getPay() const{
  return (this->basic_salary + this->bonus * this->incentive_rate)
}

void contWorker::showSalary() const{
  cout << "Name : " << name << endl; 
  cout << "Salary : " << getPay() << endl;
}