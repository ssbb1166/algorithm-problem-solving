#include <algorithm>
#include <iostream>
#define MIN -1e7
using namespace std;


int n, k, sum = MIN, p[100001];


int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        p[i] += p[i - 1];
    }

    for (int i = 0; i <= n - k; i++)
        sum = max(sum, p[i + k] - p[i]);

    cout << sum << '\n';

    return 0;
}
