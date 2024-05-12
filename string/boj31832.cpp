#include <iostream>
#include <string>
using namespace std;


int n, cnt[3];
string s;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        
        if (s.length() > 10)
            continue;

        cnt[0] = cnt[1] = cnt[2] = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] >= 'A' && s[j] <= 'Z')
                cnt[0]++;
            if (s[j] >= 'a' && s[j] <= 'z')
                cnt[1]++;
            if (s[j] >= '0' && s[j] <= '9')
                cnt[2]++;
        }

        if (cnt[0] <= cnt[1] && s.length() != cnt[2])
            cout << s << '\n';
    }

    return 0;
}
