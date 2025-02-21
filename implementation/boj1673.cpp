#include <iostream>
using namespace std;


int n, k, cnt;


int main()
{
    while (cin >> n >> k) {
        cnt = n;
        while (n / k) {
            cnt += n / k;
            n = n / k + n % k;
        }
        cout << cnt << '\n';
    }

    return 0;
}
