#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, m, a, b, c, src, dst, parent[100001];
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

    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        edge.push_back({ c, {a, b} });
    }

    cin >> src >> dst;

    sort(edge.begin(), edge.end(), greater<>());

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    for (int i = 0; i < edge.size(); i++) {
        a = edge[i].second.first;
        b = edge[i].second.second;
        c = edge[i].first;

        Union(a, b);

        if (Find(src) == Find(dst)) {
            cout << c << '\n';
            break;
        }
    }

    return 0;
}
