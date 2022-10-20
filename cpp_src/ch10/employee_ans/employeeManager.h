// Control(Handler) Class : 사원 객체의 처리 기능을 위한 클래스  
#ifndef _EMPLOYEEMANAGER_H
#define _EMPLOYEEMANAGER_H

#include "employee.h"
#include "tempworker.h"
#include "contworker.h"
using namespace std;

class EmployeeManager
{
private:
  vector<Employee*> empList;
public:
	EmployeeManager();
  ~EmployeeManager();
	void addEmployee(Employee* emp);
	//void showAllSalary();
	//void showTotalSalary();
  //void showEmployeeList();
  //void Search_opt1();
  //void Search_opt2();
};

#endif