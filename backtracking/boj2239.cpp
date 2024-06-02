#include <iostream>
#include <string>
#include <vector>
using namespace std;


int map[9][9], res[9][9];
bool done;
vector<pair<int, int>> blank;


bool CheckRow(int col, int row, int num)
{
    int cnt = 0;
    for (int x = 0; x < 9; x++)
        if (map[row][x] == num)
            cnt++;

    if (cnt == 0)
        return true;
    return false;
}


bool CheckCol(int col, int row, int num)
{
    int cnt = 0;
    for (int y = 0; y < 9; y++)
        if (map[y][col] == num)
            cnt++;

    if (cnt == 0)
        return true;
    return false;
}


bool CheckBox(int col, int row, int num)
{
    int cnt = 0;
    int box_start_row = row / 3 * 3;
    int box_start_col = col / 3 * 3;
    for (int y = box_start_row; y < box_start_row + 3; y++)
        for (int x = box_start_col; x < box_start_col + 3; x++)
            if (map[y][x] == num)
                cnt++;

    if (cnt == 0)
        return true;
    return false;
}


void FillNumber(int cnt)
{
    if (done)
        return;

    if (cnt == blank.size()) {
        for (int y = 0; y < 9; y++)
            for (int x = 0; x < 9; x++)
                res[y][x] = map[y][x];
        done = true;
        return;
    }

    int x = blank[cnt].first;
    int y = blank[cnt].second;
    if (map[y][x] == 0) {
        for (int num = 1; num <= 9; num++) {
            if (CheckRow(x, y, num) && CheckCol(x, y, num) && CheckBox(x, y, num)) {
                map[y][x] = num;
                FillNumber(cnt + 1);
                map[y][x] = 0;
            }
        }
    }
}


int main()
{
    for (int y = 0; y < 9; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < 9; x++) {
            map[y][x] = line[x] - '0';
            if (line[x] == '0')
                blank.push_back({ x, y });
        }
    }
    
    FillNumber(0);

    for (int y = 0; y < 9; y++) {
        for (int x = 0; x < 9; x++)
            cout << res[y][x];
        cout << '\n';
    }

    return 0;
}
