#include <iostream>

using namespace std;

class Tower{

    private:
        int height;
    public:
        Tower();
        Tower(int a);
        int getHeight();
};

Tower::Tower(int a)
{
    height = a;
}

Tower::Tower():Tower(1) {}

int Tower::getHeight()
{
    return height;
}

int main(){
    Tower myTower;
    Tower seoulTower(100);
    cout << "Height " << myTower.getHeight() << "meter" << endl;
    cout << "Height " << seoulTower.getHeight() << "meter" << endl;
}