#include <iostream>
using namespace std;


long long int n, m, num, max_t, t[10001];


int main()
{
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        cin >> t[i];
        if (t[i] > max_t)
            max_t = t[i];
    }

    long long int low = 1, high = (n + m - 1) / m * max_t, total = 0;
    while (low <= high) {
        long long int mid = (low + high) / 2;

        long long int cnt = m;
        for (int i = 1; i <= m; i++)
            cnt += mid / t[i];

        if (cnt >= n) {
            total = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (n <= m) {
        num = n;
    }
    else {
        long long int cnt = m;
        for (int i = 1; i <= m; i++)
            cnt += (total - 1) / t[i];

        for (int i = 1; i <= m; i++) {
            if (total % t[i] == 0)
                cnt++;
            if (cnt == n) {
                num = i;
                break;
            }
        }
    }

    cout << num << '\n';

    return 0;
}
