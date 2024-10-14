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
            for (int j = 0; j < i; j++)
                if (height[i] < height[j])
                    cnt++;
        }

        cout << t << ' ' << cnt << '\n';
    }

    return 0;
}
