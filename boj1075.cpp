#include <iostream>
using namespace std;


int n, f;


int main()
{
    cin >> n >> f;

    n = n / 100 * 100;

    while (n % f != 0)
        n++;

    n %= 100;

    if (n < 10)
        cout << 0 << n << '\n';
    else
        cout << n << '\n';

    return 0;
}
