#include <iostream>
#include <string>
using namespace std;


int n, q, cmd, l, r, cnt;
string s;


int main()
{
    cin >> n >> q >> s;

    for (int i = 0; i < q; i++) {
        cin >> cmd >> l >> r;

        if (cmd == 1) {
            cnt = 1;
            for (int j = l; j < r; j++)
                if (s[j] != s[j - 1])
                    cnt++;
            cout << cnt << '\n';
        }

        if (cmd == 2) {
            for (int j = l - 1; j < r; j++) {
                if (s[j] == 'Z')
                    s[j] = 'A';
                else
                    s[j] = s[j] + 1;
            }
        }
    }

    return 0;
}
