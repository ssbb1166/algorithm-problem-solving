#include <iostream>
#include <set>
#include <string>
using namespace std;


string res = "Valid", space[36];
char x, y;
bool possible;
set<string> visited;


int dx[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[] = { 2, 1, -1, -2, -2, -1, 1, 2 };


void CheckVisit(string space)
{
    if (visited.find(space) != visited.end())
        res = "Invalid";
}


void CheckValid(int x, int y, int nx, int ny)
{
    possible = false;
    for (int i = 0; i < 8; i++)
        if (x + dx[i] == nx && y + dy[i] == ny)
            possible = true;

    if (!possible) res = "Invalid";
}


int main()
{
    cin >> space[0];

    x = space[0][0];
    y = space[0][1];
    visited.insert(space[0]);

    for (int i = 1; i < 36; i++) {
        cin >> space[i];
        CheckVisit(space[i]);
        CheckValid(x, y, space[i][0], space[i][1]);

        x = space[i][0];
        y = space[i][1];
        visited.insert(space[i]);
    }

    CheckValid(x, y, space[0][0], space[0][1]);

    cout << res;

    return 0;
}
