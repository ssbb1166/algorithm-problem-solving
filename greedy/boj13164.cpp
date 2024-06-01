#include <algorithm>
#include <iostream>
using namespace std;


int n, k, sum, height[300000], diff[300000];


int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> height[i];

    sort(height, height + n);

    for (int i = 1; i < n; i++)
        diff[i] = height[i] - height[i - 1];

    sort(diff, diff + n, greater<int>());

    for (int i = k - 1; i < n; i++)
        sum += diff[i];

    cout << sum;

    return 0;
}
