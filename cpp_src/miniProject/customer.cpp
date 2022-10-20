
#include "customer.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Customer::Customer(string name = "", string phone_number = "", string id = "",
                   string psswd = "", int admin = 0, string address = "") {
  this->name = name;
  this->phone_number = phone_number;
  this->id = id;
  this->psswd = psswd;
  this->admin = admin;
  this->address = address;
  car_count = 0;
}

Customer::~Customer() {}
string Customer::getPhone() { return this->phone_number; }
string Customer::getName() { return this->name; }
string Customer::getId() { return this->id; }
string Customer::getAddress() { return this->address; }

bool Customer::checkAdmin() {
  if (this->admin == 0) //일반유저
    return false;
  else
    return true;
}

bool Customer::correct_psswd(string id, string psswd) {
  char data[1024]; //한번에 읽어들이는 데이터
  string id_log;
  string pin_log;
  int id_flag;
  ifstream fin("customer.log");
  if (!fin) {
    cout << "Customer data 파일을 열수 없습니다." << endl;
    return false;
  }
  int cur_pos = 0, position;
  // id 검색 ,  
  string temp;
  
  fin.getline(data, 1024);
  
  cout << "temp : " << temp << endl;
  while (!fin) {  
    temp = data;
    cout << temp << endl;
    for (int i = 0; i < 2; i++) {
      position = temp.find(",", 0); // cur_pos(0) 부터 찾는다. 4
      // cur_pos = position + 1;
      temp = temp.substr(position + 1); //position +1 부터 끝까지를 저장.
    }
    
    position = temp.find(",", cur_pos); // cur_pos 부터 찾는다. 4
    temp = temp.substr(0, position); // temp 는 id가 됨.
    cout << "name :  " << temp << endl;
    if (temp == id)
      {
        id_flag = 1;
        cout << temp << endl;
        break;
      }
    else 
      fin.getline(data, 1024);
  }
  //id검색 후 id 없으면 오류 id검색 후 있으면 있으면 password 와 비교.
  cout << "after temp : " << temp << endl;
  //     if (this->psswd == psswd) //일반유저
  //     return true;
  // else return false;
  return false;
}

void Customer::addBuyingList(int carId) {
  this->buying_list.push_back(carId);
  car_count++;
}

void Customer::addCart(int carId) { this->cart.push_back(carId); }

int Customer::getCarCount() { return car_count; }
