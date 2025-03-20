#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int n, m, len, dp[1001][1001];
string arr[1000];


int main()
{
    cin >> n >> m;

    for (int y = 0; y < n; y++)
        cin >> arr[y];

    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= m; x++) {
            if (arr[y - 1][x - 1] == '1')
                dp[y][x] = min({ dp[y - 1][x - 1], dp[y - 1][x], dp[y][x - 1] }) + 1;
            len = max(len, dp[y][x]);
        }
    }

    cout << len * len;
    
    return 0;
}
