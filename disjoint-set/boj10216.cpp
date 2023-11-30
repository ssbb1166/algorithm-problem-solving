#include <iostream>
using namespace std;


int t, n, cnt, x[3000], y[3000], r[3000], parent[3000];
bool group[3000];


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
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        for (int j = 0; j < n; j++) {
            parent[j] = j;
            group[j] = false;
        }

        for (int j = 0; j < n; j++)
            cin >> x[j] >> y[j] >> r[j];

        for (int a = 0; a < n; a++) {
            for (int b = a + 1; b < n; b++) {
                int dx = x[a] - x[b];
                int dy = y[a] - y[b];
                int sr = r[a] + r[b];
                if (dx * dx + dy * dy <= sr * sr)
                    Union(a, b);
            }
        }

        cnt = 0;
        for (int j = 0; j < n; j++) {
            int root = Find(j);
            if (!group[root]) cnt++;
            group[root] = true;
        }

        cout << cnt << '\n';
    }

    return 0;
}
