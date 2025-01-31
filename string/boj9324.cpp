#include <iostream>
#include <string>
using namespace std;


int t, len, cnt[26];
bool fake;
string m;


void Initialize()
{
    fake = false;
    len = m.length();
    for (int i = 0; i < 26; i++) cnt[i] = 0;
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> m;

        Initialize();

        for (int i = 0; i < len; i++) {
            cnt[m[i] - 'A']++;
            if (cnt[m[i] - 'A'] == 3) {
                if (m[i + 1] != m[i]) fake = true;
                cnt[m[i] - 'A'] = 0;
                i++;
            }
        }

        cout << (!fake ? "OK" : "FAKE") << '\n';
    }

    return 0;
}
