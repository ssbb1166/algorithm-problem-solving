#include <iostream>
using namespace std;


int n, p, q, a[100], b[100], cnt[100];
bool possible = true;


int main()
{
    cin >> n >> p >> q;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++) {
        if (a[i] < b[i] && p <= q ||
            a[i] > b[i] && p >= q) {
            possible = false;
            break;
        }
        
        if (a[i] < b[i]) {
            while (a[i] < b[i]) {
                a[i] += p;
                b[i] += q;
                cnt[i]++;
            }
            if (a[i] > b[i])
                possible = false;
        }
        else if (a[i] > b[i]) {
            while (a[i] > b[i]) {
                a[i] += p;
                b[i] += q;
                cnt[i]++;
            }
            if (a[i] < b[i])
                possible = false;
        }
    }

    if (possible) {
        cout << "YES" << '\n';
        for (int i = 0; i < n; i++)
            cout << cnt[i] << ' ';
    }
    else {
        cout << "NO" << '\n';
    }

    return 0;
}
