#include <iostream>
using namespace std;


int n, t, p, idx, high_idx, ranking[51];


int main()
{
    cin >> n >> t >> p;

    for (idx = 1; idx <= n; idx++)
        cin >> ranking[idx];

    for (idx = 1; idx <= n; idx++) {
        if (!high_idx && ranking[idx] <= t) high_idx = idx;
        if (ranking[idx] < t) break;
    }

    if (high_idx == 0) high_idx = n + 1;

    cout << (idx <= p ? high_idx : -1);

    return 0;
}
