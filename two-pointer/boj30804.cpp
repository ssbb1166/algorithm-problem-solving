#include <algorithm>
#include <iostream>
using namespace std;


int n, s, ps, pps, pi, ppi, cnt, res;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;

        if (s == ps) {
            cnt++;
        }
        else if (s != ps && s == pps) {
            pps = ps;
            ppi = pi;
            ps = s;
            pi = i;
            cnt++;
        }
        else {
            pps = ps;
            ppi = pi;
            ps = s;
            pi = i;
            res = max(cnt, res);
            cnt = i - ppi + 1;
        }
    }

    res = max(cnt, res);

    cout << res;

    return 0;
}
