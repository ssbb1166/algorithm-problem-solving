#include <algorithm>
#include <iostream>
using namespace std;


int n, m, i, j, basket[101];


int main()
{
    cin >> n >> m;

    for (int idx = 1; idx <= n; idx++)
        basket[idx] = idx;

    for (int t = 0; t < m; t++) {
        cin >> i >> j;
        reverse(basket + i, basket + j + 1);
    }

    for (int idx = 1; idx <= n; idx++)
        cout << basket[idx] << ' ';
    cout << '\n';

    return 0;
}
