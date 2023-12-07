#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, m, a, b, c, min_cnt, max_cnt, parent[1001];
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

    for (int i = 0; i <= m; i++) {
        cin >> a >> b >> c;
        c = (c == 0) ? 1 : 0;
        edge.push_back({ c, { a, b } });
    }

    sort(edge.begin(), edge.end());

    for (int i = 0; i <= n; i++)
        parent[i] = i;

    for (int i = 0; i < edge.size(); i++) {
        a = edge[i].second.first;
        b = edge[i].second.second;
        c = edge[i].first;
        
        if (Find(a) != Find(b)) {
            Union(a, b);
            if (c == 1) min_cnt++;
        }
    }

    sort(edge.begin(), edge.end(), greater<>());

    for (int i = 0; i <= n; i++)
        parent[i] = i;

    for (int i = 0; i < edge.size(); i++) {
        a = edge[i].second.first;
        b = edge[i].second.second;
        c = edge[i].first;

        if (Find(a) != Find(b)) {
            Union(a, b);
            if (c == 1) max_cnt++;
        }
    }

    cout << max_cnt * max_cnt - min_cnt * min_cnt << '\n';

    return 0;
}
