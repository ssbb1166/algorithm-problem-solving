#include <iostream>
using namespace std;


int n, m, k, f, d, winner, min_dist = 200000;


int main()
{
    cin >> n >> m >> k;

    for (int i = 1; i <= k; i++) {
        cin >> f >> d;
        if (f + m - d < min_dist) {
            min_dist = f + m - d;
            winner = i;
        }
    }

    cout << winner << '\n';

    return 0;
}
