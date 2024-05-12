#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, u[1001];
vector<int> two;


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> u[i];

    sort(u + 1, u + n + 1);

    for (int x = 1; x <= n; x++)
        for (int y = 1; y <= n; y++)
            two.push_back(u[x] + u[y]);

    sort(two.begin(), two.end());

    for (int k = n; k > 0; k--) {
        for (int z = 1; z < k; z++) {
            if (binary_search(two.begin(), two.end(), u[k] - u[z])) {
                cout << u[k];
                return 0;
            }
        }
    }
}
