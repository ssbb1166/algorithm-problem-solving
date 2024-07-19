#include <iostream>
#include <vector>
using namespace std;


int n;
bool possible;
char map[6][6];
vector<pair<int, int>> teachers, blank;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


bool CanMove(int x, int y)
{
    if (x < 0 || x > n - 1 || y < 0 || y > n - 1)
        return false;
    return true;
}


bool CanAvoid()
{
    for (pair<int, int> teacher : teachers) {
        int x = teacher.first;
        int y = teacher.second;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            while (CanMove(nx, ny) && map[ny][nx] == 'X') {
                nx += dx[i];
                ny += dy[i];
            }
            if (CanMove(nx, ny) && map[ny][nx] == 'S')
                return false;
        }
    }

    return true;
}


void Watch(int idx, int cnt)
{
    if (cnt == 3) {
        if (CanAvoid()) possible = true;
        return;
    }

    for (int i = idx; i < blank.size(); i++) {
        int x = blank[i].first;
        int y = blank[i].second;
        map[y][x] = 'O';
        Watch(i + 1, cnt + 1);
        map[y][x] = 'X';
    }
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            cin >> map[y][x];
            if (map[y][x] == 'T')
                teachers.push_back({ x, y });
            if (map[y][x] == 'X')
                blank.push_back({ x, y });
        }
    }

    Watch(0, 0);

    cout << (possible ? "YES" : "NO");

    return 0;
}
