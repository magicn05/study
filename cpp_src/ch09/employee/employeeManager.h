// Control(Handler) Class : 사원 객체의 처리 기능을 위한 클래스  
#ifndef _EMPLOYEEMANAGER_H
#define _EMPLOYEEMANAGER_H

#include <iostream>
#include <string>
using namespace std;
//#include "employee.h"
#include "employeeManager.h"

class EmployeeManager
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeManager();
    ~EmployeeManager();
	void addEmployee(Employee* emp);
	void showAllSalary() const;
	void showTotalSalary() const;
};

class Perm_Employee : public Employee{
	private:

	int monthly_salary;
	public:
	int getPay() const{
		return monthly_salary;
	}
	void showSalary(){
		cout << this->monthly_salary << endl;
	}
	Perm_Employee(string name, int ms) : Employee(name)
	{
		this->monthly_salary = ms;
	}
	// Perm_Employee(string name) : Employee(name){
	// 	this->monthly_salary = 0;
	// }
	// Perm_Employee() : Employee(){
	// 	this->monthly_salary = 0;
	// }
	void modSalary(int ms){
		this->monthly_salary = ms;
		//setSalary(ms);
	}
	~Perm_Employee(){

	}
};

class Temp_Employee : public Employee{
	private:
	int daily_salary;
	int working_days;
	public:
	Temp_Employee(string name, int ds, int wd) : Employee(name){
		this->daily_salary = ds;
		this->working_days = wd;
		setClass("Temporary");
		int total = ds * wd;
		setSalary(total);
	}
	Temp_Employee(string name) : Employee(name){
		this->daily_salary = 0;
		this->working_days = 0;
	}
	Temp_Employee(string name, int ds) : Employee(name){
		this->daily_salary = ds;
		this->working_days = 0;
	}
	Temp_Employee() : Employee(){
		this->daily_salary = 0;
		this->working_days = 0;
	}
	void modSalary(int ds, int wd){
		this->daily_salary = ds;
		this->working_days = wd;
		setSalary(ds * wd);
	}
	~Temp_Employee(){

	}

};

class Cont_Employee : public Employee{
	private:
	int basic_salary;
	int sales_output;
	int bonus_rate;
	public:
	Cont_Employee(string name, int bs, int so, int br) : Employee(name){
		this->basic_salary = bs;
		this->sales_output = so;
		this->bonus_rate = br;
		setClass("Salesworker");
		setSalary(bs + (so / br));
	}
	Cont_Employee(string name) : Employee(name){
		this->basic_salary = 0;
		this->sales_output = 0;
		this->bonus_rate = 0;
	}
	Cont_Employee() : Employee(){
		this->basic_salary = 0;
		this->sales_output = 0;
		this->bonus_rate = 0;
	}
	void modSalary(int bs, int so, int br){
		this->basic_salary = bs;
		this->sales_output = so;
		this->bonus_rate = br;
		setSalary(bs+(so/br));
	}
	void showDetails(){
		//cout << "Name         : " << this->name << endl;
		cout << "Basic Salary : " << basic_salary << endl;
		cout << "Sales Output : " << sales_output << endl;
		cout << "Bonus Rate   : " << bonus_rate << endl;
	}
	~Cont_Employee()
	{

	}
};


#endif