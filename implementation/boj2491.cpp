#include <algorithm>
#include <iostream>
using namespace std;


int n, same = 1, cnt = 1, res, seq[100000];
bool increasing;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> seq[i];

    for (int i = 0; i < n - 1; i++) {
        if (increasing) {
            if (seq[i] <= seq[i + 1]) {
                cnt++;
            }
            else {
                res = max(res, cnt);
                increasing = false;
                cnt = same + 1;
            }
        }
        else {
            if (seq[i] >= seq[i + 1]) {
                cnt++;
            }
            else {
                res = max(res, cnt);
                increasing = true;
                cnt = same + 1;
            }
        }

        if (seq[i] == seq[i + 1]) same++;
        else same = 1;
    }

    res = max(res, cnt);

    cout << res;

    return 0;
}
