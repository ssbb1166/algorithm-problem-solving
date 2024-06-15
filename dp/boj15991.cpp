#include <iostream>
using namespace std;


int t, n;
long long dp[100001];


int main()
{
    dp[1] = 1;
    dp[2] = dp[1] + 1;
    dp[3] = dp[2] + dp[1] + 1;

    for (int i = 4; i <= 100000; i++)
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;

    cin >> t;

    while (t--) {
        cin >> n;
        if (n == 1)
            cout << 1 << '\n';
        else if (n == 2)
            cout << 2 << '\n';
        else if (n == 3)
            cout << 2 << '\n';
        else if (n % 2 == 0)
            cout << (dp[(n - 0) / 2] + dp[(n - 2) / 2]) % 1000000009 << '\n';
        else
            cout << (dp[(n - 1) / 2] + dp[(n - 3) / 2]) % 1000000009 << '\n';
    }

    return 0;
}
