#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int v, e, a, b, c, res, parent[10001];
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
    cin >> v >> e;

    for (int i = 0; i < e; i++) {
        cin >> a >> b >> c;
        edge.push_back({ c, { a, b } });
    }

    sort(edge.begin(), edge.end());

    for (int i = 1; i <= v; i++)
        parent[i] = i;

    for (int i = 0; i < edge.size(); i++) {
        a = edge[i].second.first;
        b = edge[i].second.second;
        c = edge[i].first;

        if (Find(a) != Find(b)) {
            Union(a, b);
            res += c;
        }
    }

    cout << res << '\n';

    return 0;
}
