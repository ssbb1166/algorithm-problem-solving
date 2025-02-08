#include <iostream>
using namespace std;


int n, t, minutes, total, cnt;


int main()
{
    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        cin >> minutes;
        total += minutes;
        if (total <= t) cnt++;
    }

    cout << cnt;

    return 0;
}
