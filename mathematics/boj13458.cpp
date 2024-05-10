#include <iostream>
using namespace std;


int n, a[1000000], b, c;
long long int cnt;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> b >> c;

    for (int i = 0; i < n; i++) {
        a[i] -= b;
        cnt++;

        if (a[i] > 0)
            cnt += (a[i] + c - 1) / c;
    }

    cout << cnt << '\n';

    return 0;
}
