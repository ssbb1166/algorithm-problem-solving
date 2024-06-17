#include <iostream>
using namespace std;


int m, n, cnt;


int main()
{
    cin >> m >> n;

    if (m > n)
        cout << 2 * n - 1;
    else
        cout << 2 * m - 2;

    return 0;
}
