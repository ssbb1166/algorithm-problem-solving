#include <algorithm>
#include <iostream>
using namespace std;


int n, wine[10001], dp[10001];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> wine[i];
    
    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];

    for (int i = 3; i <= n; i++) {
        dp[i] = max(dp[i - 2] + wine[i], dp[i - 3] + wine[i - 1] + wine[i]);
        dp[i] = max(dp[i], dp[i - 1]);
    }

    cout << dp[n] << '\n';


    return 0;
}
