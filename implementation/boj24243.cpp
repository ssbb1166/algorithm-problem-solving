#include <iostream>
#include <string>
using namespace std;


int h, w, n, cnt;
bool possible;
string screen[100][100], current[100];


int main()
{
    cin >> h >> w >> n;

    for (int i = 0; i < n; i++)
        for (int y = 0; y < h; y++)
            cin >> screen[i][y];

    for (int y = 0; y < h; y++)
        cin >> current[y];

    for (int i = 0; i < n; i++) {
        possible = true;
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++)
                if (screen[i][y][x] == '.' && current[y][x] == 'x')
                    possible = false;
        if (possible) cnt++;
    }

    cout << (cnt == 1 ? "yes" : "no");

    return 0;
}
