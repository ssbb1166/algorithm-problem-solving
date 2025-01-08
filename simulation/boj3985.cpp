#include <iostream>
using namespace std;


int l, n, p, k, cnt, roll[1001];
int max_expected_id, max_expected_chops, max_received_id, max_received_chops;


int main()
{
    cin >> l >> n;

    for (int i = 1; i <= n; i++) {
        cin >> p >> k;

        if (k - p + 1 > max_expected_chops) {
            max_expected_id = i;
            max_expected_chops = k - p + 1;
        }

        cnt = 0;
        for (int num = p; num <= k; num++) {
            if (roll[num] == 0) {
                roll[num] = i;
                cnt++;
            }
        }

        if (cnt > max_received_chops) {
            max_received_id = i;
            max_received_chops = cnt;
        }
    }

    cout << max_expected_id << '\n' << max_received_id;

    return 0;
}
