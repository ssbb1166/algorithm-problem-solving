#include <iostream>
using namespace std;


int n, m, a, sum, cnt;


int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> a;
        sum += a;
        if (sum < 0)
            sum = 0;
        if (sum >= m)
            cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
