#include <iostream>
using namespace std;


int t, n, cnt, graph[100001];
bool visited[100001], counted[100001];


void Count(int x)
{
    cnt++;
    counted[x] = true;

    int nx = graph[x];
    if (!counted[nx])
        Count(graph[x]);
}


void DFS(int x)
{
    visited[x] = true;
    
    int nx = graph[x];
    if (!visited[nx])
        DFS(graph[x]);
    else if (!counted[nx])
        Count(nx);

    counted[x] = true;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cin >> graph[i];
            visited[i] = counted[i] = false;
        }

        cnt = 0;
        for (int i = 1; i <= n; i++)
            if (!visited[i])
                DFS(i);

        cout << n - cnt << '\n';

    }

    return 0;
}
