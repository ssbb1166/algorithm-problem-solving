#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, len, idx, a[1000], dp[1000];
vector<int> res[1000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        res[i].push_back(a[i]);

        for (int j = 0; j < i; j++) {
            if (a[i] > a[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                res[i] = res[j];
                res[i].push_back(a[i]);
            }
        }

        if (dp[i] > len) {
            len = dp[i];
            idx = i;
        }
    }
    
    cout << len << '\n';
    for (int a : res[idx])
        cout << a << ' ';

    return 0;
}
