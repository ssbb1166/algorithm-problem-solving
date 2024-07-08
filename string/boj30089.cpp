#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int t;
string s, part, reversed;


int main()
{
    cin >> t;

    while (t--) {
        cin >> s;

        int idx = 0;
        while (idx < s.length()) {
            part = reversed = s.substr(idx);
            reverse(reversed.begin(), reversed.end());
            if (part == reversed) break;
            idx++;
        }

        reversed = s.substr(0, idx);
        reverse(reversed.begin(), reversed.end());

        cout << s + reversed << '\n';
    }

    return 0;
}
