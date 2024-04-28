#include <iostream>
using namespace std;


int n, c, cycle, cnt;
bool firework[2000001];


int main()
{
    cin >> n >> c;

    for (int i = 0; i < n; i++) {
        cin >> cycle;
        for (int t = 0; t <= c; t += cycle)
            firework[t] = true;
    }

    for (int t = 1; t <= c; t++)
        if (firework[t])
            cnt++;

    cout << cnt << '\n';

    return 0;
}
