#include <iostream>
#include <string>
using namespace std;


int t, sum, cnt[26];
string s;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s;

        for (int j = 0; j < 26; j++)
            cnt[j] = 0;

        for (int j = 0; j < s.length(); j++)
            cnt[s[j] - 'A']++;

        sum = 0;
        for (int j = 0; j < 26; j++)
            if (cnt[j] == 0)
                sum += (j + 65);

        cout << sum << '\n';
    }

    return 0;
}
