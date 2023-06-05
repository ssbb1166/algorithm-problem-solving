#include <iostream>
using namespace std;


int m, n, max_l, l[1000000];


int main()
{
    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        cin >> l[i];
        if (l[i] > max_l)
            max_l = l[i];
    }

    int low = 1, high = max_l, res = 0;
    while (low <= high) {
        int mid = (low + high) / 2;

        int cnt = 0;
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

    cout << res << '\n';

    return 0;
}
