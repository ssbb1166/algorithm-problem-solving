#include <iostream>
#include <queue>
using namespace std;


int k, dir, len, idx, d[4], area[2] = { 1, 1 };
queue<pair<int, int>> q;


int main()
{
    cin >> k;

    for (int i = 0; i < 6; i++) {
        cin >> dir >> len;
        q.push({ dir, len });
        d[(i + 2) % 4] = dir;
    }

    while (d[0] != d[2] || d[1] != d[3]) {
        d[idx++ % 4] = q.front().first;
        q.push(q.front());
        q.pop();
    }

    area[0] *= q.front().second;
    q.pop();
    area[0] *= q.front().second;
    q.pop();
    q.pop();
    area[1] *= q.front().second;
    q.pop();
    area[1] *= q.front().second;

    cout << (area[0] - area[1]) * k;

    return 0;
}
