#include <algorithm>
#include <iostream>
using namespace std;


int n, p, q, r, a[100000];
long long s;


long long GetSum(int k)
{
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (a[i] > k + r)
            sum -= p;
        if (a[i] < k)
            sum += q;
    }

    return sum;
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    cin >> p >> q >> r >> s;

    int low = 1, high = 100001, res = -1;
    while (low <= high) {
        int k = (low + high) / 2;

        if (GetSum(k) >= s) {
            res = k;
            high = k - 1;
        }
        else {
            low = k + 1;
        }
    }

    cout << res;

    return 0;
}
