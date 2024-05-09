#include <algorithm>
#include <iostream>
using namespace std;


int n, t[16], p[16], dp[16];


int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> t[i] >> p[i];

	// dp[i]: i일째 퇴사할 때 얻을 수 있는 최대 이익
	for (int i = 1; i <= n; i++) {
		if (i + t[i] <= n + 1)
			dp[i + t[i]] = max(dp[i + t[i]], dp[i] + p[i]);
		dp[i + 1] = max(dp[i + 1], dp[i]);
	}

	cout << dp[n + 1] << '\n';

	return 0;
}
