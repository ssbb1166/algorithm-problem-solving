#include <iostream>
#include <queue>
using namespace std;


int f, s, g, u, d, cnt[1000001];
queue<int> q;


int main()
{
    cin >> f >> s >> g >> u >> d;

    fill(cnt, cnt + 1000001, -1);

    q.push(s);
    cnt[s] = 0;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        if (x == g) break;

        if (x + u <= f && cnt[x + u] == -1) {
            q.push(x + u);
            cnt[x + u] = cnt[x] + 1;
        }

        if (x - d >= 1 && cnt[x - d] == -1) {
            q.push(x - d);
            cnt[x - d] = cnt[x] + 1;
        }
    }

    if (cnt[g] != -1)
        cout << cnt[g];
    else
        cout << "use the stairs";

    return 0;
}
