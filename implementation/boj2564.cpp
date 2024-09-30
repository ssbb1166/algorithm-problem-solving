#include <iostream>
using namespace std;


int w, h, n, x, dir, dist, sum, pos[100];


int GetPosition(int dir, int dist)
{
    switch (dir) {
    case 1: return dist;
    case 2: return 2 * w + h - dist;
    case 3: return 2 * w + 2 * h - dist;
    case 4: return w + dist;
    }
}


int main()
{
    cin >> w >> h >> n;

    for (int i = 0; i < n; i++) {
        cin >> dir >> dist;
        pos[i] = GetPosition(dir, dist);
    }

    cin >> dir >> dist;
    x = GetPosition(dir, dist);

    for (int i = 0; i < n; i++) {
        dist = abs(x - pos[i]);
        if (dist > w + h)
            dist = 2 * w + 2 * h - dist;
        sum += dist;
    }

    cout << sum;

    return 0;
}
