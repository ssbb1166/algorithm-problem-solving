#include <iostream>
#include <string>
using namespace std;


int cnt;
string s;


int main()
{
    cin >> s;

    for (int i = 0; i < s.length(); i++)
        if (s[i] == ',')
            cnt++;

    cout << cnt + 1 << '\n';

    return 0;
}
