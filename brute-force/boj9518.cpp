#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int r, s, sg, all;
char map[50][50];


int dx[] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int dy[] = { -1, -1, -1, 0, 1, 1, 1, 0 };


int main()
{
    cin >> r >> s;

    for (int y = 0; y < r; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < s; x++)
            map[y][x] = line[x];
    }

    for (int y = 0; y < r; y++) {
        for (int x = 0; x < s; x++) {
            int cnt = 0;
            for (int i = 0; i < 8; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (nx < 0 || nx >= s || ny < 0 || ny >= r)
                    continue;
                if (map[y][x] == '.' && map[ny][nx] != '.')
                    cnt++;
                if (map[y][x] == 'o' && map[ny][nx] == 'o')
                    all++;
            }
            if (map[y][x] == 'o') map[y][x] = 'x';
            sg = max(sg, cnt);
        }
    }

    cout << all + sg;

    return 0;
}
