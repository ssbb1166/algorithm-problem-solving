#include <algorithm>
#include <iostream>
#define INF 1e9
using namespace std;


int n, m, a, b, cmp, cnt, graph[501][501];


int main()
{
    cin >> n >> m;

    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            graph[a][b] = INF;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a][b] = 0;
    }

    for (int k = 1; k <= n; k++)
        for (int a = 1; a <= n; a++)
            for (int b = 1; b <= n; b++)
                graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);

    for (int i = 1; i <= n; i++) {
        cmp = 0;
        for (int a = 1; a <= n; a++)
            if (graph[a][i] != INF) cmp++;
        for (int b = 1; b <= n; b++)
            if (graph[i][b] != INF) cmp++;
        if (cmp == n - 1) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
