#include <algorithm>
#include <iostream>
#define INF 1e9
using namespace std;


int n, m, a, b, graph[101][101];


int main()
{
    cin >> n >> m;

    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            graph[a][b] = INF;

    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            if (a == b) graph[a][b] = 0;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a][b] = 1;
    }

    for (int k = 1; k <= n; k++)
        for (int a = 1; a <= n; a++)
            for (int b = 1; b <= n; b++)
                graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);

    for (int a = 1; a <= n; a++) {
        int cnt = 0;
        for (int b = 1; b <= n; b++)
            if (graph[a][b] == INF && graph[b][a] == INF)
                cnt++;

        cout << cnt << '\n';
    }

    return 0;
}
