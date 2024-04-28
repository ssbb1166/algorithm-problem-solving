#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, x, y, z, a, b, c, res, parent[100001];
pair<int, int> pos[3][100001];
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
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        pos[0][i] = { x, i };
        pos[1][i] = { y, i };
        pos[2][i] = { z, i };
    }

    sort(pos[0], pos[0] + n);
    sort(pos[1], pos[1] + n);
    sort(pos[2], pos[2] + n);

    for (int i = 0; i < n - 1; i++) {
        for (int axis = 0; axis < 3; axis++) {
            a = pos[axis][i].second;
            b = pos[axis][i + 1].second;
            c = pos[axis][i + 1].first - pos[axis][i].first;
            edge.push_back({ c, {a, b} });
        }
    }

    sort(edge.begin(), edge.end());

    for (int i = 0; i < n; i++)
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
