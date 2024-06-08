#include <algorithm>
#include <iostream>
using namespace std;


int n, a[1000000];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for (int i = 0; i < n; i++)
        cout << a[i] << '\n';

    return 0;
}
