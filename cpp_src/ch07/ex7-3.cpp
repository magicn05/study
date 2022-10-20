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
};

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
    Power p2(4,6);
    Power p3;
    p3 = p1 + 2;
    p1.show();
    p2.show();
    p3.show();
    if (p1 == p2){
        cout << "same power" << endl;
    }
    else cout << "diff power" << endl;
    //p2 = p2 + p3;
    //Power c = p1+=p2;
    //p2.show();
    //c.show();
}