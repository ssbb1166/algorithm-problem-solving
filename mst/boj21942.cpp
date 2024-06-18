#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, m, a, b, c, parent[100001];
long long res;
vector<pair<int, pair<int, int>>> edges;


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

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    while (m--) {
        cin >> a >> b >> c;
        res += c;
        edges.push_back({ c, {a, b} });
    }

    sort(edges.begin(), edges.end());

    long long min = 0;
    for (pair<int, pair<int, int>> edge : edges) {
        a = edge.second.first;
        b = edge.second.second;
        c = edge.first;

        if (Find(a) != Find(b)) {
            Union(a, b);
            min += c;
        }
    }

    bool connected = true;
    for (int i = 1; i <= n; i++)
        if (Find(i) != parent[1])
            connected = false;

    cout << (connected ? res - min : -1);

    return 0;
}
