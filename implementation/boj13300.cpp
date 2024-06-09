#include <iostream>
using namespace std;


int n, k, s, y, res, cnt[2][7];


int main()
{
    cin >> n >> k;

    while (n--) {
        cin >> s >> y;
        cnt[s][y]++;
    }

    for (int y = 1; y <= 6; y++) {
        res += (cnt[0][y] + k - 1) / k;
        res += (cnt[1][y] + k - 1) / k;
    }

    cout << res;

    return 0;
}
