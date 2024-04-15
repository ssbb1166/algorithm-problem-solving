#include <algorithm>
#include <iostream>
using namespace std;


int n, m, a[8], seq[8];


void FindSequence(int cnt, int num)
{
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            cout << seq[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        if (i >= num) {
            seq[cnt] = a[i];
            FindSequence(cnt + 1, i);
        }
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    FindSequence(0, 0);

    return 0;
}
