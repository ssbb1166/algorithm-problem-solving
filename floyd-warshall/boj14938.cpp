#include <algorithm>
#include <iostream>
#define INF 1e9
using namespace std;


int n, m, r, a, b, l, res, map[101], graph[101][101];


int main()
{
    cin >> n >> m >> r;

    for (int i = 1; i <= n; i++)
        cin >> map[i];

    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            graph[a][b] = INF;

    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            if (a == b) graph[a][b] = 0;

    for (int i = 0; i < r; i++) {
        cin >> a >> b >> l;
        graph[a][b] = l;
        graph[b][a] = l;
    }

    for (int k = 1; k <= n; k++)
        for (int a = 1; a <= n; a++)
            for (int b = 1; b <= n; b++)
                graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);

    for (int a = 1; a <= n; a++) {
        int cnt = 0;
        for (int b = 1; b <= n; b++)
            if (graph[a][b] <= m)
                cnt += map[b];

        if (cnt > res)
            res = cnt;
    }

    cout << res << '\n';

    return 0;
}
