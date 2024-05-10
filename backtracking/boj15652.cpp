#include <iostream>
using namespace std;


int n, m, seq[8];


void FindSequence(int cnt, int prev)
{
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            cout << seq[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (i >= prev) {
            seq[cnt] = i;
            FindSequence(cnt + 1, i);
        }
    }
}


int main()
{
    cin >> n >> m;

    FindSequence(0, 0);

    return 0;
}
