#include <algorithm>
#include <iostream>
using namespace std;


int s[3];


int main()
{
    while (1) {
        cin >> s[0] >> s[1] >> s[2];

        if (s[0] == 0 && s[1] == 0 && s[2] == 0) break;

        sort(s, s + 3);

        if (s[0] + s[1] <= s[2])
            cout << "Invalid" << '\n';
        else if (s[0] == s[1] && s[1] == s[2])
            cout << "Equilateral" << '\n';
        else if (s[0] == s[1] || s[1] == s[2] || s[2] == s[0])
            cout << "Isosceles" << '\n';
        else
            cout << "Scalene" << '\n';
    }

    return 0;
}
