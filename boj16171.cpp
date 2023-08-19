#include <iostream>
#include <string>
using namespace std;


string s, k, res;


int main()
{
    cin >> s >> k;

    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z' ||
            s[i] >= 'a' && s[i] <= 'z')
            res += s[i];

    if (res.find(k) == string::npos)
        cout << 0 << '\n';
    else
        cout << 1 << '\n';

    return 0;
}
