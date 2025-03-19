#include <algorithm>
#include <iostream>
#include <vector>
#define X first
#define Y second
#define POINT pair<long long, long long>
using namespace std;


int t, n, a, b, c;
POINT p[100000];
vector<int> convex_hull;


bool IsStartPoint(int i)
{
    if (p[i].Y == p[0].Y)
        return p[i].X < p[0].X;
    return p[i].Y < p[0].Y;
}


long long CCW(POINT a, POINT b, POINT c)
{
    return (a.X * b.Y + b.X * c.Y + c.X * a.Y) - (b.X * a.Y + c.X * b.Y + a.X * c.Y);
}


bool Compare(POINT a, POINT b)
{
    long long wise = CCW(p[0], a, b);
    if (wise) return wise > 0;
    return (a.Y == b.Y) ? a.X < b.X : a.Y < b.Y;
}


int main(int argc, char** argv)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> p[i].X >> p[i].Y;

    for (int i = 1; i < n; i++)
        if (IsStartPoint(i))
            swap(p[0], p[i]);

    sort(p + 1, p + n, Compare);

    convex_hull.push_back(0);
    convex_hull.push_back(1);

    while (c < n) {
        while (convex_hull.size() >= 2) {
            b = convex_hull.back();
            convex_hull.pop_back();
            a = convex_hull.back();

            if (CCW(p[a], p[b], p[c]) > 0) {
                convex_hull.push_back(b);
                break;
            }
        }

        convex_hull.push_back(c++);
    }

    cout << convex_hull.size();

    return 0;
}
