#include <algorithm>
#include <iostream>
using namespace std;


int p, t, cnt, height[20];


int main()
{
    cin >> p;

    while (p--) {
        cin >> t;

        cnt = 0;
        for (int i = 0; i < 20; i++) {
            cin >> height[i];
            int j = i, k = i - 1;
            while (k >= 0 && height[j] < height[k]) {
                swap(height[j], height[k]);
                j = k, k = j - 1;
                cnt++;
            }
        }

        cout << t << ' ' << cnt << '\n';
    }

    return 0;
}
