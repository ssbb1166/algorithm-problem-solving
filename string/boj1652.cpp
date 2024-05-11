#include <iostream>
#include <string>
using namespace std;


int n, cnt[2];
char map[100][100];


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < n; x++)
            map[y][x] = line[x];
    }

    for (int y = 0; y < n; y++) {
        for (int x = 1; x < n; x++) {
            if (map[y][x] == '.' && map[y][x - 1] == '.') {
                cnt[0]++;
                while (map[y][x] == '.' && x < n) x++;
            }
        }
    }

    for (int x = 0; x < n; x++) {
        for (int y = 1; y < n; y++) {
            if (map[y][x] == '.' && map[y - 1][x] == '.') {
                cnt[1]++;
                while (map[y][x] == '.' && y < n) y++;
            }
        }
    }

    cout << cnt[0] << ' ' << cnt[1] << '\n';

    return 0;
}
