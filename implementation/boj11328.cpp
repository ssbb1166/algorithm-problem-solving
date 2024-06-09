#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int n, cnt[26];
string str1, str2;


int main()
{
    cin >> n;

    while (n--) {
        cin >> str1 >> str2;

        fill(cnt, cnt + 26, 0);
        for (char c : str1) cnt[c - 'a']++;
        for (char c : str2) cnt[c - 'a']--;

        bool possible = true;
        for (int i = 0; i < 26; i++)
            if (cnt[i] != 0)
                possible = false;

        if (possible)
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }

    return 0;
}
