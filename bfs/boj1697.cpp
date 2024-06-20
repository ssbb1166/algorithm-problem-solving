#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;


int n, k, t[100001];


void Find()
{
    queue<int> q;
    q.push(n);
    t[n] = 0;

    while (t[k] == -1) {
        int x = q.front();
        int dx[] = { -1, 1, x };
        q.pop();

        for (int i = 0; i < 3; i++) {
            int nx = x + dx[i];

            if (nx < 0 || nx > 100000)
                continue;

            if (t[nx] == -1) {
                q.push(nx);
                t[nx] = t[x] + 1;
            }
        }
    }
}


int main()
{
    cin >> n >> k;

    fill(t, t + 100001, -1);

    Find();

    cout << t[k];

    return 0;
}
