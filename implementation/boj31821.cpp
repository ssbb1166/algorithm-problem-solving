#include <iostream>
using namespace std;


int n, m, a[11], b, sum;


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    cin >> m;

    for (int j = 0; j < m; j++) {
        cin >> b;
        sum += a[b];
    }

    cout << sum << '\n';

    return 0;
}
