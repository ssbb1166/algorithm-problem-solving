#include <iostream>
using namespace std;


int n, t, p, sum, cnt[6];


int main()
{
    cin >> n;

    for (int i = 0; i < 6; i++)
        cin >> cnt[i];

    cin >> t >> p;

    for (int i = 0; i < 6; i++)
        sum += (cnt[i] + t - 1) / t;

    cout << sum << '\n';
    cout << n / p << ' ' << n % p;

    return 0;
}
