#include <algorithm>
#include <iostream>
using namespace std;


int n, res, a[1000], dp[1000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        dp[i] = 1;

    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);

    for (int i = 0; i < n; i++)
        if (dp[i] > res)
            res = dp[i];

    cout << res << '\n';

    return 0;
}