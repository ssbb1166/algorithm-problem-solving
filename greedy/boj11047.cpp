#include <iostream>
using namespace std;


int n, k, cnt, a[10];


int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n - 1; i >= 0; i--) {
        cnt += k / a[i];
        k = k % a[i];
    }

    cout << cnt << '\n';

    return 0;
}
