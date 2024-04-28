#include <cmath>
#include <iostream>
using namespace std;


int n, x, cnt;


bool IsPrimeNumber(int x)
{
    if (x == 1) return false;

    for (int i = 2; i <= int(sqrt(x)); i++)
        if (x % i == 0) return false;

    return true;
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (IsPrimeNumber(x)) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
