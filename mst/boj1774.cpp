#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;


int n, m, a, b, x[1001], y[1001], parent[1001];
double c, res;
vector<pair<double, pair<int, int>>> edge;


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
        cin >> x[i] >> y[i];

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            double dx = x[a] - x[b];
            double dy = y[a] - y[b];
            double c = sqrt(dx * dx + dy * dy);
            edge.push_back({ c, { a, b } });
        }
    }

    sort(edge.begin(), edge.end());

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        Union(a, b);
    }

    for (int i = 0; i < edge.size(); i++) {
        a = edge[i].second.first;
        b = edge[i].second.second;
        c = edge[i].first;

        if (Find(a) != Find(b)) {
            Union(a, b);
            res += c;
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << res << '\n';

    return 0;
}
