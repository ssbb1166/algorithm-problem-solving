#include <algorithm>
#include <iostream>
using namespace std;


int n, m, l, s[1000], q;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> l;

    for (int i = 0; i < m; i++)
        cin >> s[i];

    while (n--) {
        cin >> q;

        int low = 1, high = l, res = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            int idx = 0, prev = 0, cnt = 0;
            while (idx < m && cnt < q) {
                if (s[idx] - prev >= mid) {
                    cnt++;
                    prev = s[idx];
                }
                idx++;
            }

            if (cnt == q && l - prev >= mid) {
                res = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
