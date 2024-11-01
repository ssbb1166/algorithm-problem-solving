#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


char a, b, c, d;


string GetClockNumber(char a, char b, char c, char d)
{
    string check_number = "";
    string clock_number = "9999";

    check_number += a;
    check_number += b;
    check_number += c;
    check_number += d;
    check_number += a;
    check_number += b;
    check_number += c;

    for (int i = 0; i < 4; i++) {
        string number = check_number.substr(i, 4);
        clock_number = min(number, clock_number);
    }

    return clock_number;
}


string GetNumber(char a, char b, char c, char d)
{
    string number = "";

    number += a;
    number += b;
    number += c;
    number += d;

    return number;
}


int GetOrderOfClockNumber(string finish_number)
{
    int cnt = 0;
    for (char a = '1'; a <= '9'; a++) {
        for (char b = '1'; b <= '9'; b++) {
            for (char c = '1'; c <= '9'; c++) {
                for (char d = '1'; d <= '9'; d++) {
                    string clock_number = GetClockNumber(a, b, c, d);
                    if (GetNumber(a, b, c, d) == clock_number) cnt++;
                    if (clock_number == finish_number) return cnt;
                }
            }
        }
    }

    return -1;
}


int main()
{
    cin >> a >> b >> c >> d;
    cout << GetOrderOfClockNumber(GetClockNumber(a, b, c, d));

    return 0;
}
