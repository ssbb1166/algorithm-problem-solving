#include <algorithm>
#include <iostream>
using namespace std;


int n, k, m, l[1000000];


int main()
{
    cin >> n >> k >> m;

    for (int i = 0; i < n; i++) {
        cin >> l[i];

        if (l[i] >= 2 * k)
            l[i] -= 2 * k;
        else if (l[i] > k)
            l[i] -= k;
        else
            l[i] = 0;
    }

    sort(l, l + n);

    int low = 1, high = 1e9, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        long long int cnt = 0;
        for (int i = 0; i < n; i++)
            cnt += l[i] / mid;

        if (cnt >= m) {
            res = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << res;

    return 0;
}
