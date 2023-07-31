#include <iostream>
#include <string>
using namespace std;


int n, cnt[2][26];
string str1, str2;
bool possible;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str1 >> str2;

        for (int j = 0; j < str1.length(); j++)
            cnt[0][str1[j] - 'a']++;

        for (int j = 0; j < str2.length(); j++)
            cnt[1][str2[j] - 'a']++;

        possible = true;
        for (int j = 0; j < 26; j++) {
            if (cnt[0][j] != cnt[1][j])
                possible = false;
            cnt[0][j] = cnt[1][j] = 0;
        }

        if (possible)
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }

    return 0;
}
