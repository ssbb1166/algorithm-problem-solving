#include <iostream>
using namespace std;


int n, m, seq[7];


void FindSequence(int cnt)
{
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            cout << seq[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        seq[cnt] = i;
        FindSequence(cnt + 1);
    }
}


int main()
{
    cin >> n >> m;

    FindSequence(0);

    return 0;
}
