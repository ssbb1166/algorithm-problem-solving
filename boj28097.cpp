#include <iostream>
using namespace std;


int n, t, total = -8;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t;
        total += t + 8;
    }

    cout << total / 24 << ' ' << total % 24 << '\n';

    return 0;
}
