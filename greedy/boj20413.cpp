#include <iostream>
#include <string>
using namespace std;


int n, s, g, p, d, total;
string level;


int main()
{
    cin >> n >> s >> g >> p >> d >> level;

    int prev = 0;
    for (int i = 0; i < n; i++) {
        if (level[i] == 'B')
            total += prev = s - 1 - prev;
        else if (level[i] == 'S')
            total += prev = g - 1 - prev;
        else if (level[i] == 'G')
            total += prev = p - 1 - prev;
        else if (level[i] == 'P')
            total += prev = d - 1 - prev;
        else
            total += d;
    }

    cout << total;

    return 0;
}
