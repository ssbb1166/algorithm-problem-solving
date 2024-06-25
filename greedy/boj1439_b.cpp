#include <iostream>
#include <string>
using namespace std;


int cnt;
string s;


int main()
{
    cin >> s;

    for (int i = 1; s[i]; i++)
        if (s[i - 1] == s[0] && s[i] != s[0]) cnt++;

    cout << cnt;

    return 0;
}
