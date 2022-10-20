// Control(Handler) Class : 사원 객체의 처리 기능을 위한 클래스  
#include "employeeManager.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <memory>

#include "tempworker.h"
#include "contworker.h"
#include "permworker.h"

EmployeeManager::EmployeeManager() { 
    //this->empNum = 0; 
}

void EmployeeManager::addEmployee(shared_ptr<Employee> emp)
{
	empList.push_back(emp);
}

// void EmployeeManager::Search_opt1()
// {
//   int p;
//   cout << "월급 기준 검색 (x원 이상인 사람)" << endl;
//   cout << "입력하세요>>";
//   cin >> p;
  
//   vector<shared_ptr<Employee*>>::iterator it;
//   cout << "-----------------------" << endl;
//   for_each(empList.begin(), empList.end(), [p](shared_ptr<Employee*> c)
//     {if ((*c)->getPay() > p) cout << (*c)->getName() << endl;});
// }

// void EmployeeManager::Search_opt2()
// {
//   string p;
//   cout << "임직원 검색" << endl;
//   cout << "입력하세요>>";
//   cin >> p;
  
//   vector<shared_ptr<Employee*>>::iterator it;
//   cout << "-----------------------" << endl;
//   for_each(empList.begin(), empList.end(), [p](shared_ptr<Employee*> c)
//     {if ((*c)->getName() == p) 
//       cout << "검색하신 직원이 있습니다." << endl;
//       else {
//         cout << "no data" << endl;
//         return;
//       }
// });
// }

// class orders_way{
//   public:
//   bool operator()(shared_ptr<Employee*> x, shared_ptr<Employee*> y){
//     if ((*x)->getName() < (*y)->getName())
//       return true;
//     else return false;
//   }
// };

// void EmployeeManager::showEmployeeList(){
//   vector<shared_ptr<Employee*>>::iterator it;
//   orders_way a;
//   sort(empList.begin(), empList.end(), a);
//   for((*it)=empList.begin(); (*it)!=empList.end(); it++){ 
// 		cout << (*it)->getName() << endl;
//   }
// }

void EmployeeManager::showAllSalary()
{ //iterator 사용
  vector<shared_ptr<Employee*>>::const_iterator it;
  for(it=empList.begin(); it!=empList.end(); it++){ //변경 필요
		(*it)->showSalary();
    cout << endl;
  }
}

// void EmployeeManager::showTotalSalary()
// { //emp num으로 되어있으면 iterator로 변경
// 	int sum=0;
// 	vector<shared_ptr<Employee*>>::const_iterator it;
//   for(it=empList.begin(); it!=empList.end(); it++)
// 		sum = sum + (*it)->getPay();
//   cout<<"Salary sum : "<<sum<<endl;
// }

// void EmployeeManager::showEmployeeList_3col() { // emp num으로 되어있으면
//                                                 // iterator로 변경
//   cout << setw(20) << "<계약직>";
//   cout << setw(30) << "<정규직>";
//   cout << setw(30) << "<임시직>" << endl;
//   vector<string> v_cont;
//   vector<string> v_perm;
//   vector<string> v_temp;

//  vector<shared_ptr<Employee*>>::const_iterator it;

//   for (it = empList.begin(); it != empList.end(); it++) {
//     if (((*it)->getType()) == "cont")
//       v_cont.push_back((*it)->getName());
//     else if  (((*it)->getType()) == "perm")
//       v_perm.push_back((*it)->getName());
//     else if  (((*it)->getType()) == "temp")
//       v_temp.push_back((*it)->getName());
//     }
//   vector<string>::iterator it1, it2, it3;
//     it1 = v_cont.begin();
//     it2 = v_perm.begin();
//     it3 = v_temp.begin();
//     // cout << v_cont.size() << endl;
//     // cout << v_perm.size() << endl;
//     // cout << v_temp.size() << endl;
    
//   while(true)
//   {
//     if (it1 != v_cont.end())
//       {cout << setw(20) << *it1;
//       it1 ++;}
//     else 
//       cout << setw(20) << "";

//     if (it2 != v_perm.end())
//       {cout << setw(30) << *it2;
//         it2++;
//       }
//     else 
//       cout << setw(30) << "";

//     if (it3 != v_temp.end())
//       {cout << setw(30) << *it3;
//       it3++;
//       }
//     else 
//       cout << setw(30) << "";
    
//     if (it1 == v_cont.end() && it2 == v_perm.end() && it3 == v_temp.end())
//       break;
    
//     cout << endl;
//   }
//   cout << endl;
// }

EmployeeManager::~EmployeeManager() { }


void EmployeeManager::registerEmployee(string employee_Data) {
  
  int cur_pos, position, money, a, b;
  string name, type;
  string info;

  //특정사원급여 : 사람 없는 경우 예외처리.
  vector<string> basic_info;

  for (int i=0; i<2; i++){    
    position = employee_Data.find(" ", cur_pos); // cur_pos
    info = employee_Data.substr(0, position);
    employee_Data = employee_Data.substr(position + 1);
    basic_info.push_back(info);
 }

  if (basic_info[1] == "perm") {
    try {
      position = employee_Data.find(" ", cur_pos); // cur_pos
      money = stoi(employee_Data.substr(0, position));
      if (money < 2000000)
        throw money;
      else
        //unique_ptr<permWorker> ptr = new permWork(basic_info[0], basic_info[1], money);
        //make_unique<permWorker>(basic_info[0], basic_info[1], money);
        shared_ptr<Employee> ptr = make_shared<permWorker>(basic_info[0], basic_info[1], money);
        //shared_ptr<Employee> ptr = ;
        EmployeeManager::addEmployee(ptr);
        
    } catch (int mt) {
      cout << "예외발생 : 최저월급미달!" << endl;
      cout << "월급은 자동으로 2,000,000원으로 지정 됩니다." << endl << endl;
      money = 2000000;
      EmployeeManager::addEmployee(new permWorker(basic_info[0], basic_info[1], money));
    }
  }

  else if (basic_info[1] == "temp") {
    try {
      position = employee_Data.find(" ", cur_pos); // cur_pos
      money = stoi(employee_Data.substr(0, position));
      if (money < 80000)
        throw money;
    } catch (int mt) {
      cout << "예외발생 : 최저시급미달!" << endl;
      cout << "시급은 자동으로 80,000원으로 지정 됩니다." << endl << endl;
      money = 80000;
    }

    try {
      employee_Data = employee_Data.substr(position + 1);
      position = employee_Data.find(" ", cur_pos);
      a = stoi(employee_Data.substr(0, position));
      if (a < 20)
        throw a;
    } catch (int at) {
      cout << "예외발생 : 최소근무일수미달!" << endl;
      cout << "최소 근무일수는 20일로 자동지정 됩니다." << endl << endl;
      a = 20;
    }
    EmployeeManager::addEmployee(new TempWorker(basic_info[0], basic_info[1], money, a));
  }

  else if (basic_info[1] == "cont") {
    position = employee_Data.find(" ", cur_pos);
    money = stoi(employee_Data.substr(0, position));
    employee_Data = employee_Data.substr(position + 1);
    position = employee_Data.find(" ", cur_pos);
    a = stoi(employee_Data.substr(0, position));
    employee_Data = employee_Data.substr(position + 1);
    position = employee_Data.find(" ", cur_pos);
    b = stoi(employee_Data.substr(0, position));
    EmployeeManager::addEmployee(new contWorker(basic_info[0], basic_info[1], money, a, b));
  
  }
}