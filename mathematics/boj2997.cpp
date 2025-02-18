#include <algorithm>
#include <iostream>
using namespace std;


int seq[3], d1, d2, d;


int main()
{
    for (int i = 0; i < 3; i++)
        cin >> seq[i];

    sort(seq, seq + 3);

    d1 = seq[1] - seq[0];
    d2 = seq[2] - seq[1];
    d = min(d1, d2);

    if (d1 > d2)
        cout << seq[0] + d;
    else if (d1 < d2)
        cout << seq[1] + d;
    else
        cout << seq[2] + d;

    return 0;
}
