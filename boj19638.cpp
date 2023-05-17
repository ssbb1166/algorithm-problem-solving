#include <iostream>
#include <queue>
using namespace std;


int n, t, cnt, height, centi_h, max_h;
priority_queue<int> heights;


int main()
{
    cin >> n >> centi_h >> t;

    for (int i = 0; i < n; i++) {
        cin >> height;
        heights.push(height);
    }

    for (cnt = 0; cnt < t; cnt++) {
        max_h = heights.top();
        if (max_h < centi_h) break;
        if (max_h > 1) {
            max_h >>= 1;
            heights.pop();
            heights.push(max_h);
        }
    }

    max_h = 0;
    for (int i = 0; i < t; i++) {
        if (heights.top() >= centi_h) {
            max_h = heights.top();
            break;
        }
    }

    if (!max_h) {
        cout << "YES" << '\n';
        cout << cnt << '\n';
    }
    else {
        cout << "NO" << '\n';
        cout << max_h << '\n';
    }

    return 0;
}
