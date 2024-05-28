#include <algorithm>
#include <iostream>
using namespace std;


int n, min_cost = 1e9, w[11][11];
bool visited[11];


void Travel(int start, int x, int cnt, int cost)
{
    if (cnt == n && w[x][start]) {
        min_cost = min(min_cost, cost + w[x][start]);
        return;
    }

    for (int nx = 1; nx <= n; nx++) {
        if (!visited[nx] && w[x][nx]) {
            visited[nx] = true;
            Travel(start, nx, cnt + 1, cost + w[x][nx]);
            visited[nx] = false;
        }
    }
}


int main()
{
    cin >> n;

    for (int y = 1; y <= n; y++)
        for (int x = 1; x <= n; x++)
            cin >> w[y][x];

    for (int i = 1; i <= n; i++) {
        visited[i] = true;
        Travel(i, i, 1, 0);
        visited[i] = false;
    }

    cout << min_cost << '\n';

    return 0;
}
