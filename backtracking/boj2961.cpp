#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;


int n, res = 1000000000;
bool selected[10];
pair<int, int> food[10], dish[10];


void Cook(int idx, int cnt, int total)
{
    if (cnt == total) {
        int s = 1, b = 0;
        for (int i = 0; i < cnt; i++) {
            s *= dish[i].first;
            b += dish[i].second;
        }
        res = min(res, abs(s - b));
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!selected[i]) {
            selected[i] = true;
            dish[idx] = food[i];
            Cook(idx + 1, cnt + 1, total);
            selected[i] = false;
        }
    }
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> food[i].first >> food[i].second;

    for (int i = 1; i <= n; i++)
        Cook(0, 0, i);

    cout << res;

    return 0;
}
