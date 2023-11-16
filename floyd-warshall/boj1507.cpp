#include <algorithm>
#include <iostream>
#define INF 1e9
using namespace std;


int n, sum, dist[21][21], graph[21][21];
bool possible = true;


int main()
{
    cin >> n;

    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            cin >> dist[a][b];
            graph[a][b] = dist[a][b];
        }
    }

    for (int k = 1; k <= n; k++) {
        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= n; b++) {
                if (k == a || k == b)
                    continue;
                if (dist[a][b] > dist[a][k] + dist[k][b])
                    possible = false;
                if (dist[a][b] == dist[a][k] + dist[k][b])
                    graph[a][b] = 0;
            }
        }
    }

    for (int a = 1; a <= n; a++)
        for (int b = a; b <= n; b++)
            sum += graph[a][b];

    if (possible)
        cout << sum << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
