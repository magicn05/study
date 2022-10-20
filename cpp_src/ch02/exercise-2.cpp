#include <iostream>
#include <cstring>

//using namespace std;

int main()
{
    int MAXSIZE = 2;
    struct CUSTOMER{
        char name[10];
        int age;
        char gender; //'M'/'F'
    };
    CUSTOMER customer[10];
    
    for (int i =0; i<MAXSIZE; i++)
    {
    std::cout << "Input customer's name : ";
    std::cin >> customer[i].name;
    std::cout << "Input customer's age : ";
    std::cin >> customer[i].age;
    std::cout << "Input customer's gender : ";
    std::cin >> customer[i].gender;
    }
    int idx;
    char name_search[10];
    
    for (int idx =0; idx<MAXSIZE; idx++)
    {
        std::cout << "============================================" << std::endl;
        std::cout << "NAME : " << customer[idx].name << std::endl;
        std::cout << "AGE : " << customer[idx].age << std::endl;
        std::cout << "GENDER : " << customer[idx].gender << std::endl;

    }
    
    // while(1)
    // {
    //     idx = 0;
    //     cout << "Search (Input name) : ";
    //     cin >> name_search;
    //     for (int i=0; i<MAXSIZE; i++)
    //     {
    //         if (strcmp(customer[i].name, name_search) == 0)
    //             idx = i;
    //             break;
    //     }

    //     cout << "NAME : " << customer[idx].name << endl;
    //     cout << "AGE : " << customer[idx].age << endl;
    //     cout << "GENDER : " << customer[idx].gender << endl;
    // }

}