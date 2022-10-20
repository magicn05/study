#include <iostream>
#include <string>
using namespace std;

class CustomerManager {
private:
  customer *cusList[50];
  L_customer *L_cusList[50];
  int cusNum;
  int L_cusNum;

public:
  CustomerManager();
  ~CustomerManager();
  bool checkCustomer(string name, string num);
  void addCustomer(customer *emp);
  void addCustomer(L_customer *emp);
  void showAllCustomer();
  void showAllProduct() const;
  void sendAdsProduct(int num4, int num5);
};

// bool checkCustomer(string name, string num)
// {
//     for (int i = 0; i < cusNum; i++)
//     {
//         cusList[i]->showInfo();
        
//     }
//     for (int i = 0; i < L_cusNum; i++)
//     {
//         L_cusList[i]->showInfo();
//         L_cusList[i]->showNum();
//     }
// }

CustomerManager::CustomerManager()
{
    this->cusNum = 0;
    this->L_cusNum = 0;
}

void CustomerManager::addCustomer(customer *emp)
{
    cusList[cusNum++] = emp;
}

// void CustomerManager::addCustomer(L_customer *emp)
// {
//     L_cusList[L_cusNum++] = emp;
// }

void CustomerManager::showAllProduct() const
{
    cout << "새우깡    오레오   포테이토칩  쫄병스낵  홈런볼  오뜨  엄마손파이   초코파이 빅파이    양파링" << endl;

    // for(int i=0; i<empNum; i++)
    // 	empList[i]->showSalary();
}
CustomerManager::~CustomerManager()
{
    for (int i = 0; i < cusNum; i++)
    {
        delete cusList[i];
    }
    for (int i = 0; i < L_cusNum; i++)
    {
        delete L_cusList[i];
    }
}

void CustomerManager::showAllCustomer()
{
    for (int i = 0; i < cusNum; i++)
    {
        cusList[i]->showInfo();
        cout << "==========================" << endl;
    }
    for (int i = 0; i < L_cusNum; i++)
    {
        L_cusList[i]->showInfo();
        L_cusList[i]->showNum();
    }
}

void CustomerManager::sendAdsProduct(int num4, int num5)
{
    int num_temp;
    for (int i = 0; i < L_cusNum; i++)
    {
        num_temp = L_cusList[i]->getNum();
        if (num_temp == num4)
        {
            L_cusList[i]->showInfo();
            L_cusList[i]->showNum();
        }
    }
}


class customer {
protected:
  string name;
  string phone_num;

public:
  customer();
  customer(string name, string phone_num);
  ~customer();
  void showInfo();
};

class N_customer : public customer {
protected:
public:
  N_customer();
  ~N_customer();
};

class L_customer : public customer {
protected:
  int num;
  int item_list[50];
  int item_list_counter = 0;

public:
  L_customer();
  // L_customer(string name, string phone_num, int num) : customer(name,
  // phone_num)
  // {
  //     this->num = num;
  // }
  ~L_customer();
  void showNum();
  int getNum();
};

//////////////////////////////////
N_customer::N_customer() { cout << "N_customer 생성자" << endl; }

N_customer::~N_customer() { cout << "Ncustomer 소멸자" << endl; }

/////////////////////////////////////////////
customer::customer() {
  this->name = "test";
  this->phone_num = "111";
  cout << "customer 생성자" << endl;
}

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
