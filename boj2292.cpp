#include <iostream>
using namespace std;


int n, cnt;


int main()
{
    cin >> n;

    n--;

    for (cnt = 1; n > 0; cnt++)
        n -= cnt * 6;

    cout << cnt << '\n';

    return 0;
}
