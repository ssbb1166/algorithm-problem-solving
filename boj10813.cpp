#include <iostream>
using namespace std;


int n, m, i, j, tmp, basket[101];


int main()
{
    cin >> n >> m;

    for (int idx = 1; idx <= n; idx++)
        basket[idx] = idx;

    for (int t = 0; t < m; t++) {
        cin >> i >> j;
        tmp = basket[i];
        basket[i] = basket[j];
        basket[j] = tmp;
    }

    for (int idx = 1; idx <= n; idx++)
        cout << basket[idx] << ' ';
    cout << '\n';

    return 0;
}
