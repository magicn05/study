#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
protected:
	string name;	
  string type;
public:
	Employee(string name, string type);
	string getName(); 
  string getType();
  virtual int getPay() = 0;
  virtual void showSalary() = 0;
};
#endif