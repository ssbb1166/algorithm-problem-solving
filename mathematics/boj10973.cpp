#include <algorithm>
#include <iostream>
using namespace std;


int n, seq[10000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> seq[i];

    if (prev_permutation(seq, seq + n))
        for (int i = 0; i < n; i++)
            cout << seq[i] << ' ';
    else
        cout << -1;

    return 0;
}
