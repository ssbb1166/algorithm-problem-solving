#include <iostream>
using namespace std;


int n, k, s, y, res, cnt[2][7];


int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> s >> y;
        cnt[s][y]++;
    }

    for (int s = 0; s <= 1; s++)
        for (int y = 1; y <= 6; y++)
            res += (cnt[s][y] + k - 1) / k;

    cout << res << '\n';

    return 0;
}
