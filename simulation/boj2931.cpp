#include <iostream>
#include <string>
#define UP 1
#define DOWN 2
#define LEFT 4
#define RIGHT 8
using namespace std;


int r, c, map[25][25];
string line;


int ToCode(char block)
{
    switch (block) {
    case '.': return 0;
    case '+': return UP + DOWN + LEFT + RIGHT;
    case '|': return UP + DOWN;
    case '-': return LEFT + RIGHT;
    case '1': return DOWN + RIGHT;
    case '2': return UP + RIGHT;
    case '3': return UP + LEFT;
    case '4': return DOWN + LEFT;
    default: return -1;
    }
}


char ToBlock(int code)
{
    if ((code & UP) && (code & DOWN) && (code & LEFT) && (code & RIGHT))
        return '+';
    if ((code & UP) && (code & DOWN))
        return '|';
    if ((code & LEFT) && (code & RIGHT))
        return '-';
    if ((code & DOWN) && (code & RIGHT))
        return '1';
    if ((code & UP) && (code & RIGHT))
        return '2';
    if ((code & UP) && (code & LEFT))
        return '3';
    if ((code & DOWN) && (code & LEFT))
        return '4';

    return '0';
}


void FindRemovedBlock()
{
    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++) {
            if (!map[y][x]) {
                if (y > 0 && map[y - 1][x] > 0 && (map[y - 1][x] & DOWN))
                    map[y][x] += UP;
                if (y < r - 1 && map[y + 1][x] > 0 && (map[y + 1][x] & UP))
                    map[y][x] += DOWN;
                if (x > 0 && map[y][x - 1] > 0 && (map[y][x - 1] & RIGHT))
                    map[y][x] += LEFT;
                if (x < c - 1 && map[y][x + 1] > 0 && (map[y][x + 1] & LEFT))
                    map[y][x] += RIGHT;
                if (map[y][x]) {
                    cout << y + 1 << ' ' << x + 1 << ' ' << ToBlock(map[y][x]);
                    return;
                }
            }
        }
    }
}


int main()
{
    cin >> r >> c;

    for (int y = 0; y < r; y++) {
        cin >> line;
        for (int x = 0; x < c; x++)
            map[y][x] = ToCode(line[x]);
    }

    FindRemovedBlock();

    return 0;
}
