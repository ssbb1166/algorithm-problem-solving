#include <algorithm>
#include <iostream>
using namespace std;


int n, m, i, j, k;
int a[1000000], b[1000000], res[2000000];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int j = 0; j < m; j++)
        cin >> b[j];

    i = 0, j = 0, k = 0;
    while (i < n && j < m)
        if (a[i] < b[j])
            res[k++] = a[i++];
        else
            res[k++] = b[j++];

    while (i < n)
        res[k++] = a[i++];

    while (j < m)
        res[k++] = b[j++];

    for (k = 0; k < n + m; k++)
        cout << res[k] << ' ';

    return 0;
}
