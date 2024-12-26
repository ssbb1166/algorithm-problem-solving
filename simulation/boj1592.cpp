#include <iostream>
using namespace std;


int n, m, l, cur, res, cnt[60];


int main()
{
    cin >> n >> m >> l;

    while (true) {
        if (++cnt[cur] == m) break;

        if (cnt[cur] % 2 == 1)
            cur = (cur + l) % n;
        else
            cur = (cur + n - l) % n;

        res++;
    }

    cout << res;

    return 0;
}
