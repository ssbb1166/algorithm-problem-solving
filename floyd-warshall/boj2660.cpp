#include <algorithm>
#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;


int n, a, b, min_point = INF, graph[51][51];
vector<int> candidates;


int main()
{
    cin >> n;

    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            graph[a][b] = INF;

    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            if (a == b) graph[a][b] = 0;

    while (1) {
        cin >> a >> b;
        if (a == -1 && b == -1) break;
        graph[a][b] = graph[b][a] = 1;
    }

    for (int k = 1; k <= n; k++)
        for (int a = 1; a <= n; a++)
            for (int b = 1; b <= n; b++)
                graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);

    for (int a = 1; a <= n; a++) {
        int point = 0;
        for (int b = 1; b <= n; b++)
            if (graph[a][b] > point)
                point = graph[a][b];

        if (point < min_point) {
            min_point = point;
            candidates.clear();
        }

        if (point == min_point)
            candidates.push_back(a);
    }

    cout << min_point << ' ' << candidates.size() << '\n';
    for (int i = 0; i < candidates.size(); i++)
        cout << candidates[i] << ' ';

    return 0;
}
