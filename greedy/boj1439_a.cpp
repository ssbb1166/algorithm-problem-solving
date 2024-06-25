#include <iostream>
#include <string>
using namespace std;


int cnt;
string s;


int main()
{
    cin >> s;

    for (int i = 1; s[i]; i++)
        if (s[i] != s[i - 1]) cnt++;

    cout << (cnt + 1) / 2 << '\n';

    return 0;
}
