#include <algorithm>
#include <iostream>
using namespace std;


int t, n, num[1000000];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> num[i];

        sort(num, num + n);

        cout << num[0] << ' ' << num[n - 1] << '\n';
    }

    return 0;
}
