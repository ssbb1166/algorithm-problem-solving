#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;


int t, cnt;
string s;


int Recursion(const char* s, int l, int r) {
    cnt++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return Recursion(s, l + 1, r - 1);
}


int IsPalindrome(const char* s) {
    cnt = 0;
    return Recursion(s, 0, strlen(s) - 1);
}


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s;
        cout << IsPalindrome(s.c_str()) << ' ' << cnt << '\n';
    }

    return 0;
}
