#include <algorithm>
#include <iostream>
using namespace std;


int n, k, a[5000000];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    cout << a[k - 1];

    return 0;
}
