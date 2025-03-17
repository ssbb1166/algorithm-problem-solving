#include <iostream>
using namespace std;


int n, m, map[1001][1001], dp[1001][1001];


int main()
{
    cin >> n >> m;

    for (int r = 1; r <= n; r++)
        for (int c = 1; c <= m; c++)
            cin >> map[r][c];

    for (int r = 1; r <= n; r++)
        for (int c = 1; c <= m; c++)
            dp[r][c] = max(dp[r - 1][c], dp[r][c - 1]) + map[r][c];

    cout << dp[n][m];

    return 0;
}
