#include <iostream>
using namespace std;


int n, k, r, house, cnt, res;
bool installed[100001];


int main()
{
    cin >> n >> k >> r;

    for (int i = 0; i < k; i++) {
        cin >> house;
        installed[house] = true;
    }

    for (int i = 1; i <= r; i++)
        cnt += installed[i];
    
    if (cnt < 2) {
        for (int i = r; i >= 1; i--) {
            if (!installed[i]) {
                installed[i] = true;
                cnt++;
                res++;
            }
            if (cnt >= 2) break;
        }
    }

    for (int i = 1; i <= n - r; i++) {
        cnt = cnt - installed[i] + installed[i + r];
        if (cnt < 2) {
            installed[i + r] = true;
            cnt++;
            res++;
        }
    }

    cout << res;

    return 0;
}
