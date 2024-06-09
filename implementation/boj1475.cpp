#include <algorithm>
#include <iostream>
using namespace std;


int n, res, cnt[10];


int main()
{
    cin >> n;

    while (n) {
        cnt[n % 10]++;
        n /= 10;
    }

    cnt [6] = cnt[9] = (cnt[6] + cnt[9] + 1) / 2;

    for (int i = 0; i <= 9; i++)
        res = max(res, cnt[i]);

    cout << res;

    return 0;
}
