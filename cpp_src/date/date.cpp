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
    friend ostream &operator<<(ostream &os, const Date &obj);
    Date operator+(int obj);
    int getDayOfMonth()
    {
        int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        bool leapYear = false;
        if (year % 4 == 0)
        {
            leapYear = true;
            if (year % 100 == 0)
            {
                leapYear = false;
                if (year % 400 == 0)
                    leapYear = true;
            }
        }
        if (leapYear == true)
            month_day[1] += 1;
        return month_day[month - 1];
    }
    Date& operator++();
    Date operator++(int obj);
    int operator-(Date obj);
};

 
// int main()
// {
//     struct tm t = { 0 };
//     t.tm_sec = t.tm_min = t.tm_hour = 0; // midnight
//     t.tm_mon = 0;                        // January
//     t.tm_year = 2012 - 1900;
//     t.tm_isdst = -1;                     // unknown

//     t.tm_mday = 200;                     // January 200th?

//     time_t when = mktime(&t);
//     const struct tm *norm = localtime(&when);   // Normalized time

//     std::cout << "month=" << norm->tm_mon << ", day=" << norm->tm_mday << "\n";
//     std::cout << "The 200th day of 2012 starts " << asctime(norm);
// }


int Date::operator-(Date obj){
    struct tm tm_today = {0};
    struct tm tm_target = {0};
    tm_today.tm_year = this->year-1900;
    tm_today.tm_mon = this->month-1;
    tm_today.tm_mday = this->date;
    mktime(&tm_today);
    
    tm_target.tm_year = obj.year-1900;
    tm_target.tm_mon = obj.month-1;
    tm_target.tm_mday = obj.date;
    mktime(&tm_target);



    //cout << "tm.tm_yday : " << tm.tm_yday << endl;
    return int(tm_today.tm_yday - tm_target.tm_yday);
    // int date_temp;
    // int month_temp;
    // int year_temp;
    // date_temp = this->date - obj.date;
    //return 0;

}

Date& Date::operator++(){ //전위 연산자
    
    int day_temp = this->getDayOfMonth(); // 마지막날 리턴
    if (this->date + 1 > day_temp)
        {this->month = this->month + 1;
        return *this;
        }
    else
    {
        this->date = this->date + 1;
        return *this;
    }

}

Date Date::operator++(int obj){ //후위 연산자
    
    Date temp = *this;
    int day_temp = this->getDayOfMonth(); // 마지막날 리턴
    if (this->date + 1 > day_temp)
        {this->month = this->month + 1;
        return temp;
        }
    else
    {
        this->date = this->date + 1;
        return temp;
    }

}

Date Date::operator+(int obj)
{
    Date temp = *this;
    int day_temp = this->getDayOfMonth(); // 마지막날 리턴
    if (temp.date + obj > day_temp)
        {temp.month = temp.month + 1;
        
        return temp;
        }
    else
    {
        temp.date = temp.date + obj;
        return temp;
    }
}

ostream &operator<<(ostream &os, const Date &obj)
{
    os << obj.year << "년" << obj.month << "월" << obj.date << "일 ";
    return os;
}

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

Date::Date(string date_str)
{

    int fIndex = date_str.find('/'); // index 4
    string temp = date_str.substr(0, fIndex);
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
    cout << "show date :" << endl;
    cout << this->year << '/' << this->month << '/' << this->date << endl;
}

int main()
{
    Date today;
    cout << "오늘 날짜는 " << today << "입니다.\n";

    for (int i =0; i<=30; i = i+10)
        cout << i << "일 후는" << today + i << "입니다.\n";
    
    cout << today++ << endl;
    cout << ++today << endl;
    Date startDay(2022,8,8); // 2022.10.11
    //startDay.show();
    cout << today - startDay <<"일 지났습니다." << endl;

    Date endDay("2022/11/18");
    cout << endDay - today << "일 남았습니다." << endl;
    
    // Date birth(2014, 3, 20);
    // today.show();
    // Date independeDay("1945/8/15");
    // independeDay.show();
    // cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}