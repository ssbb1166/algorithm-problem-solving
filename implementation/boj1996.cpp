#include <iostream>
#include <string>
using namespace std;


int n;
string map[1000];


int dx[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[] = { -1, -1, 0, 1, 1, 1, 0, -1 };


char GetNumberOfMines(int x, int y)
{
    int cnt = 0;

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx > n - 1 || ny < 0 || ny > n - 1)
            continue;

        if (map[ny][nx] >= '1' && map[ny][nx] <= '9')
            cnt += map[ny][nx] - '0';
    }

    return cnt < 10 ? cnt + '0' : 'M';
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++)
        cin >> map[y];

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (map[y][x] == '.')
                cout << GetNumberOfMines(x, y);
            else
                cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}
