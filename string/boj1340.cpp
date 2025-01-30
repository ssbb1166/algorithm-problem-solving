#include <iostream>
#include <string>
using namespace std;


string now_month, now_day, now_time;
int year, month, day, hour, minute;
int day_of_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
double today_cnt, total_cnt;


int GetMonth(string month)
{
    if (month == "January")
        return 1;
    if (month == "February")
        return 2;
    if (month == "March")
        return 3;
    if (month == "April")
        return 4;
    if (month == "May")
        return 5;
    if (month == "June")
        return 6;
    if (month == "July")
        return 7;
    if (month == "August")
        return 8;
    if (month == "September")
        return 9;
    if (month == "October")
        return 10;
    if (month == "November")
        return 11;
    if (month == "December")
        return 12;
}


bool IsLeapYear(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}


int GetDayCount(int year, int month, int day)
{
    int cnt = day - 1;

    for (int m = 1; m < month; m++) {
        cnt += day_of_month[m];
        if (m == 2 && IsLeapYear(year)) cnt++;
    }

    return cnt;
}


int GetTimeCount(int year, int month, int day, int hour, int minute)
{
    return GetDayCount(year, month, day) * 1440 + hour * 60 + minute;
}


int main()
{
    cin >> now_month >> now_day >> year >> now_time;

    month = GetMonth(now_month);
    day = stoi(now_day.substr(0, 2));
    hour = stoi(now_time.substr(0, 2));
    minute = stoi(now_time.substr(3, 2));

    today_cnt = GetTimeCount(year, month, day, hour, minute);
    total_cnt = GetTimeCount(year, 12, 31, 24, 0);

    cout << fixed;
    cout.precision(9);
    cout << today_cnt * 100 / total_cnt;

    return 0;
}
