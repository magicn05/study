#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "employeeManager.h"
using namespace std;
int main()
{
	EmployeeManager manager;
  ifstream fin("data.txt");
  string employee_Data;

  if (!fin)
    cout << "file open error" << endl;

  while(getline(fin, employee_Data)){
      manager.registerEmployee(employee_Data);
  }

  manager.showAllSalary();	
  manager.showTotalSalary();
  //manager.showEmployeeList();
  manager.showEmployeeList_3col();
  manager.Search_opt1();
  manager.Search_opt2();
	return 0;
}