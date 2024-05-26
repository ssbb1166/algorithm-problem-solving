#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;


int t, n, x[20], y[20];
bool selected[20];
double res;


double CalculateLength()
{
    double total_x = 0, total_y = 0;

    for (int i = 0; i < n; i++) {
        if (selected[i]) {
            total_x -= x[i];
            total_y -= y[i];
        }
        else {
            total_x += x[i];
            total_y += y[i];
        }
    }

    return total_x * total_x + total_y * total_y;
}


void Backtracking(int idx, int cnt)
{
    if (cnt == n / 2) {
        res = min(res, CalculateLength());
        return;
    }

    for (int i = idx; i < n; i++) {
        selected[i] = true;
        Backtracking(i + 1, cnt + 1);
        selected[i] = false;
    }
}


int main()
{
    cin >> t;
    cout << fixed;
    cout.precision(6);

    while (t--) {
        cin >> n;
        
        for (int i = 0; i < n; i++)
            cin >> x[i] >> y[i];

        res = 8e12;
        Backtracking(0, 0);

        cout << sqrt(res) << '\n';
    }

    return 0;
}
