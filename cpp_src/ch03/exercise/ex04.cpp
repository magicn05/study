#include <iostream>
#include <cstdlib>
#include <ctime>
//#define RAND_MAX 32767
using namespace std;

class Random
{
private:
    int a;

public:
    Random();
    int next();
    int nextInRange(int a, int b);
};

Random::Random(){
    srand((unsigned)time(0));
}

int Random::next()
{  
    return rand() % 32767;
}

int Random::nextInRange(int a, int b)
{
 return (rand() % b ) + a;
}

int main()
{
    Random r;

    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++)
    {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서" << "4 까지의 랜덤 정수 10개 --" << endl;
    for (int i=0; i<10;i++)
    {
        int n = r.nextInRange(2,4);
        cout << n << ' ';
    }
    cout << endl;
}