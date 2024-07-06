#include <string>
#include <vector>
using namespace std;


void Rotate(vector<vector<int>>& key) {
    int m = key.size();
    int res[20][20];

    for (int y = 0; y < m; y++)
        for (int x = 0; x < m; x++)
            res[x][m - y - 1] = key[y][x];

    for (int y = 0; y < m; y++)
        for (int x = 0; x < m; x++)
            key[y][x] = res[y][x];
}


bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
    int n = lock.size();
    int m = key.size();

    for (int d = 0; d < 4; d++) {
        for (int key_sy = -m + 1; key_sy < n + m; key_sy++) {
            for (int key_sx = -m + 1; key_sx < n + m; key_sx++) {
                int res[20][20];
                for (int y = 0; y < n; y++)
                    for (int x = 0; x < n; x++)
                        res[y][x] = lock[y][x];

                int check_sx = (key_sx < 0) ? 0 : key_sx;
                int check_sy = (key_sy < 0) ? 0 : key_sy;
                int check_ex = (key_sx + m > n) ? n : key_sx + m;
                int check_ey = (key_sy + m > n) ? n : key_sy + m;

                for (int y = check_sy; y < check_ey; y++)
                    for (int x = check_sx; x < check_ex; x++)
                        res[y][x] = key[y - key_sy][x - key_sx] ^ lock[y][x];

                bool possible = true;
                for (int y = 0; y < n; y++)
                    for (int x = 0; x < n; x++)
                        if (res[y][x] == 0) possible = false;

                if (possible) return true;
            }
        }

        Rotate(key);
    }

    return false;
}
