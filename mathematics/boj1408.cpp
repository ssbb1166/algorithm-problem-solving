#include <iostream>
#include <string>
using namespace std;


int s, c, res, hour, minute, second;
string start, current;


int main()
{
    cin >> current >> start;

    hour = stoi(start.substr(0, 2));
    minute = stoi(start.substr(3, 2));
    second = stoi(start.substr(6, 2));

    s = hour * 3600 + minute * 60 + second;

    hour = stoi(current.substr(0, 2));
    minute = stoi(current.substr(3, 2));
    second = stoi(current.substr(6, 2));

    c = hour * 3600 + minute * 60 + second;

    res += (s < c ? 86400 : 0) + s - c;

    hour = res / 3600;
    minute = res % 3600 / 60;
    second = res % 60;

    if (hour < 10) cout << 0;
    cout << hour << ':';

    if (minute < 10) cout << 0;
    cout << minute << ':';

    if (second < 10) cout << 0;
    cout << second;

    return 0;
}
