#include <algorithm>
#include <iostream>
using namespace std;


int n, k, x[1000];


int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(x, x + n);

    cout << x[n - k] << '\n';

    return 0;
}
