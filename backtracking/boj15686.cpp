#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
#define INF 10000
using namespace std;


int n, m, info, dist, min_dist, sum, res = INF;
vector<pair<int, int>> houses, chickens, selected;


void CalculateDistance(int idx, int cnt)
{
    if (cnt == m) {
        sum = 0;
        for (pair<int, int> house : houses) {
            int hx = house.first;
            int hy = house.second;

            min_dist = INF;
            for (pair<int, int> chicken : selected) {
                int cx = chicken.first;
                int cy = chicken.second;
                dist = abs(hx - cx) + abs(hy - cy);
                min_dist = min(min_dist, dist);
            }

            sum += min_dist;
        }

        res = min(res, sum);

        return;
    }

    for (int i = idx; i < chickens.size(); i++) {
        selected.push_back(chickens[i]);
        CalculateDistance(i + 1, cnt + 1);
        selected.pop_back();
    }
}


int main()
{
    cin >> n >> m;

    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n; c++) {
            cin >> info;
            if (info == 1)
                houses.push_back({ r, c });
            if (info == 2)
                chickens.push_back({ r, c });
        }
    }

    CalculateDistance(0, 0);

    cout << res;

    return 0;
}
