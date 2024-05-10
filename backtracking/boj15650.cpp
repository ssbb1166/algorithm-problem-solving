#include <iostream>
using namespace std;


int n, m, seq[8];


void FindSequence(int cnt, int num)
{
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            cout << seq[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = num; i <= n; i++) {
        seq[cnt] = i;
        FindSequence(cnt + 1, i + 1);
    }
}


int main()
{
    cin >> n >> m;

    FindSequence(0, 1);

    return 0;
}
