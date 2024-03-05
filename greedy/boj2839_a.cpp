#include <iostream>
using namespace std;


int n, cnt;


int main()
{
    cin >> n;

    while (n > 0) {
        if (n % 5 == 0) {
            cnt += n / 5;
            n = 0;
        }
        else {
            cnt += 1;
            n -= 3;
        }
    }

    if (n == 0)
        cout << cnt << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
