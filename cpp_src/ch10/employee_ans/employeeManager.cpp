// Control(Handler) Class : 사원 객체의 처리 기능을 위한 클래스  
#include "employeeManager.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

EmployeeManager::EmployeeManager() { 
    //this->empNum = 0; 
}

void EmployeeManager::addEmployee(Employee* emp)
{
	empList.push_back(emp);
}

// void EmployeeManager::Search_opt1()
// {
//   vector<Employee*>::iterator it;
//   cout << "-----------------------" << endl;
//   for_each(empList.begin(), empList.end(), [](Employee* c){ 
//     if (c->getPay() > 500)
//       c->showName();
// }

// class orders_way{
//   public:
//   bool operator()(Employee* x, Employee* y){
//     if (x->showName() > y->showName())
//       return true;
//     else return false;
//   }
// };

// void EmployeeManager::showEmployeeList(){
//   vector<Employee*>::iterator it;
//   orders_way a;
//   sort(empList.begin(), empList.end(), a);
//   for(it=empList.begin(); it!=empList.end(); it++){ 
// 		cout << (*it)->showName() << endl;
//   }
// }





// void EmployeeManager::showAllSalary()
// { //iterator 사용
//   cout << setw(20) << "<정규직>" ;
//   cout << setw(30) << "<임시직>" ;
//   cout << setw(30) << "<영업직>" << endl;
//   vector<Employee*>::const_iterator it;
//   for(it=empList.begin(); it!=empList.end(); it++) //변경 필요
// 		(*it)->showSalary();
// }

// void EmployeeManager::showTotalSalary()
// { //emp num으로 되어있으면 iterator로 변경
// 	int sum=0;
// 	vector<Employee*>::const_iterator it;
//   for(it=empList.begin(); it!=empList.end(); it++)
// 		sum = sum + (*it)->getPay();
//   cout<<"salary sum: "<<sum<<endl;
// }

EmployeeManager::~EmployeeManager() { }