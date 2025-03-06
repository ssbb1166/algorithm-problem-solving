#include <iostream>
#include <string>
using namespace std;


int n;
string image[64];


string GetNumber(int sx, int sy, int n)
{
    bool possible = true;
    char num = image[sy][sx];

    for (int y = sy; y < sy + n; y++)
        for (int x = sx; x < sx + n; x++)
            if (image[y][x] != num)
                possible = false;

    if (possible) return string(1, num);

    string lu = GetNumber(sx, sy, n / 2);
    string ru = GetNumber(sx + n / 2, sy, n / 2);
    string ld = GetNumber(sx, sy + n / 2, n / 2);
    string rd = GetNumber(sx + n / 2, sy + n / 2, n / 2);
    return "(" + lu + ru + ld + rd + ")";
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++)
        cin >> image[y];

    cout << GetNumber(0, 0, n);

    return 0;
}
