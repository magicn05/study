#include <iostream>
#include <string>
#include "customer.h"
using namespace std;

int main(void)
{
    CustomerManager manager;
    
    manager.addCustomer(new N_customer());
    manager.addCustomer(new L_customer());
    // int num;
    // int num2;
    // int num3;
    // int num4;
    // int num5;
    // string name_temp;
    // string phone_temp;
    // while (true)
    // {
    //     cout << "==========================" << endl;
    //     cout << "<고객 정보 관리를 위한 메뉴>" << endl;
    //     cout << "1.고객정보 입력" << endl;
    //     cout << "2.고객정보 출력" << endl;
    //     cout << "3.세일 정보 전송" << endl;
    //     cout << "4.종료" << endl;
    //     cout << "==========================" << endl;
    //     cout << "입력 >> ";
    //     cin >> num;
    //     switch (num)
    //     {
    //     case 1:
    //         cout << "1.일반 고객" << endl;
    //         cout << "2.단골 고객" << endl;
    //         cout << "입력 >> ";
    //         cin >> num2;
    //         switch (num2)
    //         {
    //         case 1:
    //             cout << "일반 고객 이름 >> ";
    //             cin >> name_temp;
    //             cout << "일반 고객 번호 >> ";
    //             cin >> phone_temp;
    //             cout << "1. 새우깡 2.오레오 3.포테이토칩 4.쫄병스낵 5.홈런볼 6.오뜨 7.엄마손파이 8.초코파이 9.빅파이 10.양파링" << endl;
    //             manager.addCustomer(new N_customer());
    //             break;
    //         case 2:
    //             cout << "단골 고객 이름 >> ";
    //             cin >> name_temp;
    //             cout << "단골 고객 번호 >> ";
    //             cin >> phone_temp;
    //             cout << "구매 원하는 상품 번호를 선택하세요 >> ";
    //             cout << "1. 새우깡 2.오레오 3.포테이토칩 4.쫄병스낵 5.홈런볼 6.오뜨 7.엄마손파이 8.초코파이 9.빅파이 10.양파링" << endl;
    //             cin >> num3;
    //             manager.addCustomer(new L_customer());
    //             break;
    //         }
    //         break;
    //     case 2:
    //         cout << "모든 고객 정보 출력 " << endl;
    //         cout << "==========================" << endl;
    //         manager.showAllCustomer();
    //         // 고객 정보 출력시 일반 고객과 단골 고객 모두 출력하며 일반 고객인 경우 
    //         // 이름과 전화번호를 출력하고, 단골고객인 경우 구입했던 
    //         // 상품 목록도 함께 출력합니다. 
    //         break;
    //     case 3:
    //         cout << "세일정보 전송 메뉴" << endl;
    //         cout << "세일 제품번호를 입력하세요" ;
    //         cout << ">> ";
    //         cin >> num4;
    //         cout << "할인율을 입력하세요";
    //         cout << ">> ";
    //         cin >> num5;
    //         cout << "하기 고객들에게 세일정보를 전송합니다." << endl;
    //         cout << "==========================" << endl;
    //         manager.sendAdsProduct(num4, num5);
            
    //     // 세일정보 전송 메뉴에서는 세일 제품명과 할인율을 입력하면 
    //     // 그 제품을 구입했던 고객 정보를 찾아 전화번호와 함께 세일 정보를 출력합니다.
    //         break;
    //     case 4:
    //         return 0;
    //     }
    // }    
    // return 0;
}