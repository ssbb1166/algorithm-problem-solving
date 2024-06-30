#include <iostream>
using namespace std;


int n, num, idx, digit, cnt, winning[4] = { 2, 0, 2, 3 };


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        num = i;
        idx = 3;
        while (num > 0) {
            digit = num % 10;
            if (digit == winning[idx]) idx--;
            if (idx == -1) break;
            num /= 10;
        }
        if (idx == -1) cnt++;
    }

    cout << cnt;

    return 0;
}
