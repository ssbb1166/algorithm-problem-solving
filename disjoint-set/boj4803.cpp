#include <iostream>
using namespace std;


int t, n, m, a, b, cnt, parent[501];
bool cycle[501], tree[501];


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
    while (1) {
        t++;

        cin >> n >> m;

        if (n == 0 && m == 0) break;

        for (int i = 1; i <= n; i++) {
            parent[i] = i;
            tree[i] = cycle[i] = false;
        }

        for (int i = 0; i < m; i++) {
            cin >> a >> b;
            
            if (Find(a) == Find(b) || cycle[Find(a)] || cycle[Find(b)])
                cycle[Find(a)] = cycle[Find(b)] = true;

            Union(a, b);
        }

        cnt = 0;
        for (int i = 1; i <= n; i++) {
            int root = Find(i);
            if (cycle[root]) continue;
            if (!tree[root]) cnt++;
            tree[root] = true;
        }

        cout << "Case " << t << ": ";
        if (cnt == 0)
            cout << "No trees.\n";
        else if (cnt == 1)
            cout << "There is one tree.\n";
        else
            cout << "A forest of " << cnt << " trees.\n";
    }

    return 0;
}
