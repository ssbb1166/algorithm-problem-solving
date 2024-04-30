#include <iostream>
using namespace std;


int t, l, p, v, cnt;


int main()
{
    while (true) {
        t++;

        cin >> l >> p >> v;

        if (l == 0 && p == 0 && v == 0)
            break;

        cnt = v / p * l + (v % p < l ? v % p : l);

        cout << "Case " << t << ": " << cnt << '\n';
    }

    return 0;
}
