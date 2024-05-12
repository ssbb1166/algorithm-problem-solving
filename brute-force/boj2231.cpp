#include <iostream>
#include <string>
using namespace std;


int n, num, sum, tmp;


int main()
{
    cin >> n;

    for (num = 1; num < n; num++) {
        tmp = num;
        sum = num;

        while (tmp > 0) {
            sum += tmp % 10;
            tmp = tmp / 10;
        }

        if (sum == n) break;
    }

    if (sum == n)
        cout << num << '\n';
    else
        cout << 0 << '\n';

    return 0;
}
