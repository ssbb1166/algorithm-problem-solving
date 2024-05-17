#include <iostream>
#include <string>
using namespace std;


int n, m, cnt, res;
string s;


int main()
{
    cin >> n >> m >> s;

    for (int i = 0; i < m; i++) {
        if (s[i] == 'I') {
            cnt = 0;
            while (s[i + 1] == 'O' && s[i + 2] == 'I') {
                cnt++;
                if (cnt == n) {
                    res++;
                    cnt--;
                }
                i += 2;
            }
        }
    }

    cout << res << '\n';

    return 0;
}
