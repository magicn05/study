
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char cmd[80];
  cout << "cin.get(char*, int)로 문자열을 읽습니다." << endl;
  while(true){
    cout <<"종료하려면 exit를 입력하세요." << endl;
    cin.get(cmd, 80); //79개까지의 영어문자 입력.
    if(strcmp(cmd,"exit")==0){
      cout << "프로그램을 종료합니다." << endl;
      return 0;
    }
    else
    {
      //cin.ignore(1);
    }
  }
}
