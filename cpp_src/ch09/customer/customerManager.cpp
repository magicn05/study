#include <iostream>
#include "customerManager.h"
using namespace std;

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