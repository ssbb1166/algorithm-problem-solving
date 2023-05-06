#include <iostream>
using namespace std;


int n, h, prev_h, cnt;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> h;
        if (prev_h <= h) cnt++;
        prev_h = h;
    }

    cout << cnt << '\n';

    return 0;
}
