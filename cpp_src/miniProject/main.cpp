#include <iostream>
#include <vector>
#include <string>
#include "car.h"
#include "customer.h"
using namespace std;

int main()
{
  Customer kim("kim","010-1111-1111", "dkim", "1234", 0,"seoul");
  // cout << kim.getName() << endl;
  // cout << kim.getPhone() << endl;
  // cout << kim.getAddress() << endl;
  // cout << kim.getId() << endl;
  if(kim.checkAdmin()==true){
    cout << "admin" << endl;
  }
  else
    cout << "ps" << endl;
  
  //Car car1("kia","h","k5","red","sedan",5000);

  kim.addBuyingList(1234);
  kim.addBuyingList(5234);
  kim.addBuyingList(7234);
  kim.addBuyingList(3234);
  //totalManager a;
  string input_id;
  string input_pin;

  //cout << "ID Input" << endl;
  //cout << "Pin Input" << endl;
  input_id = "bushel";
  input_pin = "12345678";
  
  Customer login("","","","",0,""); 
  
  bool a = login.correct_psswd(input_id, input_pin);
  cout << a << endl;
  
}