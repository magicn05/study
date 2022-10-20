#include "employee.h"

// 사원 객체의 속성 및 제어를 위한 클래스
Employee::Employee(){
	this->name = "Nobody";
	this->salary = 0;
}

Employee::Employee(string name)
{
	this->name = name;
	this->salary = 0;
}

Employee::Employee(string name, int money)
{
    this->name = name;
    this->salary = money;
}

int Employee::getPay() const
{
	return salary;
}

void Employee::showSalary() const
{
	cout<<"name: "<< name <<endl;
	cout<<"classification: "<< classf <<endl;
	cout<<"salary: "<< getPay() <<endl<<endl;
}

void Employee::setSalary(int salary){
	this->salary = salary;
}