#include <algorithm>
#include <iostream>
using namespace std;


int n, cnt, dp[100001];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        dp[i] = i;

    for (int i = 2; i <= n; i++)
        for (int j = 1; j * j <= i; j++)
            dp[i] = min(dp[i], dp[i - j * j] + 1);

    cout << dp[n];

    return 0;
}
