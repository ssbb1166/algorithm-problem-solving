#include <cmath>
#include <iostream>
using namespace std;


int m, n, sum_prime, min_prime;
bool prime[10001];


int main()
{
    cin >> m >> n;

    for (int i = 2; i <= 10000; i++)
        prime[i] = true;

    for (int i = 2; i <= int(sqrt(n)); i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j <= n; j += i)
            prime[j] = false;
    }

    min_prime = n;
    for (int i = m; i <= n; i++) {
        if (prime[i]) {
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
