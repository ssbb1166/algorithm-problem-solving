#include <cmath>
#include <iostream>
using namespace std;


int m, n, sum_prime, min_prime;


bool IsPrimeNumber(int x)
{
    if (x == 1) return false;

    for (int i = 2; i <= int(sqrt(x)); i++)
        if (x % i == 0) return false;

    return true;
}


int main()
{
    cin >> m >> n;

    min_prime = n;
    for (int i = m; i <= n; i++) {
        if (IsPrimeNumber(i)) {
            sum_prime += i;
            if (i < min_prime)
                min_prime = i;
        }
    }

    if (sum_prime)
        cout << sum_prime << '\n' << min_prime << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
