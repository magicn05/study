#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Date
{
private:
    int year;
    int month;
    int date;

public:
    Date();
    Date(int year, int month, int date);
    Date(string date_str);
    void show();
    int getYear();
    int getMonth();
    int getDay();
};

int Date::getYear()
{
    return year;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return date;
}

Date::Date()
{
    time_t current;
    time(&current);
    struct tm today;
    today = *localtime(&current);
    year = today.tm_year + 1900;
    month = today.tm_mon + 1;
    date = today.tm_mday;
}

Date::Date(int year, int month, int date)
{
    this->year = year;
    this->month = month;
    this->date = date;
}


Date::Date(string date_str){

    
    int fIndex = date_str.find('/'); // index 4
    string temp = date_str.substr(0,fIndex);
    year = stoi(temp);

    date_str = date_str.substr(fIndex+1);
    fIndex = date_str.find('/');
    temp = date_str.substr(0,fIndex);
    month = stoi(temp);

    date_str = date_str.substr(fIndex+1);
    
    fIndex = date_str.find('/');
    temp = date_str.substr(0,fIndex);
    date = stoi(temp);


}


void Date::show()
{
    cout << "show function :" << endl;
    cout << year << '/' << month << '/' << date << endl;
}

int main()
{
    Date today;
    Date birth(2014, 3, 20);
    today.show();
    Date independeDay("1945/8/15");
    independeDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}