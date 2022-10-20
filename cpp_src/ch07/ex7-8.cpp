#include <iostream>

using namespace std;

class Power{
    int kick;
    int punch;
    public:
    Power(int kick=0, int punch =0){
        this->kick = kick;
        this->punch = punch;
    }
    Power operator+(int a);
    bool operator==(Power p2);
    
    Power& operator+=(Power p2);
    void show();

    Power& operator++();
    Power operator++(int x);
    friend Power operator+(int op1, Power op2);
    friend ostream& operator<< (ostream& os, const Power& p);
    friend ostream& operator<< (ostream& os, const string& p);
    Power operator<<(int n);
};

Power Power::operator<<(int n)
{
    kick = kick + n;
    punch = punch + n;
    return *this;
}

ostream& operator<< (ostream& os, const string& p){
    os << " +++ ";
    return os;
};


ostream& operator<< (ostream& os, const Power& p){
    os << p.kick << " +++ " <<p.punch;
    return os;
};

Power operator+(int op1, Power op2){
    Power tmp;
    tmp.kick = op1 + op2.kick;
    tmp.punch = op1 + op2.punch;
    return tmp;
}

Power Power::operator++(int x)
{
    Power tmp = *this;
    kick++;
    punch++;
    return tmp;
}

Power& Power::operator++(){
    this->kick = this->kick + 1;
    this->punch = this->punch + 1;
    return *this;
}

void Power::show()
{
    cout << this->kick << " " << this->punch << endl;
}

Power Power::operator+ (int a){
    Power tmp;
    tmp.kick = this->kick + a;
    tmp.punch = this->punch + a;
    return tmp;
}

bool Power::operator==(Power p2){
    if (kick == p2.kick && punch == p2.punch)
        return true;
    else return false;
}

Power& Power::operator+=(Power p2){
    this->kick = this->kick + p2.kick;
    this->punch = this->punch + p2.punch;
    return *this;
}


int main()
{
    Power p1(3,5);
    p1 << 3 << 5 << 6;
    p1.show();

    // ++p1;
    // p1.show();
    // Power c; // (4,6).
    // c = ++p1; // (5,7)
    // c.show(); // (5,7)

    // p1.show();
    // Power p2(4,6);
    // Power p3;
    // p3 = p1 + 2;
    // p1.show();
    // p2.show();
    // p3.show();
    // if (p1 == p2){
    //     cout << "same power" << endl;
    // }
    // else cout << "diff power" << endl;
    // Power d;
    // d = 2 + p1;
    // d.show();
    // cout << c << endl;
    // string a("english");
    // cout << a << endl;
    //p2 = p2 + p3;
    //Power c = p1+=p2;
    //p2.show();
    //c.show();
}