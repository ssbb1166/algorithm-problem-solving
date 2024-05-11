#include <iostream>
using namespace std;


int x, y, day;
int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string week[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };


int main()
{
    cin >> x >> y;

    for (int month = 1; month < x; month++)
        day += days[month];

    day = (day + y) % 7;

    cout << week[day] << '\n';

    return 0;
}
