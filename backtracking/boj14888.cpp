#include <iostream>
using namespace std;


int n, a[11], op[4];
int max_res = -1000000000;
int min_res = 1000000000;


void Calculate(int res, int idx)
{
    if (idx == n) {
        if (res > max_res)
            max_res = res;
        if (res < min_res)
            min_res = res;
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (op[i] > 0) {
            op[i]--;
            switch (i) {
            case 0:
                Calculate(res + a[idx], idx + 1);
                break;
            case 1:
                Calculate(res - a[idx], idx + 1);
                break;
            case 2:
                Calculate(res * a[idx], idx + 1);
                break;
            case 3:
                Calculate(res / a[idx], idx + 1);
                break;
            }
            op[i]++;
        }
    }
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < 4; i++)
        cin >> op[i];

    Calculate(a[0], 1);

    cout << max_res << '\n';
    cout << min_res << '\n';

    return 0;
}
