#include <algorithm>
#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;


int n, k, res = INF, x[50], y[50];
vector<int> shelters;


int GetMaxDist()
{
    int max_dist = 0;
    for (int i = 0; i < n; i++) {
        int min_dist = INF;
        for (int shelter : shelters) {
            int dist = abs(x[i] - x[shelter]) + abs(y[i] - y[shelter]);
            min_dist = min(dist, min_dist);
        }
        max_dist = max(min_dist, max_dist);
    }

    return max_dist;
}


void SelectShelter(int idx, int cnt)
{
    if (cnt == k) {
        res = min(GetMaxDist(), res);
        return;
    }

    for (int i = idx; i < n; i++) {
        shelters.push_back(i);
        SelectShelter(i + 1, cnt + 1);
        shelters.pop_back();
    }
}


int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    SelectShelter(0, 0);

    cout << res;

    return 0;
}
