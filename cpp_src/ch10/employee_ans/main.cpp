#include <iostream>
#include <string>
#include <vector>
#include "employeeManager.h"
using namespace std;
int main()
{
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeManager manager;

  manager.addEmployee(new contWorker("Lee", 2000, 3000, 10));
  manager.addEmployee(new TempWorker("Charles", 1000, 3));
  //manager.addEmployee(new Employee("Banana", 200));
	// 이번 달에 지불해야 할 급여의 정보
	// manager.showAllSalary();	
	// // 이번 달에 지불해야 할 급여의 총합
	// manager.showTotalSalary();
  // manager.showEmployeeList();
  // manager.Search_opt1();
  //manager.Search_opt2();
	return 0;
}