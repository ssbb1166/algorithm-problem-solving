#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int m, n, x, y, z, res, parent[200000];
vector<pair<int, pair<int, int>>> edge;


int Find(int x)
{
    if (x == parent[x]) return x;
    return parent[x] = Find(parent[x]);
}


void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if (a < b) parent[b] = a;
    else parent[a] = b;
}


int main()
{
    while (1) {
        cin >> m >> n;

        if (m == 0 && n == 0) break;

        res = 0;
        edge.clear();
        for (int i = 0; i < n; i++) {
            cin >> x >> y >> z;
            edge.push_back({ z, { x, y } });
            res += z;
        }

        sort(edge.begin(), edge.end());

        for (int i = 0; i < m; i++)
            parent[i] = i;

        for (int i = 0; i < edge.size(); i++) {
            x = edge[i].second.first;
            y = edge[i].second.second;
            z = edge[i].first;

            if (Find(x) != Find(y)) {
                Union(x, y);
                res -= z;
            }
        }

        cout << res << '\n';
    }
    return 0;
}
