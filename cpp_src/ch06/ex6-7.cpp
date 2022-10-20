#include <iostream>

using namespace std;

class Person{
    public:
    int money;
    void addMoney(int money){
        this->money += money;
    }
    static int sharedMoney;
    static void addShared(int n){
        sharedMoney += n;
    }
    
};

int Person::sharedMoney;

int main()
{
   // Person::sharedMoney = 100; //객체를 생성하기 전에도 접근 가능.
    
    Person han;
    han.money = 100;
    //han.sharedMoney = 200;
    han.addShared(200);

    Person lee;
    lee.money = 150;
    lee.addMoney(200);
    lee.addShared(200);

    cout <<han.money<< ' ' << lee.money << endl;
    cout << han.sharedMoney << ' ' << lee.sharedMoney<< endl;
}