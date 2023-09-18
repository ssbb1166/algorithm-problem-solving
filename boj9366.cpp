#include <algorithm>
#include <iostream>
using namespace std;


int t, s[3];


int main()
{
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> s[0] >> s[1] >> s[2];

        sort(s, s + 3);

        cout << "Case #" << i << ": ";
        if (s[0] + s[1] <= s[2])
            cout << "invalid!" << '\n';
        else if (s[0] == s[1] && s[1] == s[2])
            cout << "equilateral" << '\n';
        else if (s[0] == s[1] || s[1] == s[2] || s[2] == s[0])
            cout << "isosceles" << '\n';
        else
            cout << "scalene" << '\n';
    }

    return 0;
}
