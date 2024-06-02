#include <algorithm>
#include <iostream>
using namespace std;


int n, m, res = 2e9, a[100000];


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int start = 0, end = 0;
    while (end < n && start <= end) {
        if (a[end] - a[start] < m) {
            end++;
        }
        else {
            res = min(res, a[end] - a[start]);
            start++;
        }
    }

    cout << res;

    return 0;
}
