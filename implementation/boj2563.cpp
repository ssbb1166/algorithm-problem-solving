#include <iostream>
using namespace std;


int n, dx, dy, cnt;
bool paper[100][100];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> dx >> dy;

        for (int y = dy; y < dy + 10; y++)
            for (int x = dx; x < dx + 10; x++)
                paper[y][x] = true;
    }

    for (int y = 0; y < 100; y++)
        for (int x = 0; x < 100; x++)
            if (paper[y][x])
                cnt++;

    cout << cnt << '\n';

    return 0;
}
