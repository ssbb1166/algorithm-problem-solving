#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#define X first
#define Y second
#define POINT pair<int, int>
#define INF 100000
using namespace std;


int n, idx, dist;
POINT p[100000];
set<POINT> candidate;


int GetDistance(const POINT& a, const POINT& b)
{
    return (a.X - b.X) * (a.X - b.X) + (a.Y - b.Y) * (a.Y - b.Y);
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> p[i].X >> p[i].Y;

    sort(p, p + n);

    candidate.insert({ p[0].Y, p[0].X });
    candidate.insert({ p[1].Y, p[1].X });
    dist = GetDistance(p[0], p[1]);

    for (int i = 2; i < n; i++) {
        while (idx < i) {
            if ((p[i].X - p[idx].X) * (p[i].X - p[idx].X) <= dist) break;
            candidate.erase({ p[idx].Y, p[idx].X });
            idx++;
        }

        auto s = candidate.lower_bound({ p[i].Y - sqrt(dist), -INF });
        auto e = candidate.upper_bound({ p[i].Y + sqrt(dist), INF });
        for (auto iter = s; iter != e; iter++)
            dist = min(dist, GetDistance(p[i], { iter->Y, iter->X }));

        candidate.insert({ p[i].Y, p[i].X });
    }

    cout << dist;

    return 0;
}
