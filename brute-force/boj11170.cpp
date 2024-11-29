#include <iostream>
using namespace std;


int t, n, m, num, cnt;


int main()
{
    cin >> t;

    while (t--) {
        cin >> n >> m;

        cnt = n ? 0 : 1;
        for (int i = n; i <= m; i++) {
            num = i;
            while (num) {
                if (num % 10 == 0) cnt++;
                num /= 10;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
