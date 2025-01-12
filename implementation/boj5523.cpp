#include <iostream>
using namespace std;


int n, a, b, acnt, bcnt;


int main()
{
    cin >> n;

    for (int round = 1; round <= n; round++) {
        cin >> a >> b;
        if (a > b) acnt++;
        if (a < b) bcnt++;
    }

    cout << acnt << ' ' << bcnt;

    return 0;
}
