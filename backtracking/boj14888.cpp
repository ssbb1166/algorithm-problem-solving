#include <algorithm>
#include <iostream>
using namespace std;


int n, max_res = -1e9, min_res = 1e9, a[11], cnt[4];


void Calculate(int idx, int res)
{
    if (idx == n) {
        max_res = max(max_res, res);
        min_res = min(min_res, res);
        return;
    }

    for (int op = 0; op < 4; op++) {
        if (cnt[op]) {
            cnt[op]--;
            switch (op) {
            case 0: Calculate(idx + 1, res + a[idx]); break;
            case 1: Calculate(idx + 1, res - a[idx]); break;
            case 2: Calculate(idx + 1, res * a[idx]); break;
            case 3: Calculate(idx + 1, res / a[idx]); break;
            }
            cnt[op]++;
        }
    }
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int op = 0; op < 4; op++)
        cin >> cnt[op];

    Calculate(1, a[0]);

    cout << max_res << '\n' << min_res;

    return 0;
}
