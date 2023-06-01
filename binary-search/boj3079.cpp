#include <iostream>
using namespace std;


long long int n, m, max_t, t[100000];


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> t[i];
        if (t[i] > max_t)
            max_t = t[i];
    }

    long long int low = 1, high = (m + n - 1) / n * max_t, res = 0;
    while (low <= high) {
        long long int mid = (low + high) / 2;

        long long int cnt = 0;
        for (int i = 0; i < n; i++)
            cnt += mid / t[i];

        if (cnt >= m) {
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
