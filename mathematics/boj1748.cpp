#include <iostream>
using namespace std;


int n, res;


int main()
{
    cin >> n;

    int digit = 1, total_cnt = 9, prev_cnt = 0;
    while (total_cnt < n) {
        res += digit * (total_cnt - prev_cnt);
        digit++;
        prev_cnt = total_cnt;
        total_cnt = total_cnt * 10 + 9;
    }

    res += digit * (n - prev_cnt);

    cout << res;

    return 0;
}
