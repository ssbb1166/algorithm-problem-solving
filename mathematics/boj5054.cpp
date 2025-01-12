#include <algorithm>
#include <iostream>
using namespace std;


int t, n, x[20];


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> x[i];

        sort(x, x + n);

        cout << (x[n - 1] - x[0]) * 2 << '\n';
    }

    return 0;
}
