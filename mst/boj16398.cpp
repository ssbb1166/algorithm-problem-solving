#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, a, b, c, parent[1001];
long long int res;
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

    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            cin >> c;
            edge.push_back({ c, { a, b } });
        }
    }

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
