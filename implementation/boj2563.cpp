#include <iostream>
using namespace std;


int n, x, y, cnt;
bool paper[100][100];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        for (int dy = 0; dy < 10; dy++)
            for (int dx = 0; dx < 10; dx++)
                paper[y + dy][x + dx] = true;
    }

    for (int y = 0; y < 100; y++)
        for (int x = 0; x < 100; x++)
            if (paper[y][x])
                cnt++;

    cout << cnt << '\n';

    return 0;
}
