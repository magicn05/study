#ifndef _TOTALMANAGER_H
#define _TOTALMANAGER_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "stockmanagecar.h" 
//#include "human.h"
#include "customer.h"
using namespace std;

class totalManager {
	vector<stockManageCar> carlist;
	vector<Customer> customerData;
public:
	void loadCar();
	void loadHuman(string input_id, string input_pin);
	void join();
	void addCarList();
	void saveCar();
	void saveHuman();
};

void totalManager::loadCar(){

}
void totalManager::loadHuman(string input_id, string input_pin){
  //id를 넘겨받아서 검색, 후 관련 정보 불러오기.
  char buf[1024];
  string id_log;
  ifstream fin("customer.log");
  if (!fin) {
    cout << "Customer data 파일을 열수 없습니다." << endl;
    return;
  }

  while (fin.getline(buf, 1024)) {
    cout << buf << endl;
    if (id_login == id_data){
      
    }
  } 

}
void totalManager::saveCar(){


}
void totalManager::saveHuman(){

}

void totalManager::join(){
	string name, phone_number,id,passwd,address;
	int admin(0);

	cout << "name : " ;
	getline(cin, name,'\n');

	cout << "Phone number : ";
	getline(cin, phone_number,'\n');

	cout << "ID : ";
	getline(cin, id ,'\n'); //id 입력 후 동일 한 것이 있으면 실패 후 재 설정 함수 필요 
	
	cout << "passwd : ";
	getline(cin,passwd,'\n'); //passwd ** 로 입력....
	
	cout << "address : ";
	getline(cin, address,'\n');

	Customer customer(name, phone_number,id,passwd, address, admin);

	customerData.push_back(customer);

}
void totalManager::addCarList(){
	string brand , engine, carName, color,type;
	int price,quantity;

	cout << "Brand(kia/hyundai/sm) : " ;
	getline(cin, brand,'\n');
	
	cout << "engine : " ;
	getline(cin,engine ,'\n');
	
	cout << "Carname : " ;
	getline(cin, carName,'\n');
	
	cout << "color : " ;
	getline(cin, color,'\n');
	
	cout << "Type: " ;
	getline(cin, type,'\n');
	
	cout << "Price : " ;
	cin >> price ;
	cout << "Qunatity : " ;
	cin >> quantity ;
	stockManageCar add_car(brand,engine,carName,color,type,price,quantity);
	carlist.push_back(add_car);
}



#endif
