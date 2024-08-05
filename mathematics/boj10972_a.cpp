#include <algorithm>
#include <iostream>
using namespace std;


int n, idx1, idx2, seq[10001];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> seq[i];

    for (idx1 = n - 1; idx1 > 0 && seq[idx1] > seq[idx1 + 1]; idx1--);
    for (idx2 = idx1; idx2 < n && seq[idx2 + 1] > seq[idx1]; idx2++);

    if (idx1 > 0) {
        swap(seq[idx1], seq[idx2]);
        sort(seq + idx1 + 1, seq + n + 1);
        for (int i = 1; i <= n; i++)
            cout << seq[i] << ' ';
    }
    else {
        cout << -1;
    }

    return 0;
}
