#include "customer.h"
#include <iostream>
using namespace std;

//////////////////////////////////
N_customer::N_customer() { cout << "N_customer 생성자" << endl; }

N_customer::~N_customer() { cout << "Ncustomer 소멸자" << endl; }

/////////////////////////////////////////////
customer::customer() { 
  this->name = "test";
  this->phone_num = "111";
  cout << "customer 생성자" << endl; }

customer::~customer() {}

customer::customer(string name, string phone_num) {
  this->name = name;
  this->phone_num = phone_num;
}

void customer::showInfo() {
  cout << "고객이름 : " << this->name << endl;
  cout << "고객번호 : " << this->phone_num << endl;
}

////////////////////////////////////////////////////
L_customer::L_customer() { this->num = 0; }

L_customer::~L_customer() {}

void L_customer::showNum() { cout << "품목번호 : " << num << endl; }

int L_customer::getNum() { return num; }
