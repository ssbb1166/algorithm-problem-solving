#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, m, i, j, k;
vector<int> basket;


int main()
{
    cin >> n >> m;

    for (int num = 1; num <= n; num++)
        basket.push_back(num);

    for (int t = 0; t < m; t++) {
        cin >> i >> j >> k;
        rotate(basket.begin() + i - 1, basket.begin() + k - 1, basket.begin() + j);
    }

    for (int t = 0; t < n; t++)
        cout << basket[t] << ' ';

    return 0;
}
