#include <iostream>
using namespace std;


int t, n, k, cnt, res;


int main()
{
    cin >> t;

    while (t--) {
        cin >> n >> k;

        res = 0;
        while (n--) {
            cin >> cnt;
            res += cnt / k;
        }

        cout << res << '\n';
    }

    return 0;
}
