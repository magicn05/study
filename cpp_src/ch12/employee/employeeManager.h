// Control(Handler) Class : 사원 객체의 처리 기능을 위한 클래스  
#ifndef _EMPLOYEEMANAGER_H
#define _EMPLOYEEMANAGER_H

#include "employee.h"
#include "tempworker.h"
#include "contworker.h"
#include "permworker.h"
#include <vector>
#include <memory>
using namespace std;

class EmployeeManager
{
private:
  vector<shared_ptr<Employee*>> empList;
   
public:
	EmployeeManager();
  ~EmployeeManager();
  void registerEmployee(string employee_Data);
	void addEmployee(shared_ptr<Employee*> emp);
	void showAllSalary();
	// void showTotalSalary();
  // void showEmployeeList(); //alphabetical order
  // void showEmployeeList_3col(); //alphabetical order
  // void Search_opt1(); // 일정한 월급 이상인 사람 검색하기
  // void Search_opt2(); //

};

#endif