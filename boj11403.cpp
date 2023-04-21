#include <algorithm>
#include <iostream>
#define INF 1e9
using namespace std;


int n, edge, graph[101][101];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> edge;
            if (edge)
                graph[i][j] = 0;
            else
                graph[i][j] = INF;
        }
    }

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            if (graph[i][j] == INF)
                cout << 0 << ' ';
            else
                cout << 1 << ' ';
        cout << '\n';
    }

    return 0;
}
