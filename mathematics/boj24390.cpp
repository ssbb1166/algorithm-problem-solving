#include <iostream>
#include <string>
using namespace std;


int m, s;
string t;


int main()
{
    cin >> t;

    m = (t[0] - '0') * 10 + (t[1] - '0');
    s = (t[3] - '0') * 10 + (t[4] - '0');

    cout << m / 10 + m % 10 + s / 10 % 3 + 1;

    return 0;
}
