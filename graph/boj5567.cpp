#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, m, a, b;
bool visited[501];
vector<int> friends;
vector<int> graph[501];


int Count()
{
    for (int nx : graph[1]) {
        friends.push_back(nx);
        visited[nx] = true;
    }

    for (int x : friends)
        for (int nx : graph[x])
            visited[nx] = true;

    int cnt = 0;
    for (int i = 2; i <= n; i++)
        cnt += visited[i];

    return cnt;
}


int main()
{
    cin >> n >> m;

    while (m--) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cout << Count();

    return 0;
}
