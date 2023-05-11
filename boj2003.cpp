#include <iostream>
using namespace std;


int n, m, sum, cnt, a[10000];


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int end = 0;
    for (int start = 0; start < n; start++) {
        while (sum < m && end < n) {
            sum += a[end];
            end++;
        }
        if (sum == m) cnt++;
        sum -= a[start];
    }

    cout << cnt << '\n';

    return 0;
}
