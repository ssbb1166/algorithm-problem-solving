#include <iostream>
using namespace std;


int day_of_month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int ty, tm, td, dy, dm, dd, tx, dx;


bool GG()
{
    if (dy > ty + 1000)
        return true;

    if (dy == ty + 1000 && dm > tm)
        return true;

    if (dy == ty + 1000 && dm == tm && dd >= td)
        return true;

    return false;
}


bool IsLeapYear(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}


int GetLeapYearCount(int year)
{
    return year / 4 - year / 100 + year / 400;
}


int GetDateCount(int year, int month, int day)
{
    int cnt = day;
    bool leap_year = IsLeapYear(year);

    for (int m = 1; m < month; m++) {
        cnt += day_of_month[m];
        if (leap_year && m == 2) cnt++;
    }

    return cnt;
}


void PrintX()
{
    if (GG()) {
        cout << "gg";
        return;
    }

    int tlycnt = GetLeapYearCount(ty - 1);
    int dlycnt = GetLeapYearCount(dy - 1);
    int tcycnt = ty - tlycnt - 1;
    int dcycnt = dy - dlycnt - 1;

    tx = tcycnt * 365 + tlycnt * 366 + GetDateCount(ty, tm, td);
    dx = dcycnt * 365 + dlycnt * 366 + GetDateCount(dy, dm, dd);

    cout << "D-" << dx - tx;
}


int main()
{
    cin >> ty >> tm >> td >> dy >> dm >> dd;

    PrintX();

    return 0;
}
