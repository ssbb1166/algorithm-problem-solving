#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;


int n, m, info;
int dist, min_dist, sum, res = 1e9;
vector<pair<int, int>> house, chicken, selected;


void Calculate(int cnt, int idx)
{
    if (cnt == m) {
        sum = 0;
        for (int i = 0; i < house.size(); i++) {
            int hx = house[i].first;
            int hy = house[i].second;

            min_dist = 1e9;
            for (int j = 0; j < selected.size(); j++) {
                int cx = selected[j].first;
                int cy = selected[j].second;

                dist = abs(hx - cx) + abs(hy - cy);

                if (dist < min_dist)
                    min_dist = dist;
            }

            sum += min_dist;
        }

        if (sum < res)
            res = sum;

        return;
    }

    for (int i = idx; i < chicken.size(); i++) {
        selected.push_back(chicken[i]);
        Calculate(cnt + 1, i + 1);
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
                house.push_back({ r, c });
            if (info == 2)
                chicken.push_back({ r, c });
        }
    }

    Calculate(0, 0);

    cout << res << '\n';

    return 0;
}
