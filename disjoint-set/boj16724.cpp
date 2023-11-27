#include <iostream>
using namespace std;


int n, m, cnt, parent[1000 * 1000];
char map[1000][1000];
bool zone[1000 * 1000];


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

    for (int y = 0; y < n; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < m; x++) {
            map[y][x] = line[x];
            parent[x + y * m] = x + y * m;
        }
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            switch (map[y][x]) {
            case 'U':
                if (y - 1 >= 0)
                    Union(x + y * m, x + (y - 1) * m);
                break;
            case 'D':
                if (y + 1 < n)
                    Union(x + y * m, x + (y + 1) * m);
                break;
            case 'L':
                if (x - 1 >= 0)
                    Union(x + y * m, (x - 1) + y * m);
                break;
            case 'R':
                if (x + 1 < m)
                    Union(x + y * m, (x + 1) + y * m);
                break;
            }
        }
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            int root = Find(x + y * m);
            if (!zone[root]) cnt++;
            zone[root] = true;
        }
    }

    cout << cnt << '\n';

    return 0;
}
