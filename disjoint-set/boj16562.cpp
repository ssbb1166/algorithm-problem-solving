#include <iostream>
#define INF 1e9
using namespace std;


int n, m, k, v, w, min_cost, a[10001], cost[10001], parent[10001];


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

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cost[i] = INF;
        parent[i] = i;
    }

    for (int i = 0; i < m; i++) {
        cin >> v >> w;
        Union(v, w);
    }

    for (int i = 1; i <= n; i++)
        if (a[i] < cost[Find(i)])
            cost[Find(i)] = a[i];

    for (int i = 1; i <= n; i++)
        if (cost[i] != INF)
            min_cost += cost[i];

    if (min_cost <= k)
        cout << min_cost << '\n';
    else
        cout << "Oh no" << '\n';

    return 0;
}
