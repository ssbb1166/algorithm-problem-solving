#include <algorithm>
#include <iostream>
using namespace std;


int n, m, l, pos[52];


int main()
{
    cin >> n >> m >> l;

    pos[0] = 0;
    pos[1] = l;

    for (int i = 0; i < n; i++)
        cin >> pos[i + 2];

    sort(pos, pos + n + 2);

    int low = 1, high = l, res = 0;
    while (low <= high) {
        int mid = (low + high) / 2;

        int cnt = 0;
        for (int i = 1; i < n + 2; i++)
            cnt += (pos[i] - pos[i - 1] - 1) / mid;

        if (cnt <= m) {
            res = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << res << '\n';

    return 0;
}
