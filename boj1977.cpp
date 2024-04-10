#include <iostream>
using namespace std;


int m, n, sum, min_num;


int main()
{
    cin >> m >> n;

    for (int num = 100; num >= 1; num--) {
        if (num * num >= m && num * num <= n) {
            sum += num * num;
            min_num = num * num;
        }
    }

    if (sum > 0) {
        cout << sum << '\n';
        cout << min_num << '\n';
    }
    else {
        cout << -1 << '\n';
    }

    return 0;
}
