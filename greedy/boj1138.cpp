#include <iostream>
using namespace std;


int n, cnt, idx, pos[10];


int main()
{
    cin >> n;

    for (int num = 1; num <= n; num++) {
        cin >> cnt;

        idx = 0;
        for (int i = 0; i < n; i++) {
            if (pos[i]) continue;
            if (idx++ == cnt) {
                pos[i] = num;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << pos[i] << ' ';

    return 0;
}
