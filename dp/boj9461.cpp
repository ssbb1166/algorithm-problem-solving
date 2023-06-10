#include <iostream>
using namespace std;


int t, n;
long long int dp[101] = { 0, 1, 1, 1, 2 };


int main()
{
    for (int i = 5; i <= 100; i++)
        dp[i] = dp[i - 1] + dp[i - 5];

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}
