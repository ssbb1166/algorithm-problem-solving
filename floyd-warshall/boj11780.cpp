#include <algorithm>
#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;


int n, m, a, b, c, graph[101][101], midpoint[101][101];
vector<int> route;


void FindRoute(int src, int dst)
{
    if (midpoint[src][dst] == 0) {
        route.push_back(src);
        route.push_back(dst);
        return;
    }

    FindRoute(src, midpoint[src][dst]);
    route.pop_back();
    FindRoute(midpoint[src][dst], dst);
}


int main()
{
    cin >> n >> m;

    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            graph[a][b] = INF;

    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        graph[a][b] = min(graph[a][b], c);
    }

    for (int k = 1; k <= n; k++) {
        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= n; b++) {
                if (a == b) continue;
                if (graph[a][b] > graph[a][k] + graph[k][b]) {
                    graph[a][b] = graph[a][k] + graph[k][b];
                    midpoint[a][b] = k;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (graph[i][j] == INF)
                cout << 0 << ' ';
            else
                cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (graph[i][j] == INF) {
                cout << 0;
            }
            else {
                route.clear();
                FindRoute(i, j);
                cout << route.size() << ' ';
                for (int x = 0; x < route.size(); x++)
                    cout << route[x] << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
