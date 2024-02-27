#include <iostream>
using namespace std;


int n, x, y, cnt[5];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x > 0 && y > 0)
            cnt[1]++;
        else if (x < 0 && y > 0)
            cnt[2]++;
        else if (x < 0 && y < 0)
            cnt[3]++;
        else if (x > 0 && y < 0)
            cnt[4]++;
        else
            cnt[0]++;
    }

    cout << "Q1: " << cnt[1] << '\n';
    cout << "Q2: " << cnt[2] << '\n';
    cout << "Q3: " << cnt[3] << '\n';
    cout << "Q4: " << cnt[4] << '\n';
    cout << "AXIS: " << cnt[0] << '\n';

    return 0;
}
