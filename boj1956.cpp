#include <algorithm>
#include <iostream>
#define INF 1e9
using namespace std;


int v, e, a, b, c, min_cycle = INF, graph[401][401];


int main()
{
    cin >> v >> e;

    for (int a = 1; a <= v; a++)
        for (int b = 1; b <= v; b++)
            graph[a][b] = INF;

    for (int i = 0; i < e; i++) {
        cin >> a >> b >> c;
        graph[a][b] = c;
    }

    for (int k = 1; k <= v; k++)
        for (int a = 1; a <= v; a++)
            for (int b = 1; b <= v; b++)
                graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);

    for (int i = 1; i <= v; i++)
        if (graph[i][i] < min_cycle)
            min_cycle = graph[i][i];

    if (min_cycle == INF)
        cout << -1 << '\n';
    else
        cout << min_cycle << '\n';

    return 0;
}
