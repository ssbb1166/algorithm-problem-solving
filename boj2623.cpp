#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, m, num_of_singer, prev_singer, singer, indegree[1001];
vector<int> graph[1001], res;


void TopologySort()
{
    queue<int> q;

    for (int i = 1; i <= n; i++)
        if (!indegree[i]) q.push(i);

    while (!q.empty()) {
        int x = q.front();
        res.push_back(x);
        q.pop();

        for (int i = 0; i < graph[x].size(); i++) {
            int nx = graph[x][i];
            indegree[nx]--;
            if (!indegree[nx]) q.push(nx);
        }
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> num_of_singer;
        cin >> prev_singer;
        for (int j = 1; j < num_of_singer; j++) {
            cin >> singer;
            graph[prev_singer].push_back(singer);
            indegree[singer]++;
            prev_singer = singer;
        }
    }

    TopologySort();

    if (res.size() == n)
        for (int i = 0; i < n; i++)
            cout << res[i] << '\n';
    else
        cout << 0 << '\n';

    return 0;
}
