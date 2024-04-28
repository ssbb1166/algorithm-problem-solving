#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;


int n, a, b, parent[101];
double x, y, c, res;
pair<double, double> pos[101];
vector<pair<double, pair<double, double>>> edge;


double GetCost(pair<int, int> pos1, pair<int, int> pos2)
{
    double x1 = pos1.first, y1 = pos1.second;
    double x2 = pos2.first, y2 = pos2.second;
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}


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
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        pos[i] = { x, y };
    }

    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            if (a != b) edge.push_back({ GetCost(pos[a], pos[b]), {a, b} });

    sort(edge.begin(), edge.end());

    for (int i = 1; i <= n; i++)
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
