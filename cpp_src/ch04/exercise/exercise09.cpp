#include <iostream>
#include <string>
using namespace std;
class Person
{
    string name;
    string tel;
public:
    Person();
    string getName() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel);
};
Person::Person()
{
    //cout <<"생성자" << endl;
}
void Person::set(string name, string tel){
    this->name = name;
    this->tel = tel;
}
int main()
{
    Person p[3];
    string name;
    string tel;
    cout << "이름과 전화 번호를 입력해 주세요" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "사람" << i+1 << ">>";
        cin >> name >> tel;
        p[i].set(name, tel);
        cout << endl;
    }
    cout << "모든 사람의 이름은 ";
    for (int i = 0; i < 3; i++)
    {
        cout << p[i].getName() << " ";
    }
    cout << endl;
    cout << "전화번호를 검색합니다. 이름을 입력하세요>>";
    cin >> name;
    int idx;
    for (int i = 0; i < 3; i++)
    {
        if (p[i].getName() == name)
            idx = i;
    }
    cout << "전화번호는 " << p[idx].getTel() << endl;
}