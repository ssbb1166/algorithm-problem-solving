#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, m, k, u, v, w, res, power, parent[1001];
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
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    cin >> power;
    for (int i = 1; i < k; i++) {
        cin >> u;
        Union(power, u);
    }

    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        edge.push_back({ w, {u, v} });
    }

    sort(edge.begin(), edge.end());

    for (int i = 0; i < edge.size(); i++) {
        u = edge[i].second.first;
        v = edge[i].second.second;
        w = edge[i].first;

        if (Find(u) != Find(v)) {
            Union(u, v);
            res += w;
        }
    }

    cout << res << '\n';

    return 0;
}
