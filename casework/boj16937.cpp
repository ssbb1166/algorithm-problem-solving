#include <iostream>
using namespace std;


int h, w, n, res, r[100], c[100];


int GetArea(int r1, int c1, int r2, int c2)
{
    if (h - r1 >= 0 && w - c1 >= 0 && h - r2 >= 0 && w - c1 - c2 >= 0 ||
        h - r1 >= 0 && w - c1 >= 0 && h - c2 >= 0 && w - c1 - r2 >= 0 ||
        h - r1 >= 0 && w - c1 >= 0 && h - r1 - r2 >= 0 && w - c2 >= 0 ||
        h - r1 >= 0 && w - c1 >= 0 && h - r1 - c2 >= 0 && w - r2 >= 0 ||
        h - c1 >= 0 && w - r1 >= 0 && h - r2 >= 0 && w - r1 - c2 >= 0 ||
        h - c1 >= 0 && w - r1 >= 0 && h - c2 >= 0 && w - r1 - r2 >= 0 ||
        h - c1 >= 0 && w - r1 >= 0 && h - c1 - r2 >= 0 && w - c2 >= 0 ||
        h - c1 >= 0 && w - r1 >= 0 && h - c1 - c2 >= 0 && w - r2 >= 0)
        return r1 * c1 + r2 * c2;

    return 0;
}


int main()
{
    cin >> h >> w >> n;

    for (int i = 0; i < n; i++)
        cin >> r[i] >> c[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            res = max(res, GetArea(r[i], c[i], r[j], c[j]));

    cout << res;

    return 0;
}
