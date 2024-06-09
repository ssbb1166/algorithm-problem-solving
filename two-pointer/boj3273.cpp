#include <algorithm>
#include <iostream>
using namespace std;


int n, x, sum, cnt, a[100000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> x;

    sort(a, a + n);

    int start = 0, end = n - 1;
    while (start < end) {
        sum = a[start] + a[end];
        if (sum <= x) start++;
        if (sum >= x) end--;
        if (sum == x) cnt++;
    }

    cout << cnt;

    return 0;
}
