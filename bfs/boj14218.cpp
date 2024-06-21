#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, m, q, i, j, cnt[1001];
vector<int> graph[1001];


void BFS()
{
    queue<int> q;
    q.push(1);
    cnt[1] = 0;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        for (int nx : graph[x]) {
            if (cnt[nx] == -1) {
                q.push(nx);
                cnt[nx] = cnt[x] + 1;
            }
        }
    }
}


int main()
{
    cin >> n >> m;

    while (m--) {
        cin >> i >> j;
        graph[i].push_back(j);
        graph[j].push_back(i);
    }
    
    cin >> q;

    while (q--) {
        cin >> i >> j;
        graph[i].push_back(j);
        graph[j].push_back(i);

        for (int x = 1; x <= n; x++)
            cnt[x] = -1;

        BFS();

        for (int x = 1; x <= n; x++)
            cout << cnt[x] << ' ';
        cout << '\n';
    }

    return 0;
}
