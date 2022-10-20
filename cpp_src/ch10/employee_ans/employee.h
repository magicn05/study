#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
using namespace std;

class Employee
{
protected:
	string name;	
public:
	Employee(string name);
	string getName() const; 
  virtual int getPay() = 0;
    // return salary;
  virtual void showSalary() = 0;
    //cout << "Name : " << name << endl; 
    //cout << "Salary : " << getPay() << endl;
};
#endif