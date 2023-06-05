#include <iostream>
using namespace std;


int n, m, max_cnt, cnt[300000];


int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> cnt[i];
        if (cnt[i] > max_cnt)
            max_cnt = cnt[i];
    }

    int low = 1, high = max_cnt, res = 0;
    while (low <= high) {
        int mid = (low + high) / 2;

        int num = 0;
        for (int i = 0; i < m; i++) {
            num += cnt[i] / mid;
            if (cnt[i] % mid) num++;
        }

        if (num <= n) {
            res = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << res << '\n';

    return 0;
}
