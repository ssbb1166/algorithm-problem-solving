#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, m, u, v, d, res, parent[1001];
char sex[1001];
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
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> sex[i];
        parent[i] = i;
    }

    for (int i = 0; i < m; i++) {
        cin >> u >> v >> d;
        edge.push_back({ d, { u, v } });
    }

    sort(edge.begin(), edge.end());

    for (int i = 0; i < edge.size(); i++) {
        u = edge[i].second.first;
        v = edge[i].second.second;
        d = edge[i].first;

        if (sex[u] == sex[v])
            continue;

        if (Find(u) != Find(v)) {
            Union(u, v);
            res += d;
        }
    }

    int group = Find(1);
    for (int i = 2; i <= n; i++)
        if (Find(i) != group)
            res = -1;

    cout << res << '\n';

    return 0;
}
