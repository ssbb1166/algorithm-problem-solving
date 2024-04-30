#include <iostream>
using namespace std;


int n, m, i, j, k, basket[101];


int main()
{
    cin >> n >> m;

    for (int t = 0; t < m; t++) {
        cin >> i >> j >> k;
        for (int idx = i; idx <= j; idx++)
            basket[idx] = k;
    }

    for (int idx = 1; idx <= n; idx++)
        cout << basket[idx] << ' ';
    cout << '\n';

    return 0;
}
