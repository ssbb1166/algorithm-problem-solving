#include <algorithm>
#include <iostream>
#define INF 1e9
using namespace std;


int n, m, a, b, c, graph[101][101];


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
        cin >> a >> b >> c;
        graph[a][b] = min(graph[a][b], c);
    }

    for (int k = 1; k <= n; k++)
        for (int a = 1; a <= n; a++)
            for (int b = 1; b <= n; b++)
                graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);

    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++)
            if (graph[a][b] == INF)
                cout << 0 << ' ';
            else
                cout << graph[a][b] << ' ';
        cout << '\n';
    }

    return 0;
}
